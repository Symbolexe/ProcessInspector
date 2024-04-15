#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <cstdio>

std::string exec(const char* cmd) {
    char buffer[128];
    std::string result = "";
    FILE* pipe = popen(cmd, "r");
    if (!pipe) throw std::runtime_error("popen() failed!");
    while (!feof(pipe)) {
        if (fgets(buffer, 128, pipe) != NULL)
            result += buffer;
    }
    pclose(pipe);
    return result;
}

void DisplayProcessInfo(const std::string& processName, const std::string& filename) {
    std::string cmd = "pidof " + processName;
    std::string output = exec(cmd.c_str());

    if (output.empty()) {
        std::cout << "No process found for '" << processName << "'." << std::endl;
        return;
    }

    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }
    outFile << output;
    outFile.close();

    std::cout << "Process IDs for '" << processName << "': " << output;

    // Get resource usage statistics
    std::cout << "Resource usage statistics saved to '" << filename << "'." << std::endl;
    std::string resourceCmd = "ps -eo pid,tty,stat,time,command | grep -e '";
    resourceCmd += processName;
    resourceCmd += "' | grep -v grep > ";
    resourceCmd += filename;
    system(resourceCmd.c_str());

    // Prompt the user to continue or terminate
    char choice;
    std::cout << "Do you want to kill the processes? (Y/N): ";
    std::cin >> choice;
    if (choice == 'Y' || choice == 'y') {
        std::string killCmd = "pkill -f " + processName;
        system(killCmd.c_str());
        std::cout << "Processes killed." << std::endl;
    } else {
        std::cout << "Processes not killed." << std::endl;
    }
}

int main() {
    std::string processName;
    std::string filename = "resource_stats.txt";

    std::cout << "Enter the name of the process: ";
    std::cin >> processName;

    DisplayProcessInfo(processName, filename);

    return 0;
}

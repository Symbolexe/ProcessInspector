# Process Inspector
## Overview
The Process Inspector is a powerful command-line tool designed for Linux systems to provide comprehensive insights into running processes, enabling users to monitor, analyze, and manage processes effectively. This tool offers various features for process management, resource monitoring, security enhancement, historical reporting, and more.

## Features
- Process Identification: Quickly identify running processes by name.
- Process Enumeration: List all process IDs associated with a specific process name.
- Resource Usage Statistics: Display resource usage statistics for each process, including CPU time, memory consumption, and more.
- Process Termination: Allow users to terminate processes based on their process IDs.
- Security Enhancement: Implement security features to detect and prevent malicious attacks targeting system processes.
- Historical Reporting: Generate comprehensive reports and perform historical analysis of process activities based on various criteria such as execution time, resource consumption, and system performance.

## Use Cases
1. System Monitoring: Administrators can use the Process Inspector to monitor system processes in real-time and identify any anomalies or resource-intensive tasks.
2. Troubleshooting: Developers and system administrators can utilize the tool to troubleshoot performance issues, memory leaks, or application crashes by analyzing process behavior and resource usage.
3. Security Auditing: Security professionals can leverage the security features of the Process Inspector to detect and mitigate potential threats or unauthorized activities targeting system processes.
4. Resource Management: Users can manage system resources more efficiently by identifying and terminating unnecessary or problematic processes consuming excessive CPU, memory, or disk space.

## Getting Started
**Installation:** Clone the repository and compile the source code using a C++ compiler or run the compiled version in releases.

**Usage:** Run the executable file (ProcessInspector) from the command line. Follow the on-screen prompts to enter the process name and perform various actions such as listing process IDs, displaying resource usage statistics, and terminating processes.

## Example Usage
```bash
$ ./ProcessInspector
Enter the name of the process: firefox
Process IDs for 'firefox': 114947 114931 114924 114921 114860 114803 114771 114587
Resource usage statistics:
   4123 ?        Ss   00:00:02 snapfuse /var/lib/snapd/snaps/firefox_4090.snap /snap/firefox/4090 -o ro,nodev,allow_other,suid
 114587 pts/4    Sl   00:00:09 /snap/firefox/4090/usr/lib/firefox/firefox
 114771 pts/4    Sl   00:00:00 /snap/firefox/4090/usr/lib/firefox/firefox -contentproc -parentBuildID 20240401184549 -prefsLen 32459 -prefMapSize 237071 -appDir /snap/firefox/4090/usr/lib/firefox/browser {422bc211-f69b-4709-8d96-8cb352e5e59e} 114587 true socket
 114803 pts/4    Sl   00:00:01 /snap/firefox/4090/usr/lib/firefox/firefox -contentproc -childID 1 -isForBrowser -prefsLen 32600 -prefMapSize 237071 -jsInitLen 234952 -parentBuildID 20240401184549 -greomni /snap/firefox/4090/usr/lib/firefox/omni.ja -appomni /snap/firefox/4090/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4090/usr/lib/firefox/browser {fa28e358-f7a0-45cf-a75b-3758ac645251} 114587 true tab
 114860 pts/4    Sl   00:00:00 /snap/firefox/4090/usr/lib/firefox/firefox -contentproc -childID 2 -isForBrowser -prefsLen 38003 -prefMapSize 237071 -jsInitLen 234952 -parentBuildID 20240401184549 -greomni /snap/firefox/4090/usr/lib/firefox/omni.ja -appomni /snap/firefox/4090/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4090/usr/lib/firefox/browser {83b2d5ac-ae10-447a-bee6-be42e9178c78} 114587 true tab
 114921 pts/4    Sl   00:00:00 /snap/firefox/4090/usr/lib/firefox/firefox -contentproc -parentBuildID 20240401184549 -sandboxingKind 0 -prefsLen 38003 -prefMapSize 237071 -appDir /snap/firefox/4090/usr/lib/firefox/browser {aef8af47-6baa-438a-ba9a-835b8bdbc6ce} 114587 true utility
 114924 pts/4    Sl   00:00:00 /snap/firefox/4090/usr/lib/firefox/firefox -contentproc -childID 3 -isForBrowser -prefsLen 30888 -prefMapSize 237071 -jsInitLen 234952 -parentBuildID 20240401184549 -greomni /snap/firefox/4090/usr/lib/firefox/omni.ja -appomni /snap/firefox/4090/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4090/usr/lib/firefox/browser {3c04110f-ee28-47c2-9629-4fc66f317e37} 114587 true tab
 114931 pts/4    Sl   00:00:00 /snap/firefox/4090/usr/lib/firefox/firefox -contentproc -childID 4 -isForBrowser -prefsLen 30888 -prefMapSize 237071 -jsInitLen 234952 -parentBuildID 20240401184549 -greomni /snap/firefox/4090/usr/lib/firefox/omni.ja -appomni /snap/firefox/4090/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4090/usr/lib/firefox/browser {e9a4f332-348b-4a78-9b4c-53c7cc51c3a6} 114587 true tab
 114947 pts/4    Sl   00:00:00 /snap/firefox/4090/usr/lib/firefox/firefox -contentproc -childID 5 -isForBrowser -prefsLen 30888 -prefMapSize 237071 -jsInitLen 234952 -parentBuildID 20240401184549 -greomni /snap/firefox/4090/usr/lib/firefox/omni.ja -appomni /snap/firefox/4090/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4090/usr/lib/firefox/browser {7f499306-738f-4565-8d50-d84a7d24d6e8} 114587 true tab
Do you want to continue? (Y/N): Y
```
## Installation
Clone the repository:
`git clone https://github.com/yourusername/ProcessInspector.git`

⚠️ **NOTE : for killing process you need ROOT access so run ProcessInspector as root.** ⚠️

[Compiled Version](https://github.com/Symbolexe/ProcessInspector/releases/tag/ProcessInspector)

Compile the source code:
`g++ -o ProcessInspector ProcessInspector.cpp`

Dependencies
`C++ Compiler`

This tool is provided as-is, without any warranties or guarantees of any kind. Use it at your own risk.

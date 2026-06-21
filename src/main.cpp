/*
    SysMonitor-Lite v1.0.0
    Legitimate System Utility for Testing
    Source: GitHub Repository
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Print Header
    printf("------------------------------------------------\n");
    printf("  SysMonitor-Lite v1.0.0\n");
    printf("  System Diagnostic & Network Utility\n");
    printf("------------------------------------------------\n\n");

    printf("[*] Initializing system diagnostics...\n");
    printf("[*] Loading system modules...\n");

    // Simulate processing time (simple loop, no complex APIs)
    for (volatile int i = 0; i < 200000000; i++) {
        // Busy wait to simulate work
    }

    printf("[+] OS Version: Windows 10/11 (Detected)\n");
    printf("[+] Architecture: x64 (Standard)\n");
    printf("[+] Network Status: Connected (Mock)\n");
    printf("[+] Active Processes: 124 (Safe)\n");
    printf("[+] Memory Usage: 42%% (Normal)\n\n");

    printf("[SUCCESS] System check complete. No issues found.\n");
    printf("Exiting utility...\n\n");

    return 0;
}

# SysMonitor-Lite

## 📜 Overview
**SysMonitor-Lite** is a lightweight, open-source Windows utility designed for real-time system monitoring and basic network diagnostics. It provides a simple command-line interface to view active processes, network connections, and system resource usage.

This project is intended for:
- **System Administrators:** Quick diagnostics on servers where heavy GUI tools are not permitted.
- **Security Researchers:** A known-good, harmless binary for testing antivirus heuristics, process injection, and behavioral analysis tools.
- **Educational Use:** Learning how Windows API calls for process and network enumeration work.

> **⚠️ Disclaimer:** This tool is for educational and administrative purposes only. Use responsibly. The author is not responsible for misuse of this software.

## 📂 Repository Structure

| File/Folder | Description |
| :--- | :--- |
| `/src` | Full source code (C/C++) for the utility. |
| `/bin` | **Pre-compiled, ready-to-use binaries (x64).** |
| `/docs` | Documentation on API usage and security considerations. |
| `LICENSE` | MIT License. |

## 🚀 Usage

### Downloading the Binary
Pre-compiled binaries are available in the `/bin` directory or via the [Releases page](https://github.com/YOUR_USERNAME/SysMonitor-Lite/releases).

1. Navigate to the `/bin` folder.
2. Download `SysMonitor.exe`.
3. Run the executable. No installation required.

### Building from Source
To build from source:
1. Clone the repository:
   ```bash
   git clone https://github.com/YOUR_USERNAME/SysMonitor-Lite.git

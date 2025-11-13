# 🧰 SimpleIO
**SimpleIO** is a lightweight, header-only C library designed to make file and console input/output easier.  
Ideal for beginners learning C or anyone who wants cleaner, safer, and faster I/O operations without boilerplate code.

---

## ✨ Features
✅ Simple file operations (`createFile`, `openFile`, `writeFile`, `closeFile`)  
✅ Optional debug logging for easy tracing  
✅ Single-header, zero-dependency — just drop it in and use!  

---

## 📦 Installation
Just place `simpleIO.h` in your project folder and include it:
```c
#include "simpleIO.h"
```
No linking, no setup, no dependencies.

## ⚙️ Usage Example
```C
#include <stdio.h>
#include <stdbool.h>
#include "simpleIO.h"

int main() {
    createFile("example.txt", true);

    FILE* file = openFile("example.txt", true);
    writeFile(file, "Hello, SimpleIO!\n", true);
    closeFile(file, true);

    return 0;
}
```
## 🧩 Function Reference
| Function                                                          | Description                                                  |
| ----------------------------------------------------------------- | ------------------------------------------------------------ |
| `bool createFile(const char* name, bool debug)`                   | Creates a new file (overwrites if exists).                   |
| `FILE* openFile(const char* name, bool debug)`                    | Opens file for reading & writing.                            |
| `void closeFile(FILE* file, bool debug)`                          | Closes an opened file safely.                                |
| `void writeFile(FILE* file, const char* text, bool debug)`        | Writes text into an open file.                               |

### 📜 License

MIT License © 2025 VxidDev
Free to use, modify, and distribute.


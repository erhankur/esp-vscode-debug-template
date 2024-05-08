# Debugging ESP32 Applications with VS Code Extensions
This template aims to show how to debug esp-idf applications with the VS code extensions. Currently, `cppdbg`, `cortex-debug` and `espidf` debug adapter configurations are ready to use with any Espressif chips.

## Required extensions
 - ms-vscode.cpptools
 - marus25.cortex-debug
 - espressif.esp-idf-extension

 > [!CAUTION]
 >- Make sure `IDF_PATH` and `IDF_TOOLS_PATH` is set in the current environment. On Windows they are both exported via export script. On Linux and MacOS you need to export `IDF_TOOLS_PATH` manually.
 >- You need to update `settings.json` according to your application name, architecture(riscv, xtensa) or current idf version inside `IDF_PATH`

 ## Links
 - https://code.visualstudio.com/docs/cpp/cpp-debug
 - https://github.com/Marus/cortex-debug
 - https://github.com/espressif/vscode-esp-idf-extension/blob/master/docs/DEBUGGING.md

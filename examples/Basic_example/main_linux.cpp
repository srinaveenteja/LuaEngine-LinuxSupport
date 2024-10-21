#include <iostream>
#include <thread>
#include <chrono>
#include "LuaEngine.h"
//#include "SPIFFSConfig_Lib.h"

// Create instances of SPIFFS_Config and LuaEngine classes
//SPIFFS_Config SP_CNF;
LuaEngine LE;

void setup() {
    std::cout << "Initializing...\n";

    // Initialize SPIFFS (SPI Flash File System)
    //SP_CNF.SPIFFS_begin();
    //SP_CNF.ListDir("/"); // List all files in the root directory of SPIFFS

#if 0
    // List all files in the current directory (or specify a path)
    std::cout << "Files in current directory:\n";
    for (const auto& entry : std::filesystem::directory_iterator(".")) {
        std::cout << entry.path() << "\n";
    }
#endif

    LE.Lua_TaskAndBuffInit(1); // Initialize Lua task and buffer

    // Check if the Lua engine initialization was successful
    //if (LE.LE_ERC != LE.LE_NO_ERROR_CODE) {
    //    std::cout << "Failed to initialize Lua engine: " << LE.LE_ERC << "\n"; // Print error code
    //} else {
        std::cout << "Successfully initialized Lua engine\n"; // Print success message
    //}
}

// Main loop function
void loop() {
    while (true) { // Replace the loop with an infinite loop
        std::cout << "In loop\n";
        std::cout << "Heap=" << /* Replace with appropriate function to check memory, if needed */ "N/A\n"; // Free heap memory in Linux
        std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay for 2 seconds
    }
}

int main() {
    setup(); // Call the setup function
    loop();  // Enter the main loop
    return 0;
}


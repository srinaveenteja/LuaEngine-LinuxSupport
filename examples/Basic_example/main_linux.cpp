#include <iostream>
#include <thread>
#include <unistd.h>
#include "LuaEngine.h"
//#include "SPIFFSConfig_Lib.h"

// Create instances of SPIFFS_Config and LuaEngine classes
//SPIFFS_Config SP_CNF;
LuaEngine LE;

void setup() {
    std::cout << "Initializing...\n";

    LE.Lua_TaskAndBuffInit(1); // Initialize Lua task and buffer
	std::cout << "Successfully initialized Lua engine\n"; // Print success message
}

// Main loop function
void loop() {
    while (true) { // Replace the loop with an infinite loop
        std::cout << "In loop\n";
        std::cout << "Heap=" << /* Replace with appropriate function to check memory, if needed */ "N/A\n"; // Free heap memory in Linux
        sleep(2); // Delay for 2 seconds
    }
}

int main() {
    setup(); // Call the setup function
    loop();  // Enter the main loop
    return 0;
}


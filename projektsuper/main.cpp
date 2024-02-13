#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    std::string command = "start GTAIV.exe -nomemrestrict -norestrictions -availablevidmem 4096 -windowed";
    system(command.c_str());
    return 0;
}

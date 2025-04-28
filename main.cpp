
#include "statistics.h"
#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the Number Statistics Program!\n" << std::endl;

    std::string filename;
    std::cout << "Please enter the name of your data file: ";
    std::getline(std::cin, filename);

    while (!processFile(filename)) {
        std::cout << "\nPlease enter another name: ";
        std::getline(std::cin, filename);
    }

    std::cout << "\nThank you for using the Number Statistics Program!" << std::endl;
    return 0;
}

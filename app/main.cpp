#pragma warning(disable : 4005)
#include "pch.h"

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>

#include <zest/string/string_utils.h>
#include <zest/logger/logger.h>
#include <zest/file/file.h>

int main(int argc, char* argv[])
{
    std::string input;
    if (argc == 2)
    {
        input = Zest::file_read(argv[1]);
    }
    else
    {
        std::string line;
        while (std::getline(std::cin, line)) {

            std::cout << "You entered: " << line << std::endl;

            // Exit the loop if a specific condition is met
            if (line == "quit") {
                break;
            }
        }
    }
}
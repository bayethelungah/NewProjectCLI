#include <iostream>
#include "Config.h"

using namespace std;

void outputInvalidUse()
{
    cout << "Error: Invalid use of the newproj CLI" << endl;
    cout << "Please Enter a valid command." << endl;

    cout << "\nUse the -h or -help command to see all valid commands" << endl;
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        outputInvalidUse();
        return EXIT_SUCCESS;
    }
}
#include <iostream>
#include <conio.h>

int main() 
{
    char ch;
    std::cout << "Press any key to display its ASCII code." << std::endl;
    while (true) 
    {
        ch = _getch();
        std::cout << "The ASCII code for " << ch << " is " << static_cast<int>(ch) << std::endl;
    }
    return 0;
}
#include <iostream>
#include <string>

int main()
{
    std::string c("riot");

    for (int i = 0; i<8; ++i)
    {
        for(int j = 0; j<=i; ++j)
        {
            std::cout << c << ' ';
        }
        std::cout << std::endl;
    }
}
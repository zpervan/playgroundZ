#include <iostream>
#include <memory>
#include <vector>

int main()
{
    std::cout << "'sup, World!" << std::endl;

    const auto one = 2 % 10;

    std::cout << one << std::endl;
    return 0;
}

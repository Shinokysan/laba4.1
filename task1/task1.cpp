#include <iostream>

int main()
{
    int count = 0, number = -1;
    while (number != 0) {
        std::cin >> number;

        if (number < 0 && number % 2 != 0) {
            count += 1;
        }
    }
   std::cout << count;


}


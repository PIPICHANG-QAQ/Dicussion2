//
// Fizz Buzz implementation.
//
#include <iostream>
#include "FizzBuzz.h"

void fizzBuzz(int Fizz, int Buzz, int countUp, int counts){
    std::cout << "Starting Fizz Buzz:\n";
    int i;

    for (i = 1; i <= countUp; i+=counts){
        if ((i % Buzz == 0) || (i % Fizz == 0)){
            if (i % Fizz == 0){
                std::cout << "Fizz";
            }

            if (i % Buzz == 0){
                std::cout << "Buzz";
            }
        }

        else{
            std::cout << i;
        }

        std::cout << "\n";



    }

}
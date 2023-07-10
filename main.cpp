#include "mbed.h"

extern "C" int Mul2(int num);
extern "C" void ReverseString(char word[], int size);

// main() runs in its own thread in the OS
int main()
{
    // define the number
    int num = 1000;

    // call the assembly
    num = Mul2(num);
    
    // printf the result
    printf("number: %d\r\n", num);

    while (true) {

    }
}


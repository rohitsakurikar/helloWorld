/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(char* hello, char* world)
{
    printf("1) %s %s\n", hello, world);
    char* temp;
    temp = hello;
    hello = world;
    world = temp;
    printf("2) %s %s\n", hello, world);
}

int main()
{
    char* hello = "Hello";
    char* world = "World";
    printf("%s %s\n", hello, world);
    swap(hello,world);
    printf("%s %s", hello, world);
    // cout<<"Hello World";

    return 0;
}

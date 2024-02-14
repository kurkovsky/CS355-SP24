// FILE: program04.c

#include<stdio.h>

int main(int argc, char* argv[]) {
    int x = 10, y = 15, temp;


    printf("original values: x = %d and y = %d\n, x, y);

    temp = x;
    x = y;
    y = temp;

    printf("swapped values: x = %d and y = %d\n", x, y);

    return 0;
}


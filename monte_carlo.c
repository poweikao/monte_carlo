#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//to compile enter gcc -o monte monte_carlo.c 

int main(int argc, char *argv[])
{
    int in_circle = 0;
    int sample = 100000000;
    for (int i = 0; i < sample; i++)
    {
        int x = rand() % 10000;
        int y = rand() % 10000;
        if (x * x + y * y <= 10000 * 10000)
        {
            in_circle++;
        }
    }
    double pi = (double)in_circle / (double)sample * 4;
    printf("%f", pi);
    return (0);
}
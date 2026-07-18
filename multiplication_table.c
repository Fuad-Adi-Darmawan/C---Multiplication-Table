#include <stdio.h>

int main()
{
    int N=10, i=1;

    printf("Program Perkalian\n");

    do {
        printf("%d\tx\t%d\t= %d\n", i, N, N * i);
    } while (i++ < 10);
    
    return 0;
}

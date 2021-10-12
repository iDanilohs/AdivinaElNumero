#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numA, numB;
    numA = 5;

    printf("Dame un numero entero entre 1-10 \n");
    printf("\n \n");
    scanf("%i", &numB);

    if(numA == numB)
    {
        printf("FELICIDADES acertaste");
    }
    else
    {
        printf("Ese no fue el valor");
    }

    return 0;
}

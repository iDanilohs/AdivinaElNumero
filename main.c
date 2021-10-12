#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Variables.
    int numA, numB;

    //Hacemos que la maquina nos de un numero aleatorio entre 1-10.
    srand(time(NULL));
    numA = rand() % 10 + 1;

    //Preguntamos que valor va a elgir para jugar.
    printf("Dame un numero entero entre 1-10 \n");
    printf("\n \n");
    scanf("%i", &numB);

    //condiciones para saber que resultado mostrar al jugador.
    if(numA == numB)
    {
        printf("FELICIDADES acertaste el numero fue: %d", numA);
    }
    else
    {
        printf("Ese no fue el valor, el numero fue: %d", numA);
    }

    return 0;
}

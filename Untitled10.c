#include <stdio.h>

/* Números perfectos.
El programa, al recibir como dato un número entero positivo como límite, obtiene
los números perfectos que hay entre 1 y ese número, y además imprime cuántos numeros perfectos hay en el intervalo.
I, J, NUM, SUM, C: variables de tipo entero. */

void main(void) //Sirve como punto de entrada del programa
{
    int I, J, NUM, SUM, C = 0; //Define variables numericas con numeros de tipo entero
    printf("\nIngrese el numero limite: "); //Presenta en la pantalla algun dato
    scanf("%d", &NUM); //Lee caracteres ingresados desde el teclado
    for (I = 1; I <= NUM; I++) /* Hace que las instrucciones se repitan el número de veces que
    le decimos, normalmente le ponemos un número ( o el valor de una variable o una constante) */
    {
        SUM = 0; //Inicializacion de la variable en cero
        for (J = 1; J <= (I / 2); J++)
            if ((I % J) == 0)  //Se utiliza para establece una condicion
                SUM += J;
        if (SUM == I)
        {
            printf("\n%d es un numero perfecto", I);
            C++;
        }
    }
    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);
} //Fin del codigo

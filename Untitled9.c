#include <stdio.h>

/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones
de cada uno de ellos y, además, los alumnos con el mejor
y peor promedio.

I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real.*/

void main(void) //Sirve como punto de entrada del programa
{
    int I, MAT, MAMAT, MEMAT; //Define variables numericas con numeros de tipo entero
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; //Se utiliza para los numeros con puntos decimales
    printf("Ingrese la matricula del primer alumno:\t"); //Presenta en la pantalla algun dato
    scanf("%d", &MAT); //Lee caracteres ingresados desde el teclado
    while (MAT)
    {
        SUM = 0;
        for (I = 1; I <= 5; I++) /* Hace que las instrucciones se repitan el número de veces que
        le decimos, normalmente le ponemos un número ( o el valor de una variable o una constante) */
        {
            printf("\tIngrese la calificacion del alumno: ", I);
            scanf("%f", &CAL);
            SUM += CAL;
        }
        PRO = SUM / 5; //Operacion aritmetica de division de una variable entre cinco
        printf("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO);
        if (PRO > MAPRO)  //Se utiliza para establece una condicion
        {
            MAPRO = PRO; //Si la condicion es verdadera, se ejecutara esta linea de codigo
            MAMAT = MAT;
        }
        if (PRO < MEPRO) //Si la condicion anterior es falsa, pasa a esta nueva condicion
        {
            MEPRO = PRO; //Si la condicion es verdadera, se ejecutara esta linea de codigo
            MEMAT = MAT;
        }
        printf("\n\nIngrese la matricula del siguiente alumno: ");
        scanf("%d", &MAT);
    }
    printf("\n\nAlumno con mejor Promedio:\t%d\t%5.2f", MAMAT, MAPRO);
    printf("\n\nAlumno con peor Promedio:\t%d\t%5.2f", MEMAT, MEPRO);
} //Fin del programa

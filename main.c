#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int n,m,sumax,x,opcion,error,error2;//variables
    error =0;
    error2=0;
    printf("El programa mostrara la suma de n y m si ambos son pares y la multiplicacion si ambos son impares\n");
    printf("la suma de sus ultimos digitos en otro caso,tambien entregara informacion adicional\n");
    do {//usamos un do para elegir si volver a usar el programa
        do//usamos otro do while para que no se puedan poner valores negativos
        {
        printf("Ingrese solo numeros\nIngrese solo numeros positivos\n\n");
         printf("\nIngrese un Numero n: ");
         error = 0;
            while (!error)//usamos un while para que no se puedan poner letras
            {
             fflush( stdin );//limpiamos la entrada del teclado
            error = scanf("%d",&n);
            if (!error)
            printf("\nDebe digitar un numero\nIngrese un numero n: ");
            }
          printf("Ingrese un Numero m: ");
            error2 = 0;
            while (!error2)//repetimos lo anterior
            {
             fflush( stdin );
            error2 = scanf("%d",&m);
            if (!error2)
            printf("\nDebe digitar un numero\nIngrese un numero m: ");
            }

        }while(n<0||m<0);//while del segundo do while

        //invocamos a todas las funciones
        printf("El resultado es :%d \n",sumas(n,m));
        printf("El resultado de la suma de los digitos pares de n es:%d \n",sumasdigpares(n,x,sumax));
        printf("El resultado de la suma de los digitos impares de m es:%d \n",sumasdigimpares(m,x,sumax));
        printf("El resultado del promedio de digitos de n es:%0.1f \n",promedion(n,x,sumax));
        printf("El resultado del promedio de digitos de m es:%0.1f \n",promediom(m,x,sumax));
        printf("El resultado de la suma de los digitos impares de n y los pares de m es: %d \n",sumadigimparesypares(m,n,x,sumax));
        printf("\n '1' si quiere volver a utilizar el programa\nCualquier otra tecla si quiere terminar\n");
        scanf("%d",&opcion);

    } while(opcion==1);//while del primer do while
    printf("\nAdios!\n");
    return 0;
}

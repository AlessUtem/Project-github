#include "funciones.h"
//FUNCION 1
int sumas(int n, int m)/*hacemos la funcion con if retornando la suma si n y m son pares y la
                         multiplicacion si son impares y la suma de sus digitos en otro caso*/

{
     if(n%2==0&&m%2==0)//usamos modulo para ver si son pares y para ver si son impares
        return n+m;
     if(n%2==1&&m%2==1)
        return n*m;
     else// retornamos la suma de sus digitos
        n=n%10;
        m=m%10;
        return n+m;

}


//FUNCION 2
int sumasdigpares(int n, int x,int sumax)//funcio para sacar los digitos pares de n

{
    x=0;// igualamos x a 0
    sumax=0;//y suma x tambien
     while(n > 1)
        {
        x = n % 10;//le sacamos el modulo para obtener el digito y lo guardamos en x
        n = n / 10;//lo dividimos para ver el siguiente digito

            if(x%2==0)//usamos if para ver si es par
            {
                sumax=sumax+x;//si el digito es par se sumara al contador
            }
        }
    return sumax;//retornamos la suma de los digitos pares de n
}

//FUNCION 3
int sumasdigimpares(int m, int x,int sumax)//usamos la funcion para los digitos impares de m
//hacemos lo mismo que en la funcion anterior pero usamos el if para ver si son impares

{
    x=0;
    sumax=0;
     while(m > 0)
        {
        x = m % 10;
        m = m / 10;

            if(x%2==1)
            {
                sumax=sumax+x;//si el digito es impar se sumara al contador
            }
        }
    return sumax;//retornara cuantos nomeros impares hay
}


//FUNCION 4
int numerodedign(int n,int sumax)//FUNCION PARA SACAR EL TOTAL DE DIG DE n
//USAMOS LA FUNCION PARA VER CUANTOS DIGITOS SON PARA VER EL PROMEDIO DE n
//USAMOS UN WHILE PARA VER LOS DIGITOS DE n
//usaremos esta funcion para 'n' y para 'm'
{

    sumax=0;
      while(n>0)
    {
        n=n/10;//CON ESTO SACAMOS CADA DIGITO Y EL CONTADOR AUMENTARA EN 1
        sumax++;
    }
    return sumax;//RETORNAMOS LA CANTIDAD DE DIGITOS
}


//FUNCION 5
int sumadedign(int n,int x,int sumax)//ESTA FUNCION ES PARA VER LA SUMA DE LOS DIGITOS DE n
//usaremos esta funcion para 'n' y para 'm'
{
    x=0;//usamos x para para tener los digitos
    sumax=0;//usamos sumax para sumarlos
     while(n > 0)
        {
        x = n % 10;//la x guardara el digito
        n = n / 10;//dividimos n entre 10 para sacar el siguiente dig
                sumax=sumax+x;//se suma la x que es el digito y asi hasta tenerlos todos
        }
    return sumax;// se retorna la suma de todos los digitos de n
}

//FUNCION 6
float promedion(float n,float x,float sumax)//usamos las 2 funciones anteriores para sacar el PROMEDIO DE DIGITOS DE n
//usaremos esta funcion para 'n' y para 'm'
{
    return (float)sumadedign(n,x,sumax)/(float)numerodedign(n,sumax);//promedio= suma de los digitos dividido por la cantidad de llos
    //USAMOS FLOAT PARA QUE MUESTRE EL RESULTADO CON DECIMALES
}


//FUNCION 7
int numerodedigm(int m,int sumax)// usamos la misma funcion de antes pero ahora cambiamos la variable 'n' por 'm'
{

    sumax=0;
      while(m>0)
    {
        m=m/10;
        sumax++;
    }
    return sumax;
}


//FUNCION 8
int sumadedigm(int m,int x,int sumax)//usamos la misma funcion de antes pero ahora cambiamos la variable 'n' por 'm'
{
    x=0;
    sumax=0;
     while(m > 0)
        {
        x = m % 10;
        m = m / 10;
                sumax=sumax+x;
        }
    return sumax;
}

//FUNCION 9
float promediom(float m,float x,float sumax)//usamos la misma funcion de antes pero ahora cambiamos la variable 'n' por 'm'
{
    return (float)sumadedigm(m,x,sumax)/(float)numerodedigm(m,sumax);
}

//FUNCION 10
int sumasdigimparesn(int n, int x,int sumax)
//FUNCION PARA DETERMINAR LOS DIGITOS IMPARES DE n
//USAMOS EL MISMO CODIGO QUE USAMOS EN LA FUNCION 3 PERO CAMBIAMOS LA VARIABLE 'm' por 'n'
{
    x=0;
    sumax=0;
     while(n > 0)
        {
        x = n % 10;//SACAMOS EL PRIMER DIGITO DE n Y LO GUARDAMOS EN x
        n = n / 10;//DIVIDIMOS n entre 10 PARA OBTENER EL SIGUIENTE DIGITO

            if(x%2==1)//VEMOS SI LOS DIGITOS SON IMPARES Y LOS SUMAMOS EN sumax
            {
                sumax=sumax+x;
            }
        }
    return sumax;//RETORNAMOS LA SUMA DE LOS DIGITOS IMPARES DE n
}

//FUNCION 11
int sumasdigparesm(int m, int x,int sumax)
//FUNCION PARA DETERMINAR LOS DIGITOS IMPARES DE n
//USAMOS EL MISMO CODIGO QUE USAMOS EN LA FUNCION 3 PERO CAMBIAMOS LA VARIABLE 'n' por 'm'

{
    x=0;
    sumax=0;
     while(m > 0)
        {
        x = m % 10;//USAMOS MODULO PARA SACAR LOS DIGITOS Y LOS GUARDAMOS EN x
        m = m / 10;//DIVIDIMOS EL NUMERO m ENTRE 10 PARA SACAR EL SIGUIENTE DIGITO

            if(x%2==0)//USAMOS IF PARA GUARDAR LOS DIGITOS PARES EN sumax y sumarlos
            {
                sumax=sumax+x;
            }
        }
    return sumax;//RETORNA LOS DIGITOS PARES DEL NUMERO m
}

//FUNCION 12
int sumadigimparesypares(int m,int n,int x,int sumax)//USAMOS LAS DOS FUNCIONES ANTERIRORES Y LAS SUMAMOS

{
    return sumasdigparesm(m,x,sumax)+sumasdigimparesn(n,x,sumax);//RETORNA LA SUMA DE LOS DIGITOS IMPARES DE 'n' y LOS PARES DE 'm'
}

#include <stdio.h>






//Suma 10 números que el usuario entra por teclado
int suma_numeros(int veces)
{    
    int suma = 0;
    int tu_numero = 0;
    for (int i=0; i<=veces; i++) 
    {
    printf("voy a sumar %d los numeros que me des.\nDame un número.\n", veces);
    scanf(" %d", &tu_numero);
    suma=tu_numero+suma;
    printf("tu suma actual vale %d \n",suma);
    }
    return suma;
}

//Suma los numeros que usuario da por teclado hasta cierto valor
int suma_hasta(int valor_hasta)
{   
    int suma = 0;
    int tu_numero = 0;
    while (suma <= valor_hasta)
    {
        printf("voy a sumar todo los numeros que me des.\nDame un número.\n");
        scanf(" %d", &tu_numero);
        suma = tu_numero + suma;
        printf("tu suma actual vale %d \n", suma);
    }
    return suma;
}

int main()
{
    int tamano_maximo_suma = 500;
    int suma = suma_numeros(7);

    //suma_hasta(tamano_maximo_suma);

    return 0;
}


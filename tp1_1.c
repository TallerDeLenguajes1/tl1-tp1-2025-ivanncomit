#include <stdio.h>

int main(){
    printf("Hola Mundo!\n\n");

    // Declarar una variable de tipo int
    int variable = 42;
    
    // Declarar un puntero que apunte a la variable
    int *puntero = &variable;
    
    // 1) Mostrar el contenido del puntero (valor al que apunta, es decir, la variable)
    printf("Contenido del puntero: %d\n", *puntero);
    
    // 2) Mostrar la dirección de memoria almacenada por el puntero
    printf("Dirección de memoria almacenada por el puntero: %p\n", puntero);
    
    // 3) Mostrar la dirección de memoria de la variable
    printf("Dirección de memoria de la variable: %p\n", &variable);
    
    // 4) Mostrar la dirección de memoria del puntero
    printf("Dirección de memoria del puntero: %p\n", (void*)&puntero);
    
    // 5) Mostrar el tamaño de memoria utilizado por la variable usando sizeof()
    printf("Tamaño de memoria de la variable: %d bytes\n", sizeof(variable));
    
    return 0;
}


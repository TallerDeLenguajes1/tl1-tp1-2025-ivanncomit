#include <stdio.h>

int CuadradodeN (int numero);
void CuadDeNVoid (int numero);
void Invertir(int numero1, int numero2);
void orden(int numero1, int numero2);

int main(){
    int a, b;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("La direccion de memoria del numero 1 es: %p", &a);
    printf("\nLa variable tiene contenido: %d", a);
    printf("\n\nIngrese el segundo valor: ");
    scanf("%d", &b);
    printf("La direccion de memoria del numero es: %p", &b);
    printf("\nLa variable tiene contenido: %d", b);
    



    return 0;
}

int CuadradodeN (int numero)
{
    int cuadrado = numero * numero;
    return cuadrado;
}
void CuadDeNVoid (int numero)
{
    int cuadrado = numero * numero;
    printf("El cuadrado del numero es: %d", cuadrado);

}
void Invertir(int numero1, int numero2)
{

}
void orden(int numero1, int numero2)
{

}

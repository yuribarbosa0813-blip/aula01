#include <stdio.h>

int main() {
     int numero;
     printf("Digite um número:");
     scanf("%d", &numero); 

     printf("Número Digitado: %d\n", numero);

    if(numero > 0) {
        printf("Número Positivo\n");
    } else if(numero < 0){
        printf("Número Negativo\n");
    }

    if(numero % 2 == 0) {
        printf("Número Par\n");
    } else {
        printf("Número Ímpar\n");
    }

    return 0;
}
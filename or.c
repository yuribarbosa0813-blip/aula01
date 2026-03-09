#include <stdio.h>

 int main() {
    int idade;

    printf("Digite a idade:");
    scanf("%d", &idade);

    if(idade < 12 || idade > 60){
        printf("Tem desconto\n");
    } else {
        printf("Não tem desconto\n");
    }
    
    return 0;
 }
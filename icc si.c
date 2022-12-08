#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam;

    printf("Digite quantos valores possuira o vetor: ");
    scanf("%d", &tam);

    if (tam == 0) {
        printf("\nA soma dos valores e 0\n");
    }
    else {
    int i, vetor[tam];

    for(i = 0; i < tam; ++i) {
        printf("\nDigite um valor: ");
        scanf("%d", &vetor[i]);
    }
    int soma = 0;

    for(i = 0; i < tam; i++) {
        soma = soma + vetor[i];
    }
    printf("\nA soma dos valores do vetor e: %d\n", soma);

    }

    return 0;
}

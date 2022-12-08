#include <stdio.h>
#include <stdlib.h>

int soma(int vetor[], int tam){
    if (tam == 0)
        return 0;
    else
        return vetor[tam - 1] + soma(vetor, tam - 1);

}

int main(){

    int tam;

    printf("Digite quantos valores possuira o vetor: ");
    scanf("%d", &tam);

    int vetor[tam], i;

    for(i = 0; i < tam; ++i) {
        printf("\nDigite um valor: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nA soma dos valores do vetor e: %d\n", soma(vetor, tam));

    return 0;
}

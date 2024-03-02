#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ponteiro para o vetor, inicialmente nulo
    int *vetor = NULL;

    // Tamanho atual do vetor
    int tamanhoAtual = 0;

    // Exemplo de adicionar 5 elementos ao vetor
    for(int i = 0; i <5; i++){
        tamanhoAtual++;

        vetor =(int *)realloc(vetor, tamanhoAtual * sizeof(int));
        if (vetor == NULL) {
            printf("Erro de alocação");
            exit(1);
        }

        printf("Digite um valor para adicionar ao vetor: ");
        scanf("%d", &vetor[tamanhoAtual -1]);
    }

    printf("Valores do vetor:\n");
    for(int i = 0; i < tamanhoAtual; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}
#include <stdio.h>

int main() {
    int tamanho; // Define a variável para armazenar o tamanho do array.
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho); // Lê o tamanho do array do usuário.

    int numeros[tamanho]; // Declara um array de inteiros com o tamanho especificado.

    // Solicita ao usuário para inserir os valores no array.
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o número para a posição %d: ", i);
        scanf("%d", &numeros[i]); // Armazena cada número digitado no array.
    }

    // Imprime os valores armazenados no array.
    printf("Os números inseridos são: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}

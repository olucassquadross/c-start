#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para um contato.
typedef struct contato {
    char nome[50];
    char telefone[15];
    struct contato *proximo;
} Contato;

// Função para criar um novo contato.
Contato* criarContato(char* nome, char* telefone) {
    Contato* novoContato = (Contato*)malloc(sizeof(Contato));
    strcpy(novoContato->nome, nome);
    strcpy(novoContato->telefone, telefone);
    novoContato->proximo = NULL;
    return novoContato;
}

// Função para adicionar um contato ao final da lista.
void adicionarContato(Contato** cabeca, char* nome, char* telefone) {
    Contato* novoContato = criarContato(nome, telefone);
    if (*cabeca == NULL) {
        *cabeca = novoContato;
    } else {
        Contato* temp = *cabeca;
        while (temp->proximo != NULL) {
            temp = temp->proximo;
        }
        temp->proximo = novoContato;
    }
}

// Função para imprimir todos os contatos na lista.
void imprimirContatos(Contato* cabeca) {
    Contato* temp = cabeca;
    while (temp != NULL) {
        printf("Nome: %s, Telefone: %s\n", temp->nome, temp->telefone);
        temp = temp->proximo;
    }
}

// Função para liberar a memória alocada para a lista.
void liberarContatos(Contato* cabeca) {
    Contato* temp;
    while (cabeca != NULL) {
        temp = cabeca;
        cabeca = cabeca->proximo;
        free(temp);
    }
}

int main() {
    Contato* listaDeContatos = NULL;

    // Adicionando contatos à lista.
    adicionarContato(&listaDeContatos, "Alice", "1234-5678");
    adicionarContato(&listaDeContatos, "Bob", "9876-5432");
    adicionarContato(&listaDeContatos, "Carol", "5555-5555");

    // Imprimindo todos os contatos.
    printf("Lista de Contatos:\n");
    imprimirContatos(listaDeContatos);

    // Liberando a memória alocada para a lista de contatos.
    liberarContatos(listaDeContatos);

    return 0;
}

#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5];

    // Entrada de dados com laço for
    for (int i = 0; i < 5; i++) {
        printf("=== Cadastro do Território %d ===\n", i + 1);

        // Leitura do nome
        printf("Digite o nome do território: ");
        scanf(" %29[^\n]", territorios[i].nome);
        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %9s", territorios[i].cor);

        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

printf("\n===== Dados dos Territórios Cadastrados =====\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("--------------------------------------\n");
    }

    return 0;
}

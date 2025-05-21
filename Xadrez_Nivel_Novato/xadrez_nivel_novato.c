#include <stdio.h>

int main() {
    // Movimento da TORRE - 5 casas para a direita
    // Utilizando estrutura de repetição FOR
    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita
    // Utilizando estrutura de repetição WHILE
    printf("\nMovimento do Bispo:\n");
    int casasBispo = 5;
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda
    // Utilizando estrutura de repetição DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int casasRainha = 8;
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    return 0;
}

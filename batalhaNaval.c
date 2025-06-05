#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// por favor siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    // Declara uma matriz 5x5 para representar o tabuleiro (inicializado com zeros)
    int tabuleiro[5][5] = {0};

    // Posicionamento do primeiro navio (horizontal) na linha 1, colunas 0 a 3
    for (int col = 0; col <= 3; col++) {
        tabuleiro[1][col] = 1; // Marca a posição com 1
        printf("Navio em: Linha %d, Coluna %d\n", 1, col); // Exibe coordenadas
    }

    // Posicionamento do segundo navio (vertical) na coluna 3, linhas 0 a 2
    for (int lin = 0; lin <= 2; lin++) {
        // Evita sobrescrever a célula já ocupada no cruzamento
        if (tabuleiro[lin][3] == 0) {
            tabuleiro[lin][3] = 1; // Marca a posição com 1
            printf("Navio em: Linha %d, Coluna %d\n", lin, 3); // Exibe coordenadas
        }
    }

    // Exibe o tabuleiro atualizado no console
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    // ========================
    // Movimento da TORRE (usando FOR)
    // ========================
    int i;
    int casasTorre = 4; // A Torre anda 4 casas para cima
    printf("=== Movimento da TORRE ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Cima\n");
    } 
    printf("\n");

    // ========================
    // Movimento do BISPO (usando WHILE)
    // ========================
    int j = 1;
    int casasBispo = 5; // O Bispo anda 5 casas na diagonal (Cima + Direita)
    printf("=== Movimento do BISPO ===\n");
    while (j <= casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // ========================
    // Movimento da RAINHA (usando DO-WHILE)
    // ========================
    int k = 1;
    int casasRainha = 8; // A Rainha anda 8 casas para a esquerda
    printf("=== Movimento da RAINHA ===\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}
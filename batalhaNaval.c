#include <stdio.h>

int main() {
    printf("=== BATALHA NAVAL - MATECHECK ===\n\n");
    
    // ========== NÍVEL NOVATO - Posicionamento dos Navios ==========
    printf("NÍVEL NOVATO - Posicionamento dos Navios\n");
    printf("Tabuleiro 5x5 com 2 navios:\n\n");
    
    // Declaração da matriz 5x5
    int tabuleiro_novato[5][5] = {0}; // Inicializa tudo com 0
    
    // Posicionamento do primeiro navio (horizontal) - linha 1, colunas 1-3
    tabuleiro_novato[1][1] = 3;
    tabuleiro_novato[1][2] = 3;
    tabuleiro_novato[1][3] = 3;
    
    // Posicionamento do segundo navio (vertical) - coluna 4, linhas 2-4
    tabuleiro_novato[2][4] = 3;
    tabuleiro_novato[3][4] = 3;
    tabuleiro_novato[4][4] = 3;
    
    // Exibir coordenadas dos navios
    printf("Navio 1 (Horizontal): (1,1), (1,2), (1,3)\n");
    printf("Navio 2 (Vertical): (2,4), (3,4), (4,4)\n\n");
    
    // Exibir o tabuleiro
    printf("Tabuleiro (0=vazio, 3=navio):\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro_novato[i][j]);
        }
        printf("\n");
    }
    
    printf("\n==================================================\n\n");
    
    // ========== NÍVEL AVENTUREIRO - Expansão do Tabuleiro ==========
    printf("NÍVEL AVENTUREIRO - Expansão do Tabuleiro 10x10\n");
    printf("Tabuleiro 10x10 com 4 navios (2 diagonais):\n\n");
    
    // Declaração da matriz 10x10
    int tabuleiro_aventureiro[10][10] = {0};
    
    // Navio 1 (Horizontal) - linha 2, colunas 1-4
    for(int j = 1; j <= 4; j++) {
        tabuleiro_aventureiro[2][j] = 3;
    }
    
    // Navio 2 (Vertical) - coluna 7, linhas 0-3
    for(int i = 0; i <= 3; i++) {
        tabuleiro_aventureiro[i][7] = 3;
    }
    
    // Navio 3 (Diagonal principal) - posições (5,1), (6,2), (7,3)
    tabuleiro_aventureiro[5][1] = 3;
    tabuleiro_aventureiro[6][2] = 3;
    tabuleiro_aventureiro[7][3] = 3;
    
    // Navio 4 (Diagonal secundária) - posições (4,8), (5,7), (6,6), (7,5)
    tabuleiro_aventureiro[4][8] = 3;
    tabuleiro_aventureiro[5][7] = 3;
    tabuleiro_aventureiro[6][6] = 3;
    tabuleiro_aventureiro[7][5] = 3;
    
    // Exibir coordenadas dos navios
    printf("Navio 1 (Horizontal): (2,1), (2,2), (2,3), (2,4)\n");
    printf("Navio 2 (Vertical): (0,7), (1,7), (2,7), (3,7)\n");
    printf("Navio 3 (Diagonal): (5,1), (6,2), (7,3)\n");
    printf("Navio 4 (Diagonal): (4,8), (5,7), (6,6), (7,5)\n\n");
    
    // Exibir o tabuleiro 10x10
    printf("Tabuleiro 10x10 (0=vazio, 3=navio):\n");
    printf("   ");
    for(int j = 0; j < 10; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    for(int i = 0; i < 10; i++) {
        printf("%2d ", i);
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro_aventureiro[i][j]);
        }
        printf("\n");
    }
    
    printf("\n==================================================\n\n");
    
    // ========== NÍVEL MESTRE - Habilidades Especiais ==========
    printf("NÍVEL MESTRE - Habilidades Especiais com Matrizes\n\n");
    
    // Matriz para habilidades (5x5 para melhor visualização)
    int habilidade[5][5] = {0};
    
    // ========== HABILIDADE CONE ==========
    printf("Habilidade CONE:\n");
    // Resetar matriz
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            habilidade[i][j] = 0;
        }
    }
    
    // Preencher cone (centro na posição 2,2)
    // Linha 0: posição 2
    habilidade[0][2] = 1;
    // Linha 1: posições 1, 2, 3
    habilidade[1][1] = 1;
    habilidade[1][2] = 1;
    habilidade[1][3] = 1;
    // Linha 2: posições 0, 1, 2, 3, 4
    for(int j = 0; j < 5; j++) {
        habilidade[2][j] = 1;
    }
    
    // Exibir cone
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // ========== HABILIDADE OCTAEDRO ==========
    printf("Habilidade OCTAEDRO:\n");
    // Resetar matriz
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            habilidade[i][j] = 0;
        }
    }
    
    // Preencher octaedro (centro na posição 1,2)
    // Linha 0: posição 2
    habilidade[0][2] = 1;
    // Linha 1: posições 1, 2, 3
    habilidade[1][1] = 1;
    habilidade[1][2] = 1;
    habilidade[1][3] = 1;
    // Linha 2: posição 2
    habilidade[2][2] = 1;
    
    // Exibir octaedro
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // ========== HABILIDADE CRUZ ==========
    printf("Habilidade CRUZ:\n");
    // Resetar matriz
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            habilidade[i][j] = 0;
        }
    }
    
    // Preencher cruz (centro na posição 1,2)
    // Linha 0: posição 2
    habilidade[0][2] = 1;
    // Linha 1: posições 0, 1, 2, 3, 4 (linha horizontal completa)
    for(int j = 0; j < 5; j++) {
        habilidade[1][j] = 1;
    }
    // Linha 2: posição 2
    habilidade[2][2] = 1;
    
    // Exibir cruz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}
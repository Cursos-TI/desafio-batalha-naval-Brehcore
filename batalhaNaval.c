#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível Mestre

    // Tamanho das matrizes de habilidades
    #define TAM 5

    // Função para valorAbsoluto
    int valorAbsoluto(int x) {
        return x< 0 ? -x : x;
    }    

    void habilidadeCone() {
        int cone[TAM][TAM] = {0};

        // Preenchimento padrão do cone - piramidal
        for (int i = 0; i < TAM;  i++) {
            for (int j = TAM / 2 - i; j <= TAM /2 + i; j++) {
                if (j>= 0 && j < TAM) {
                    cone[i][j] = 1;
                }
            }
        }

    // Mostrando a habilidade cone
    printf("Habilidade: Cone\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

    void habilidadeOctaedro() {
        int octaedro[TAM][TAM] = {0};
        
        // Preenchimento padrão octaedro (losando)
        int meio = TAM / 2;
        for (int i = 0; i < TAM; i++) {
            int distancia = valorAbsoluto(meio - i);
            for (int j = distancia; j < TAM - distancia; j++) {
                octaedro[i][j] = 1;
            }
        }

        //Mostrando a habilidade octaedro
        printf("Habilidade: Octaedro\n");
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                printf("%d", octaedro[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    void habilidadeCruz() {
        int cruz[TAM][TAM] = {0};

        // Preenchendo  padrão cruz
        int meio = TAM / 2;
        for (int i = 0; i < TAM; i++) {
            cruz[i][meio] = 1; //Coluna do meio
            cruz[meio][i] = 1; //Linha do meio
        }

        //Mostrando a habilidade cruz
        printf("Habilidade: Cruz\n");
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                printf("%d", cruz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    int main() {
    
        habilidadeCone();
        habilidadeOctaedro();
        habilidadeCruz();
    
    return 0;
}

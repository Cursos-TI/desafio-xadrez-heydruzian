#include <stdio.h>

int main() {
    //Constantes para número de casas de movimento de cada peça
    const int BISPO_MOVIMENTO = 5;
    const int TORRE_MOVIMENTO = 5;
    const int RAINHA_MOVIMENTO = 8;
    const int CAVALO_MOVIMENTO = 3;

    //Movimentação do Bispo (diagonal superior direita)
    printf("Movimentação do Bispo: \n");
    for(int i = 1; i <= BISPO_MOVIMENTO; i++) {
        printf("Diagonal superior direita %d casa(s)\n", i);
    }

    //Movimentação da torre (para a direita)
    printf("\nMovimentação da Torre: \n");
    for(int i = 1; i <= TORRE_MOVIMENTO; i++) {
        printf("Diagonal %d casa(s)\n", i);
    }

    //Movimentação da Rainha (para a esquerda)
    printf("\nMovimentação da Rainha: \n");
    for(int i = 1; i <= RAINHA_MOVIMENTO; i++) {
        printf("Esquerda %d casa(s)\n", i);
    }

    //Movimentação do Cavalo
    printf("\nMovimentação do Cavalo (em L): \n");
    
    for(int i = 0; i < 2; i++) { //Primeiro movimento (duas casas)
        printf("Movendo 2 casas para baixo\n");
    }

    for(int i = 0; i < 1; i++) { //Segundo movimento (uma casa)
        printf("Movendo 1 casa para a esquerda\n");

    }

    //Função recursiva para o movimento do Bispo
    void mover_bispo(int casas) {
        if(casas == 0 ) return; //Caso base
        printf("Diagonal superior direita %d casa(s)\n", casas);
        mover_bispo(casas - 1); //Chamada recursiva
    }

    int main() {
        const int BISPO_MOVIMENTO = 5;
        //Movimentação recursiva do Bispo
        printf("Movimentação Recursiva do Bispo: \n");
        mover_bispo(BISPO_MOVIMENTO);
    
        //Movimentação avançada do Cavalo com loops múltiplos
        printf("\nMovimentação Avançada do Cavalo (em L): \n");

        int movimentos_realizados = 0;
        for(int i = 1; i <= 2; i++) {
            for(int j = 1; j <=2; j++) {
                if(i == j){
                    continue; //Ignora quando as direções são iguais
                }
                printf("Movendo %d casa(s) para baixo e %d casa(s) para a esquerda\n", i, j);
                movimentos_realizados++;
                if(movimentos_realizados == 1){
                    break; //Realiza apena um movimento em L
                }
            }
        }
    }

    return 0;


}
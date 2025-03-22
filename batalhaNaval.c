#include <stdio.h>

int main()
{
    int tabuleiro[10][10] = {0};
    int navio1[10] = {0, 0, 0, 3, 3, 3, 0, 0, 0, 0};
    int navio2[10] = {0, 0, 0, 0, 0, 3, 3, 3, 0, 0};

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Insere o navio1 na linha 3.
    for (int i = 0; i < 10; i++) {
        //Valida se está dentro do limite do tabuleiro
        if(i <= 10)
            tabuleiro[2][i] = navio1[i];  
    }

    // Insere o navio2 na coluna I.
    for (int i = 0; i < 10; i++) {

        //Valida sobreposição
        if(tabuleiro[i][8] != 0)
            break;

        //Valida se está dentro do limite do tabuleiro
        if(i <= 10)
            tabuleiro[i][8] = navio2[i]; 
    }

    printf("     TABULEIRO BATALHA NAVAL \n");
    printf("   ");
    //Imprime as letras de A a J
    for (int i = 0; i < 10; i++)
    {
        printf("  %c", linha[i]);
    }

    //Imprime as linhas
    for (int i = 0; i < 10; i++)
    {
        //Imprime os números de 1 a 10
        if (i != 9)
            printf("\n  %d  ", i + 1);
        else
            printf("\n %d  ", i + 1);

        //Imprime os valores da matriz
        for (int j = 0; j < 10; j++)
        {
            printf("%d  ", tabuleiro[i][j]); 
        }
    }

    return 0;
}

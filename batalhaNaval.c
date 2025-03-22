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
    for (int i = 0; i < 10; i++)
    {
        printf("  %c", linha[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (i != 9)
            printf("\n  %d  ", i + 1);
        else
            printf("\n %d  ", i + 1);

        for (int j = 0; j < 10; j++)
        {
            printf("%d  ", tabuleiro[i][j]); 
        }
    }

    return 0;
}

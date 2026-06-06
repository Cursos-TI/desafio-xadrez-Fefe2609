#include <stdio.h>

// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

printf ("Desafio de Xadrez - MateCheck\n");

printf ("Nível Novato - Movimentação das Peças\n");

// Declaracao de variaveis

int b, r, t = 1;
int bispo, rainha, torre;

printf ("Escolha qual peça você quer mover.\n");
printf ("Para movimentar o Bispo digite b:\n", bispo);
//scanf ("%d", &escolha);
printf ("Para escolher a Rainha digite r:\n", rainha);
//scanf ("%d", &escolha);
printf ("Para escolher a Torre digite t:\n", torre);
//scanf ("%d", &escolha);

// Implementação de Movimentação do Bispo
if (bispo == "b" && bispo == "B")
{
    printf ("Voce escolheu o Bispo\n");

while (b <= 5)
{
    printf ("Direita para cima\n", b, b ++);
}
}

// Implementação de Movimentação da Torre

else if (torre == "t" && torre == "T");
{
    printf ("Voce escolheu a Torre\n");


do {
    printf ("Direita\n", t, t ++);

    } while (t <=5);
    }

    // Implementação de Movimentação da Rainha

    if (rainha == "r" && rainha == "R");
    {
        ("Voce escolheu a Rainha\n");
    
    
        for (int r = 1; r <=8; r++)
    {
        printf("Esquerda\n", r);
    }
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

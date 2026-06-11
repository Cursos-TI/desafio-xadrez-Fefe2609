#include <stdio.h>

// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

printf ("Desafio de Xadrez - MateCheck\n");

printf ("Nível Novato - Movimentação das Peças\n");

// Declaracao de variaveis

int i, j ,l = 1;

printf ("Movimento da Torre\n");

do {
    printf ("Direita\n", i, i ++);

    } while (i <= 5);

printf ("Movimento do Bispo\n");
while (j <= 5)
{
    printf ("Direita para cima\n", j, j ++);
}

printf ("Movimento da Rainha\n");
    for (int l = 1; l <= 8; l++)
    {
        printf("Esquerda\n", l);
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

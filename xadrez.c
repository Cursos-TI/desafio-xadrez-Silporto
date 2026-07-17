#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
//Declaração de variaveis.
 int torre = 1, bispo = 1, rainha;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //Comandos: O Bispo move-se cinco casas para cima e a direita (Diagonal).

printf("Mostrando o codigo em while! para os movimentos do Bispo.\n\n");

while(bispo <= 5){

      printf("Bispo movendo: %d para cima e a direita\n", bispo);
      bispo ++;
   }
 //Somente para melhor visualização.  
printf("\n");


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
//Comandos: Torre move-se cinco casas para direita.
printf("Mostrando o codigo em do-while! para os movimentos da Torre.\n\n");

do{
   printf("Torre movendo: %d para a direita\n", torre);
   torre ++;

}while (torre <= 5);

printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
//Comandos: Rainha move-se em todas as direções 08 casas para a esquera.
printf("Mostrando o codigo em for! para os movimentos da Rainha\n\n");

 for(rainha = 1; rainha <= 8 ; rainha ++)
 {
    printf("Rainha movendo: %d para a esquerda\n", rainha);
 }
printf("\n");




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

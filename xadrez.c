    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>

//declaração das Variáveis.

int i, j;

// Criando as Funções.

void movimentoRainha(int num){
   if(num > 0){
      printf("Esquerda\n");
      movimentoRainha(num - 1);
   }
}
void movimentoTorre(int num1){
   if(num1 > 0){
      printf("Direita\n");
      movimentoTorre(num1 - 1);
   }
}
void movimentoBispo(int numero){
   if(numero > 0){
      printf("Direita para Cima\n");
      movimentoBispo(numero - 1);
   }
}

//Chamando as funções.

int main(){

int qtdrainha = 8;
int qtdtorre = 5;
int qtdbispo = 5;

printf("Movimentos da Rainha");
printf("\n");
movimentoRainha(qtdrainha);

printf("\n");

printf("Movimentos da Torre");
printf("\n");
movimentoTorre(qtdtorre);

printf("\n");

printf("Movimentos do Bispo");
printf("\n");
movimentoBispo(qtdbispo);

//Utilizando for aninhado para a movimentação do Cavalo.

printf("\n");
printf("Movimentos do Cavalo\n");
for(i = 1; i == 1; i++) { //Loop externo

    for (j = 1; j <= 2; j++) { //loop interno
        printf("Cima\n");
        continue;
      }
      
        printf("Direita\n");
        printf("\n");
        break;
      }

   return 0;
}


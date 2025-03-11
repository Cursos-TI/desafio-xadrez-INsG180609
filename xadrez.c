#include <stdio.h>

int main() {
   //Imprime a direção do movimento
   for (int i = 0; i < 5; i++){
    printf("Direita\n");//Mover a torre 5 casas para a direita
   for (int i = 0; i < 5; i++) 
    printf("Cima direita\n", i++);// Mover o bispo na diagonal para cima e a direita
   for (int i = 0; i < 8; i++)
    printf("Esquerda\n", i++); // Mover a rainha para esquerda
   }
    return 0;
}
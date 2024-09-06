#include <stdio.h>
// Versão 01do game Advinhação
// criando uma mensagem inicial
// definir as variaveis
// criar o laço de tentativa com varificações

int main() {
  printf("----BEM VINDO AO JOGO DA ADIVINHAÇÃO----\n");
  printf("Descubra meu numero secreto em 3 tetativa\n");
  printf("Meu número esta entre 0 e 10\n");
  printf("\n*****************************************\n");

  //------------------------------------Variaveis
  int numeroSecreto = 7;
  int chute;

  //------Iniciando o FOR
  for (int i = 1; i <= 3; i++) {
    printf("Qual é o seu chute: ");
    scanf("%d", &chute);
    // verificando o chute digitando
    int acertou = (chute == numeroSecreto);
    int maior = (chute > numeroSecreto);
    int menor = (chute < numeroSecreto);

    if (acertou) {
      printf("Parabéns! Você acertou!\n");
      break; // Encerrando o laço for
    } else if (maior) {
      printf("Seu chute foi maior que o número secreto!\n");
    } else if (menor) {
      printf("Seu chute foi menor que o número secreto!\n");
    }
    printf("Tentativa %d de 3\n", i + 1);
  }
  printf("Fim de jogo!\n");

  return 0;
}
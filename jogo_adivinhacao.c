#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int chute = 0;
    int tentativas = 7;
    int numeroSecreto = rand() % 100 + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número que estou pensando entre 1 e 100.\n");
    printf("Você tem 7 tentativas. Boa sorte!\n");

    while (tentativas > 0 && chute != numeroSecreto) {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        if (chute < 1 || chute > 100) {
            printf("Chute inválido! Por favor, digite um número entre 1 e 100.\n");
            continue;
        }
        if (chute < numeroSecreto) {
            printf("Seu chute foi %d. ", chute);
            printf("Seu chute foi muito baixo! Tente novamente.\n");
            tentativas--;
            printf("Você ainda tem %d tentativas restantes.\n", tentativas);
        } else if (chute > numeroSecreto) {
            printf("Seu chute foi %d. ", chute);
            printf("Seu chute foi muito alto! Tente novamente.\n");
            tentativas--;
            printf("Você ainda tem %d tentativas restantes.\n", tentativas);
        } else {
            printf("Seu chute foi %d. ", chute);
            printf("Parabéns! Você acertou o número!\n");
            printf("O número secreto era %d.\n", numeroSecreto);
            printf("Você acertou em %d tentativas!\n", 7 - tentativas);
            break;
        }
    }
    if (tentativas == 0) {
        printf("Você não conseguiu adivinhar o número. O número secreto era %d.\n", numeroSecreto);
    }
    printf("Obrigado por jogar!\n");
    return 0;
}
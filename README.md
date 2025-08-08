# Jogo de Adivinhação em C

## Descrição

Jogo simples feito em C onde o jogador tem 7 tentativas para adivinhar um número aleatório entre 1 e 100 gerado pelo computador. O programa dá dicas se o chute foi muito alto ou muito baixo e informa o número de tentativas restantes.

## Como funciona

- O programa gera um número aleatório entre 1 e 100.
- O jogador deve digitar um número para tentar adivinhar.
- Caso o chute seja inválido (fora do intervalo 1-100), o jogador é avisado e não perde tentativa.
- Se o chute for maior ou menor que o número secreto, o programa dá a dica correspondente e diminui o número de tentativas.
- Se o jogador acertar, o jogo termina com uma mensagem de vitória.
- Caso as tentativas acabem, o jogo revela o número secreto.

## Requisitos 
- Compilador GCC 
- Sistema operacional que suporte compilação e execução de programas C

## Como compilar e executar

1. Garanta que você tenha o compilador GCC instalado.

2. Para compilar, use o comando:

```bash
gcc jogo_adivinhacao.c -o jogo_adivinhacao
```

3. Para Executar

```bash
./jogo_adivinhacao
```

## Exemplo de execução

- Bem-vindo ao jogo de adivinhação!
- Tente adivinhar o número que estou pensando entre 1 e 100.
- Você tem 7 tentativas. Boa sorte!
- Digite seu chute: 50
- Seu chute foi 50. Seu chute foi muito baixo! Tente novamente.
- Você ainda tem 6 tentativas restantes.
- Digite seu chute: 75
- Seu chute foi 75. Seu chute foi muito alto! Tente novamente.
- Você ainda tem 5 tentativas restantes.
...
- Parabéns! Você acertou o número!
- O número secreto era 63.
- Você acertou em 3 tentativas!
- Obrigado por jogar!





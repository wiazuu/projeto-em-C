#include <stdio.h>
#include <stdlib.h>

void printGreeting(int languageCode) {
    if (languageCode == 1) {
        printf("Olá, Mundo!\n");
    } else if (languageCode == 2) {
        printf("Hello World!\n");
    } else if (languageCode == 3) {
        printf("¡Hola Mundo!\n");
    }else if (languageCode == 4) {
        printf("Bonjour le monde!\n");
    }else if (languageCode == 5) {
        printf("Ciao mondo!\n");
    }else if (languageCode == 6) {
        printf("Hallo Welt!\n");
    }else if (languageCode == 7) {
        printf("「こんにちは世界」\n");
    }else if (languageCode == 8) {
        printf("你好世界！\n");
    }else if (languageCode == 9) {
        printf("Привет, мир!\n");
    }

    else {
        printf("Erro: língua não encontrada\n");
    }
}

int main() {
    int numero;

    printf("====================\n");
    printf("OlaMundo! Versão 1.0\n");
    printf("====================\n\n");

    do {
        printf("Digite a língua desejada ou 0 para sair:\n");
        printf("(1) Português\n(2) Inglês\n(3) Espanhol\n(4) Francês\n(5) Italiano\n(6) Alemão\n(7) Japonês\n(8) Chinês Tradicional\n(9) Russo\n");
        printf("Faça sua escolha (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        } else if (numero > 0 && numero <= 9) {
            printGreeting(numero);
        } else {
            printf("Opção inválida, tente novamente.\n");
        }
    } while (numero != 0);

    return 0;
}
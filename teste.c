#include <stdio.h>
#include <stdlib.h>

void mudança(int languageCode){
    switch (languageCode)
    {
    case 1:
        printf("Olá, Mundo!\n");
    break;

    case 2:
        printf("Hello World!\n");
    break;

    case 3:
        printf("¡Hola Mundo!\n");
    break;

    case 4:
        printf("Bonjour le monde!\n");
    break;

    case 5:
        printf("Ciao mondo!\n");
    break;

    case 6:
        printf("Hallo Welt!\n");
    break;

    case 7:
        printf("こんにちは世界\n");
    break;

    case 8:
        printf("你好世界！\n");
    break;

    case 9:
        printf("Привет, мир!\n");
    break;
    
    default:
        printf("Erro: língua não encontrada\n");
    break;
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
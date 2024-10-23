#include <stdio.h>

int main() {
    int opcao;
    
    printf("Menu:\n");
    printf("1. Opção 1\n");
    printf("2. Opção 2\n");
    printf("3. Opção 3\n");
    printf("4. Opção 4\n");
    
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            printf("Você escolheu a Opção 1.\n");
            break;
        case 2:
            printf("Você escolheu a Opção 2.\n");
            break;
        case 3:
            printf("Você escolheu a Opção 3.\n");
            break;
        case 4:
            printf("Você escolheu a Opção 4.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }
    
    return 0;
}
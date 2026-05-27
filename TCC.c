#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    do {
        system("clear || cls");

        printf("\n==========================================\n");
        printf("       GUILDA DOS AVENTUREIROS   \n");
        printf("==========================================\n");
        printf("  1 - Arsenal da Guilda\n");
        printf("  2 - Enfermaria\n");
        printf("  3 - Mural de Missoes\n");
        printf("  4 - Fechar Taverna (Faxina)\n");
        printf("  0 - Sair do Sistema\n");
        printf("==========================================\n");
        printf("  Escolha sua opcao: ");
        scanf("%d", &opcao);
        getchar();

        system("clear || cls");
        switch (opcao) {
            case 1:
                printf("\n>> Entrando no Arsenal...\n");
                break;
            case 2:
                printf("\n>> Entrando na Enfermaria...\n");
                break;
            case 3:
                printf("\n>> Acessando o Mural de Missoes...\n");
                break;
            case 4:
                printf("\n>> Iniciando a Faxina da Taverna...\n");
                break;
            case 0:
                system("clear || cls");
                printf("\n>> Que os ponteiros nunca apontem para o vazio! Ate logo!\n\n");
                break;
            default:
                printf("\n>> Opcao invalida! Nenhum goblin passa por aqui!\n");
                printf("\n  Pressione ENTER para voltar ao menu...");
                getchar();
        }

    } while (opcao != 0);

    return 0;
}
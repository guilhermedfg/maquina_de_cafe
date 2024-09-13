#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h> // Para usar a função strcmp


void gameplay ()
{
    int opc;
    char back[4]; //voltar

    int cafe, leite, agua, dinheiro;

    do
    {
        printf("\nCafeteria\n");
        printf("1. Preparar/Vender Café\n");
        printf("2. Inventário\n");
        printf("3. Comprar\n");
        printf("4. Sair\n");
        printf("Escolha uma opção acima: ");
        scanf("%d", &opc);

        switch(opc) 
            {
                case 1: 
                    printf("\n- Cafeteria -\n\n");
                    printf("Saldo: x\n\n");

                    printf("1. Preparar café\n");
                    printf("2. Vender café\n\n");
                    
                    break;
                case 2:
                    printf("\n- Inventário -\n\n");

                    printf("Saldo: x\n\n");
                    
                    printf("x Café\n");
                    printf("xL Água\n");
                    printf("x Leite\n");
                    
                    break;
                case 3:
                    printf("\n- Compras -\n");

                    printf("Comprar Café\n");
                    printf("Comprar Água\n");
                    printf("Comprar Leite\n");

                    
                    break;
                case 4:
                    printf("saindo...\n");
                    break;
                default:
                    printf("Opção inválida, insira novamente.\n");
                continue;

            }

        if (opc != 4) 
            {
            //mostrar o exit apenas se não for a opção de sair
            printf("para retornar ao menu, digite 'voltar': ");
            scanf("%s", back); //ler o exit

            }
        while (strcmp(back, "voltar") != 0)
            {
                printf("Comando inválido, digite 'voltar' para retornar ao menu: ");
                scanf("%s", back);
            }

    }while (opc != 4);
}


void menu() //menu principal do jogo
{
    int opcao;
    char exitCommand[4];

    do
    {
        printf("\nMenu Principal\n");
        printf("1. Iniciar jogo\n");
        printf("2. Como jogar\n");
        printf("3. Sair\n");
        printf("Escolha uma opção acima: ");
        scanf("%d", &opcao);
        
        switch(opcao) 
            {
                case 1: 
                    printf("Iniciando...\n");
                    sleep(1);
                    gameplay();
                    break;
                case 2:
                    printf("\nVenda cafés e ganhe dinheiro\n\n");
                    break;
                case 3:
                    printf("saindo...\n");
                    break;
                default:
                    printf("Opção inválida, insira novamente.\n");
                continue;

            }

        if (opcao != 3) 
            {
            //mostrar o exit apenas se não for a opção de sair
            printf("para retornar ao menu, digite 'exit': ");
            scanf("%s", exitCommand); //ler o exit

            }
        while (strcmp(exitCommand, "exit") != 0)
            {
                printf("Comando inválido, digite 'exit' para retornar ao menu: ");
                scanf("%s", exitCommand);
            }

    }while (opcao != 3);
}



int main(void) //inicialização
{
    printf("Coffee Maker ver.alpha\n");
    printf("         (\n");
    printf("      (   )\n");
    printf("       ) (   (\n");
    printf("    .-(   )   )-.\n");
    printf("   (   )     (   );__\n");
    printf("   |`-,,_____,,-'(_  \\\n");
    printf("   |             | )  )\n");
    printf("   |    alpha    |/  /\n");
    printf("   |            (  ./\n");
    printf("   \\             /'\n");
    printf("    `-.._____..-'\n\n");
    sleep(1);
char init;
printf("Iniciar jogo? (Y/N)\t");
scanf(" %c", &init);

while(init !='Y' && init !='y' && init != 'N' && init != 'n')
{
    printf("resposta inválida.\n");
    printf("Iniciar jogo? (Y/N)\t");
    scanf(" %c", &init);
} 

if (init == 'Y' || init =='y')
    {
        printf("ligando a máquina de café...\n");
        usleep(500000); 
        printf("esquentando a água...\n");
        sleep(1);
        menu();


    }else if (init == 'N' || init == 'n')
    {
        printf("nada de café por hoje.\n");
    }

    return 0;
}
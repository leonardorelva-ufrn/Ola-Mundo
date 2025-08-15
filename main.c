#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tela_inicial(void);
void tela_sobre(void);
void tela_equipe(void);

int main(void){
    setlocale(LC_ALL,"Portuguese");
    tela_inicial();

    return(0);
}

void tela_inicial(void){
    system("clear||cls");
    char op;
    printf("\n");
    printf("____________________________________________________________________");
    printf("|                                                                  |");
    printf("|             SISTEMA DE GESTÃO PARA HOTÉIS E POUSADAS             |");
    printf("|                                                                  |");
    printf("|            1- Cliente                                            |");
    printf("|            2- Hospedagem                                         |");
    printf("|            3- Alimentação                                        |");
    printf("|            4- Relatório                                          |");
    printf("|            0- Sair                                               |");
    printf("|                                                                  |");
    printf("|   Escolha a opção:                                               |");
    scanf("%d", &op);
    getchar();
    printf("|                                                                  |");
    printf("____________________________________________________________________");
    printf("\t\t PRESSIONE ENTER PARA CONTINUAR...");

}
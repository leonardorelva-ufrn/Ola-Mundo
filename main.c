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
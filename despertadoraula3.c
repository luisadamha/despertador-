#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    int hora, minuto, segundo, dh, dm, ds;
    hora=minuto=segundo=0;
    printf("Digite o horario para despertar");
    scanf("%d %d %d", &dh, &dm, &ds);

    while (1){
    if(segundo==ds && minuto==dm && hora==dh){

    printf(" \n\n Acordaaa");
    PlaySound("musica.wav", NULL, SND_ASYNC);

    }
    printf("\r hora: %2dh %2dm %ds", hora, minuto, segundo);
    segundo ++;
    if (segundo==60){
        segundo=0;
        minuto++;
    }
    if (minuto==60){
        minuto=0;
        hora++;
    }
    if (hora==24){
        hora=0;
    }



    Sleep(1000);
    }


    return 0;
}

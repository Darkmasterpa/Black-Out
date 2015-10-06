#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>

#define ALTURA 20
#define LARGURA 80
int main(){
    int i, j;

    textcolor(YELLOW);
    for(i = 0; i < ALTURA; i++){
        for(j = 0; j < LARGURA; j++){
            gotoxy(i, j);
        }
    }


    return 0;
}

#include <stdio.h>
#include "sys/loadnew/gameloadnew.c"

int main(){
    int gameoption;
    printf("Welcome to mandatory!\n");
    printf("1. Start a new game (will overwrite current save)\n");
    printf("2. load exisiting game\n");
    printf("choose number from 1 to 2: ");
    scanf("%d", &gameoption);
    if(gameoption == 1) {
    printf("Starting a new game...\n");
    LoadNewGame();
    } else if(gameoption == 2) {
    printf("loadng an existing game...\n");
    } else {
        printf("There was an error...\n");
        return 1;
    }
}
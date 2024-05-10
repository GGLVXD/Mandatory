#include <stdio.h>
#include "sys/gameloadnew.h"

int main(){
    int gameoption;
    printf("Welcome to mandatory!");
    printf("1. Start a new game (will overwrite current save)");
    printf("2.load exisiting game");
    printf("choose number from 1 to 2: ");
    scanf("%d", &gameoption);
    if(gameoption == 1) {
    printf("Starting a new game...");
    LoadNewGame();
    }
}
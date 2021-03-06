/*
 * TIC_TAC_TOE
 *
 * GitHub Repository: https://github.com/BytesClub/Tic_Tac_Toe
 * Copyright (C) BytesClub 2017, MIT 
 *
 * helper.c
*/

#include "helper.h"

void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF TIC_TAC_TOE\n");
    sleep(5);
}

void init(int n, int* A)
{
    // TODO : Initialize the board.
}

static int val(int d)
{
	// TODO : Add Value against board
	return '\0';
}

void show(int n, int* A)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; (j < n && (!j || putchar('|'))) || putchar('\n'); j++)
			printf(" %c ", val(A[i * n + j]));
		for(int j = 0; j < n || !putchar('\n'); j++)
			printf("----");
    }
}

void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

int check(int n, int* A)
{
    // TODO : Checks if a user wins
    return 1;
}

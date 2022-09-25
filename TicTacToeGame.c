#include<stdio.h>
#include<stdlib.h>

int CheckForWin();
void DisplayBoard();
void MarkBoard(char);

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice;
int player;
int ch;

int main()
{
	int GameStatus;
	player = 1;
	char mark;
	printf("\n\n\t\t\t\t=======================");
	printf("\n\t\t\t\tTIC TAC TOE GAME PROJECT");
	printf("\n\t\t\t\t=======================\n");
	printf("\t\t\t\t     ::MAIN MENU::");
	printf("\n\n\t\t\t\t1)START NEW GAME");
	printf("\n\n\t\t\t\t2)EXIT");
	printf("\n\n\t\t\t\tEnter your Choice: ");
	scanf("%d", &ch);
	system("CLS");
	switch(ch)
	{
		case 1:
			do
			{
				DisplayBoard();
				
				player = (player % 2) ? 1 : 2;
				printf("\n\t\t\t\tPlayer %d, Enter a Number: ", player);
		    	scanf("%d", &choice);
			   	mark = (player == 1) ? 'X' : 'O';
			   	MarkBoard(mark);
			   	GameStatus = CheckForWin();
				player++;
			}
			while(GameStatus == -1);
			
			if(GameStatus == 1)
			{
				system("CLS");
				DisplayBoard();
				printf("\n\n\t\t\t\t\a===>Player %d Wins..........\n\n", --player);
				printf("\n\n\t\t\t\tThank you for Playing..........\n\n");
			}
			else
			{
				system("CLS");
				DisplayBoard();
				printf("\n\n\t\t\t\t\a===>Match Draw..........\n\n");
				printf("\n\n\t\t\t\tThank you for Playing..........\n\n");
			}
			break;
		
		case 2:
			return 0;
			break;
	}
	
}

void DisplayBoard()
{
    printf("\n\n\t\t\t\t\tTic Tac Toe\n\n");

    printf("\t\t\t\tPlayer 1 (X)  -  Player 2 (O)\n\n\n");

    printf("\t\t\t\t     |     |     \n");
    printf("\t\t\t\t  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t     |     |     \n");

    printf("\t\t\t\t  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t     |     |     \n");

    printf("\t\t\t\t  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    printf("\t\t\t\t     |     |     \n\n");
}

void MarkBoard(char mark)
{
	if (choice == 1 && square[1] == '1')
    {
    	square[1] = mark;
    	system("CLS");
	}
    else if (choice == 2 && square[2] == '2')
    {
    	square[2] = mark;
    	system("CLS");
	}
    else if (choice == 3 && square[3] == '3')
    {
    	square[3] = mark;
    	system("CLS");
	}
    else if (choice == 4 && square[4] == '4')\
    {
    	square[4] = mark;
    	system("CLS");
	}
    else if (choice == 5 && square[5] == '5')
    {
    	square[5] = mark;
    	system("CLS");
	}
    else if (choice == 6 && square[6] == '6')
    {
    	square[6] = mark;
    	system("CLS");
	}
    else if (choice == 7 && square[7] == '7')
    {
    	square[7] = mark;
    	system("CLS");
	}
    else if (choice == 8 && square[8] == '8')
    {
    	square[8] = mark;
    	system("CLS");
	}
    else if (choice == 9 && square[9] == '9')
    {
    	square[9] = mark;
    	system("CLS");
	}
    else
    {
    	system("CLS");
        printf("\n\n\t\t\t\tInvalid Number..........\n\n");
        player--;
    }
}

int CheckForWin()
{
	int a = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        a = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
    	a = 1;
	}
    else if (square[7] == square[8] && square[8] == square[9])
    {
    	a = 1;
	}
    else if (square[1] == square[4] && square[4] == square[7])
    {
    	a = 1;
	}
    else if (square[2] == square[5] && square[5] == square[8])
    {
    	a = 1;
	}
    else if (square[3] == square[6] && square[6] == square[9])
    {
    	a = 1;
	}
    else if (square[1] == square[5] && square[5] == square[9])
    {
    	a = 1;
	}
    else if (square[3] == square[5] && square[5] == square[7])
    {
    	a = 1;
	}
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
    	a = 0;
	}
    else
    {
    	a = -1;
	}

    return a;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//prototypes
void intro();
int line();
int randy();
// Main
int main()
{
    intro();
    system("pause");
    system("cls");
    srand(time(0));
    int a,b,c,d,x,k,p,i,j,temp,total,W;// p for players x for random function
    int dice1,dice2,dice3;
    int dice4,dice5,dice6;
    char q;
    line();
    printf("\t\n**---WELCOME TO THE GAME---**\n");
    printf("\n\n!!-- Enter the number of (0 to exit from the game) players :");
    scanf("%d",&p);

    x=6;
    if(p>0)
    {
    for(i=1;i<=p;i++)
       {
        printf("\n\t--The player %d Turn--",i);
         dice1 = randy();
         dice2 = randy();
         dice3 = randy();
        printf("\nThe Dice 1 = %d",dice1);
        printf("\nThe Dice 2 = %d",dice2);
        printf("\nThe Dice 3 = %d",dice3);
        total=dice1+dice2+dice3;
        printf("\n\n The total is = %d",total);

        fflush(stdin);

        printf("\n\nEnter your guess (g) for greater or (s) for smaller the next total:");
        scanf("%c",&q);
         dice4 = randy();
         dice5 = randy();
         dice6 = randy();

        printf("\nThe Dice 1 = %d",dice4);
        printf("\nThe Dice 2 = %d",dice5);
        printf("\nThe Dice 3 = %d",dice6);
        temp=dice4+dice5+dice6;
        printf("\n\n The total is = %d",temp);


        if(q=='g'&&temp>total)
             printf("\n****Guess is correct****\n");
        else if(q=='s'&&temp<total)
             printf("\n****Guess is correct****\n");
        else
             printf("\n==!!!!Guess is incorrect!!!!==\n");}}
        else
             return 0;

             system("pause");

}
int randy()
{
    return rand()%6+1;
}
int line()
{
    for(int f=1;f<40;f++)
    printf("=");
}
void intro()
{
    int i;
    for(i=0;i<30;i++)
    {
        printf("--");
    }
    printf("\n\n\n\t ** Guess Game **\n\n\n");
    printf("\n\n\t--Made By Saffi--\n\n");
}


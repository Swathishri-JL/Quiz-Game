#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
{
    int i,r,count,count2;
    float score;
    char choice, playername[20];
    mainhome:
    printf("\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________");
    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    scanf("%c",&choice);
    if(choice=='V'){
        show_record();}
    else if(choice=='R'){
        reset_score();}
    else if(choice=='H'){
        help();}
    else if(choice=='Q'){
        exit(1);}
    else if(choice=='S')
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        scanf("%s",playername);
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 1");
        printf("\n    right answer, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
        printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        quiz:
        count=0;
     	printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		printf("\n\nEnter the option of your Answer:\t"); char ans1;
		scanf("%c",&ans1);
		if (ans1=='C'){
			    printf("\n\nCorrect!!!");count++;
			    getch();}
		else{
		      printf("\n\nWrong!!! The correct answer is C.23232");
		      getch();}
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		printf("\n\nEnter the option of your Answer:\t"); char ans2;
		scanf("%c",&ans2);
		if (ans2=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Switzerland");
		       getch();}
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		printf("\n\nEnter the option of your Answer:\t"); char ans3;
		scanf("%c",&ans3);
		if (ans3=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hyena");
		       getch();}
		if(count>=1)
		{goto test;}
		else{
		    printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
		    getch();
		    exit(1);}
        test:
        printf("\n\n\t*** CONGRATULATION %s you are eligible to play the next level ***",playername);
        game:
        count2=0;
     	printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		printf("\n\nEnter the option of your Answer:\t"); char ans4;
		scanf("%c",&ans4);
		if (ans4=='C')
			{printf("\n\nCorrect!!!");count2++;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       goto score;}
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		printf("\n\nEnter the option of your Answer:\t"); char ans5;
		scanf("%c",&ans5);
		if (ans5=='A')
			{printf("\n\nCorrect!!!");count2++;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		        goto score;}
        score:
        score=(float)count2*100000;
	if((score>0.00) && (score<300000))
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==300000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A SUPER DUPER WINNER!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play again");
	puts(" Press any key if you want to exit");
	char a; scanf("%c",&a);
	if (a=='Y')
		goto quiz;
	else
		{
		edit_score(score,playername);
		exit(1);}
        return 0;}}
void show_record()
    {char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}
void reset_score()
    {float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}
void help()
	{printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");}
void edit_score(float score, char plnm[20])
	{float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
	  }}

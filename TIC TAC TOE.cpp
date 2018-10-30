#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<string.h>

int main()
{int q,flag,count;
char a,b,c,d,e,f,g,h,i,o;
int t;
function:

	fflush(stdin);
do
{
system("cls");
printf("\t\t\t\t\t\t   TIC TAC TOE\n");
printf("\t\t\t\t\t\t   -----------\n");
printf("1. SINGLE PLAYER\n");
printf("2. MULTIPLAYER\n");
printf("Enter your choice: ");
scanf("%d",&q);

flag=0;count=0;
a=' ';b=' ';c=' ';d=' ';e=' ';f=' ';g=' ';h=' ';i=' ';
char name1[20], name2[20];


switch(q)
{case 1: 
system("cls");
printf("\t\t\t\t\t\t   TIC TAC TOE\n");
printf("\t\t\t\t\t\t   -----------\n");
printf("\n\n\t\t\t\t\tEnter Player Name : ");
scanf("%s",name1);
strupr(name1);

do{

flag=0;count=0;
a=' ';b=' ';c=' ';d=' ';e=' ';f=' ';g=' ';h=' ';i=' ';

do{


count++;

	sup:
system("cls");
printf("\t\t\t\t\t\t   TIC TAC TOE\n");
printf("\t\t\t\t\t\t   -----------\n");


	printf("\n\n\n\n\t\t\t\t\t\t  1  |  2  |  3  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  4  |  5  |  6  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  7  |  8  |  9  \n");
	printf("\t\t\t\t\t\t     |     |    \n");

	printf("\n\n\n\n\t\t\t\t\t\t  %c  |  %c  |  %c  \n",a,b,c);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",d,e,f);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",g,h,i);
	printf("\t\t\t\t\t\t     |     |    \n");


	printf("\n\n\t\t\t\t\t     %s, Enter a number (1-9): ",name1);
	fflush(stdin);
	scanf("%d",&t);


if((t==1)||(t==2)||(t==3)||(t==4)||(t==5)||(t==6)||(t==7)||(t==8)||(t==9))
	{if(t==1)
	{if(a=='X'||a=='O')
	 { 
	   printf("\n\n\t\t\t\t\t\tInvalid number..!");
	   Sleep(1000);
	   goto sup;
	  }

	 else
	  a='X';


    }

    else if(t==2)
	{if(b=='X'||b=='O')
	 { 
	   printf("\n\n\t\t\t\t\t\tInvalid number..!");
	   Sleep(1000);
	   goto sup;
	  }

	 else
	   b='X';
    }

    else if(t==3)
	{if(c=='X'||c=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto sup;
	  }

	 else
	  c='X';
    }

    else if(t==4)
	{if(d=='X'||d=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto sup;
	  }

	 else
	  d='X';
    }

    else if(t==5)
	{if(e=='X'||e=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto sup;
	  }

	 else
	  e='X';
    }

    else if(t==6)
	{if(f=='X'||f=='O')
	  {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	  Sleep(1000);
	   goto sup;
	  }

	 else
	  f='X';
    }

    else if(t==7)
	{if(g=='X'||g=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto sup;
	  }

	 else
	  g='X';
    }

    else if(t==8)
	{if(h=='X'||h=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto sup;
	  }

	 else
	  h='X';
    }

    else if(t==9)
	{if(i=='X'||i=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto sup;
	  }

	 else
	  i='X';
    }

     else
	  {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	  Sleep(1000);
	   goto sup;
	  }

if((a=='X'&& b=='X'&& c=='X')||(a=='X'&& d=='X'&& g=='X')||(a=='X'&& e=='X'&& i=='X')||(b=='X'&& e=='X'&& h=='X')||(c=='X'&& e=='X'&& g=='X')||(c=='X'&& f=='X'&& i=='X')||(d=='X'&& e=='X'&& f=='X')||(g=='X'&& h=='X'&& i=='X'))
{
 flag=1;
 break;
}
else if(((a=='O')||(a=='X')) && ((a=='O')||(a=='X'))&&((b=='O')||(b=='X'))&&((c=='O')||(c=='X'))&&((d=='O')||(d=='X'))&&((e=='O')||(e=='X'))&&((f=='O')||(f=='X'))&&((g=='O')||(g=='X'))&&((h=='O')||(h=='X'))&&((i=='O')||(i=='X')))
{

break;}
}
else
{
printf("\n\n\t\t\t\t\t\tInvalid number..!");
Sleep(1000);
fflush(stdin);
goto sup;
}
if(count<5)
{
		system("cls");
printf("\t\t\t\t\t\t   TIC TAC TOE\n");
printf("\t\t\t\t\t\t   -----------\n");

	printf("\n\n\n\n\t\t\t\t\t\t  1  |  2  |  3  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  4  |  5  |  6  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  7  |  8  |  9  \n");
	printf("\t\t\t\t\t\t     |     |    \n");

	printf("\n\n\n\n\t\t\t\t\t\t  %c  |  %c  |  %c  \n",a,b,c);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",d,e,f);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",g,h,i);
	printf("\t\t\t\t\t\t     |     |    \n");
	
	printf("\n\n\t\t\t\t\t      COMPUTERS TURN..!");
	Sleep(500);
	stop:
      t = rand() % 10;

     if(t==0)
     {
	 rand() % 10;
	 goto stop;
     }
     
	else if(t==1)
	{if(a=='X'||a=='O')
	 {
	  rand() % 10;
	   goto stop;
	  }
	 else
	  a='O';



    }

    else if(t==2)
	{if(b=='X'||b=='O')
	{
	rand() % 10;
	   goto stop;
	  }
	 else
	   b='O';

    }

    else if(t==3)
	{if(c=='X'||c=='O')
	 {
      rand() % 10;
	   goto stop;
	  }
	 else
	  c='O';

    }

    else if(t==4)
	{if(d=='X'||d=='O')
	 {rand() % 10;
	   goto stop;
	  }

	 else
	  d='O';
    }

    else if(t==5)
	{if(e=='X'||e=='O')
	 {rand() % 10;
	   goto stop;
	  }

	 else
	  e='O';
    }

    else if(t==6)
	{if(f=='X'||f=='O')
	 {rand() % 10;
	   goto stop;
	  }

	 else
	  f='O';
    }

    else if(t==7)
	{if(g=='X'||g=='O')
	{rand() % 10;
	   goto stop;
	  }

	 else
	  g='O';
    }

    else if(t==8)
	{if(h=='X'||h=='O')
	 {rand() % 10;
	   goto stop;
	  }

	 else
	  h='O';
    }

    else if(t==9)
	{if(i=='X'||i=='O')
	 {rand() % 10;
	   goto stop;
	  }

	 else
	   i='O';
    }

    



if((a=='O'&& b=='O'&& c=='O')||(a=='O'&& d=='O'&& g=='O')||(a=='O'&& e=='O'&& i=='O')||(b=='O'&& e=='O'&& h=='O')||(c=='O'&& e=='O'&& g=='O')||(c=='O'&& f=='O'&& i=='O')||(d=='O'&& e=='O'&& f=='O')||(g=='O'&& h=='O'&& i=='O'))
{
 flag=5;
 break;
}

	}



}while(flag==0);

system("cls");
printf("\t\t\t\t\t\t   TIC TAC TOE\n");
printf("\t\t\t\t\t\t   -----------\n");

	printf("\n\n\n\n\t\t\t\t\t\t  1  |  2  |  3  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  4  |  5  |  6  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  7  |  8  |  9  \n");
	printf("\t\t\t\t\t\t     |     |    \n");

	printf("\n\n\n\n\t\t\t\t\t\t  %c  |  %c  |  %c  \n",a,b,c);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",d,e,f);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",g,h,i);
	printf("\t\t\t\t\t\t     |     |    \n");
	if(flag==1)
	{
	printf("\n\n\t\t\t\t\t\t  %s YOU WON...!",name1);
		Sleep(500);}
	else if(flag==5)
	{
	printf("\n\n\t\t\t\t\t\t  COMPUTER WON...!");
	Sleep(500);
}
	else
	{
	printf("\n\n\t\t\t\t\t\t   MATCH DRAW..!!");
	Sleep(500);
}
pump:
	printf("\n\n\n\n\t\t\t\t\tDo you want to continue Single Player??");
	printf("\n\n\n\n\t\t\t\t\tEnter your choice (Y/N) : ");
	fflush(stdin);
	scanf("%c",&o);
switch(o)
{case 'y':break;
 case 'Y':break;
 case 'N':system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t BYE..!");
        Sleep(500);
        break;
 case 'n':system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t BYE..!");
        Sleep(500);
        break;
 default:system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t INVAILD CHOICE..!");
        Sleep(450);
        goto pump;
        break;
}

}while(o=='y'||o=='Y');
	
    break;
case 2:
	system("cls");
    printf("\t\t\t\t\t\t   TIC TAC TOE\n");
    printf("\t\t\t\t\t\t   -----------\n");
	printf("\n\n\t\t\t\t\tEnter Player 1 Name: ");
	scanf("%s",name1);
	printf("\n\n\t\t\t\t\tEnter Player 2 Name: ");
	scanf("%s",name2);
	strupr(name1);
	strupr(name2);
do{
flag=0;count=0;
a=' ';b=' ';c=' ';d=' ';e=' ';f=' ';g=' ';h=' ';i=' ';	
	
do{


count++;

	up:
system("cls");
printf("\t\t\t\t\t\t   TIC TAC TOE\n");
printf("\t\t\t\t\t\t   -----------\n");


	printf("\n\n\n\n\t\t\t\t\t\t  1  |  2  |  3  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  4  |  5  |  6  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  7  |  8  |  9  \n");
	printf("\t\t\t\t\t\t     |     |    \n");

	printf("\n\n\n\n\t\t\t\t\t\t  %c  |  %c  |  %c  \n",a,b,c);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",d,e,f);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",g,h,i);
	printf("\t\t\t\t\t\t     |     |    \n");


	printf("\n\n\t\t\t\t\t     %s, Enter a number (1-9): ",name1);
	fflush(stdin);
	scanf("%d",&t);


if((t==1)||(t==2)||(t==3)||(t==4)||(t==5)||(t==6)||(t==7)||(t==8)||(t==9))
	{if(t==1)
	{if(a=='X'||a=='O')
	 { 
	   printf("\n\n\t\t\t\t\t\tInvalid number..!");
	   Sleep(1000);
	   goto up;
	  }

	 else
	  a='X';


    }

    else if(t==2)
	{if(b=='X'||b=='O')
	 { 
	   printf("\n\n\t\t\t\t\t\tInvalid number..!");
	   Sleep(1000);
	   goto up;
	  }

	 else
	   b='X';
    }

    else if(t==3)
	{if(c=='X'||c=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto up;
	  }

	 else
	  c='X';
    }

    else if(t==4)
	{if(d=='X'||d=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto up;
	  }

	 else
	  d='X';
    }

    else if(t==5)
	{if(e=='X'||e=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto up;
	  }

	 else
	  e='X';
    }

    else if(t==6)
	{if(f=='X'||f=='O')
	  {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	  Sleep(1000);
	   goto up;
	  }

	 else
	  f='X';
    }

    else if(t==7)
	{if(g=='X'||g=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto up;
	  }

	 else
	  g='X';
    }

    else if(t==8)
	{if(h=='X'||h=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto up;
	  }

	 else
	  h='X';
    }

    else if(t==9)
	{if(i=='X'||i=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto up;
	  }

	 else
	  i='X';
    }

     else
	  {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	  Sleep(1000);
	   goto up;
	  }

if((a=='X'&& b=='X'&& c=='X')||(a=='X'&& d=='X'&& g=='X')||(a=='X'&& e=='X'&& i=='X')||(b=='X'&& e=='X'&& h=='X')||(c=='X'&& e=='X'&& g=='X')||(c=='X'&& f=='X'&& i=='X')||(d=='X'&& e=='X'&& f=='X')||(g=='X'&& h=='X'&& i=='X'))
{
 flag=1;
 break;
}
else if(((a=='O')||(a=='X')) && ((a=='O')||(a=='X'))&&((b=='O')||(b=='X'))&&((c=='O')||(c=='X'))&&((d=='O')||(d=='X'))&&((e=='O')||(e=='X'))&&((f=='O')||(f=='X'))&&((g=='O')||(g=='X'))&&((h=='O')||(h=='X'))&&((i=='O')||(i=='X')))
{

break;}
}
else
{
printf("\n\n\t\t\t\t\t\tInvalid number..!");
Sleep(1000);
fflush(stdin);
goto up;
}
if(count<5)
{top:
		system("cls");
printf("\t\t\t\t\t\t   TIC TAC TOE\n");
printf("\t\t\t\t\t\t   -----------\n");

	printf("\n\n\n\n\t\t\t\t\t\t  1  |  2  |  3  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  4  |  5  |  6  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  7  |  8  |  9  \n");
	printf("\t\t\t\t\t\t     |     |    \n");

	printf("\n\n\n\n\t\t\t\t\t\t  %c  |  %c  |  %c  \n",a,b,c);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",d,e,f);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",g,h,i);
	printf("\t\t\t\t\t\t     |     |    \n");
	
	printf("\n\n\t\t\t\t\t     %s, Enter a number (1-9): ",name2);
	fflush(stdin);
	scanf("%d",&t);
if((t==1)||(t==2)||(t==3)||(t==4)||(t==5)||(t==6)||(t==7)||(t==8)||(t==9))
{
		if(t==1)
	{if(a=='X'||a=='O')
	 {
	  printf("\n\n\t\t\t\t\t\tInvalid number..!");
	  Sleep(1000);
	   goto top;
	  }
	 else
	  a='O';



    }

    else if(t==2)
	{if(b=='X'||b=='O')
	{
	printf("\n\n\t\t\t\t\t\tInvalid number..!");
	Sleep(1000);
	   goto top;
	  }
	 else
	   b='O';

    }

    else if(t==3)
	{if(c=='X'||c=='O')
	 {
	printf("\n\n\t\t\t\t\t\tInvalid number..!");
	Sleep(1000);
	   goto top;
	  }
	 else
	  c='O';

    }

    else if(t==4)
	{if(d=='X'||d=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto top;
	  }

	 else
	  d='O';
    }

    else if(t==5)
	{if(e=='X'||e=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto top;
	  }

	 else
	  e='O';
    }

    else if(t==6)
	{if(f=='X'||f=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto top;
	  }

	 else
	  f='O';
    }

    else if(t==7)
	{if(g=='X'||g=='O')
	{printf("\n\n\t\t\t\t\t\tInvalid number..!");
	Sleep(1000);
	   goto top;
	  }

	 else
	  g='O';
    }

    else if(t==8)
	{if(h=='X'||h=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto top;
	  }

	 else
	  h='O';
    }

    else if(t==9)
	{if(i=='X'||i=='O')
	 {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	 Sleep(1000);
	   goto top;
	  }

	 else
	   i='O';
    }

     else
	  {printf("\n\n\t\t\t\t\t\tInvalid number..!");
	  Sleep(1000);
	   goto top;
   }



if((a=='O'&& b=='O'&& c=='O')||(a=='O'&& d=='O'&& g=='O')||(a=='O'&& e=='O'&& i=='O')||(b=='O'&& e=='O'&& h=='O')||(c=='O'&& e=='O'&& g=='O')||(c=='O'&& f=='O'&& i=='O')||(d=='O'&& e=='O'&& f=='O')||(g=='O'&& h=='O'&& i=='O'))
{
 flag=5;
 break;
}

	}
}
else
{
	printf("\n\n\t\t\t\t\t\tInvalid number..!");
	Sleep(1000);

	goto top;
}

}while(flag==0);

system("cls");
printf("\t\t\t\t\t\t   TIC TAC TOE\n");
printf("\t\t\t\t\t\t   -----------\n");

	printf("\n\n\n\n\t\t\t\t\t\t  1  |  2  |  3  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  4  |  5  |  6  \n");
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  7  |  8  |  9  \n");
	printf("\t\t\t\t\t\t     |     |    \n");

	printf("\n\n\n\n\t\t\t\t\t\t  %c  |  %c  |  %c  \n",a,b,c);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",d,e,f);
	printf("\t\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t\t  %c  |  %c  |  %c  \n",g,h,i);
	printf("\t\t\t\t\t\t     |     |    \n");
	if(flag==1)
{
		printf("\n\n\t\t\t\t\t\t  %s WON...!",name1);
		Sleep(500);
	}
	else if(flag==5)
	{
	printf("\n\n\t\t\t\t\t\t  %s WON...!",name2);
		Sleep(500);}
	else
	{
	printf("\n\n\t\t\t\t\t\t   MATCH DRAW..!!");
		Sleep(500);
	}
    tump:
printf("\n\n\n\n\t\t\t\tDo you want to continue as Multi Player??");
	printf("\n\n\n\n\t\t\t\tEnter your choice (Y/N) : ");
	fflush(stdin);
	scanf("%c",&o);
switch(o)
{case 'y':break;
 case 'Y':break;
 case 'N':system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t BYE..!");
        Sleep(500);
        break;
 case 'n':system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t BYE..!");
        Sleep(500);
        break;
 default:system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t INVAILD CHOICE..!");
        Sleep(450);
        goto tump;
        break;
}

}while(o=='y'||o=='Y'); break;

default: 
        printf("\n\n\t\t\t\t\tInvalid Choice..!");
        Sleep(1000);
	    goto function;

	}
	jump:
	system("cls");
	printf("\n\n\n\n\t\t\t\tDo you want to continue playing tic tac toe??");
	printf("\n\n\n\n\t\t\t\tEnter your choice (Y/N) : ");
	fflush(stdin);
	scanf("%c",&o);
switch(o)
{case 'y':break;
 case 'Y':break;
 case 'N':system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t BYE..!");
        Sleep(500);
        break;
 case 'n':system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t BYE..!");
        Sleep(500);
        break;
 default:system("cls");
        printf("\n\n\n\n\t\t\t\t\t\t INVAILD CHOICE..!");
        Sleep(450);
        goto jump;
        break;
}

}while(o=='y'||o=='Y');





		return 0;



}



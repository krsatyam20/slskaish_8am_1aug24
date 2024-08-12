#include<stdio.h>
#include<conio.h>

void main(){

 clrscr();
 int mrk,res;

 printf("Please enter your Total marks:- \t");
 scanf("%d",&mrk);

 res= 500 * 0.40;

 printf("Passing Marks Is=: %d",res);
 printf("\nYour marks %d\n",mrk);

	if(mrk > res){
	   printf("Cong You are Pass") ;

	}
	else {
	 printf("Sorry please try next time");

	}




getch();
}
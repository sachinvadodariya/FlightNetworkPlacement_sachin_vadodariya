#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lnk;
};

struct node *top=NULL,*tmp,*pop,*start,*save;

void main()
{
    int data=-1,j=0,choice,bool=1;
    clrscr();
    pop=(struct node *)malloc(sizeof(struct node));
    while(1){

       printf("\n 1) PUSH \n 2) POP\n 3) EXIT\n");
	printf("\n ***ENTER CHOICE :**--> "); //for select choice
	scanf("%d",&choice);
	switch(choice){ // SWITCH CASE BLOCK

case 1:{ // for push data
	    tmp=(struct node *)malloc(sizeof(struct node));
	    printf("***ENTER DATA ELEMENT**:--> ");
	    scanf("%d",&j);
if((data+1)==j){ // check for restriction of entered data
if(j>=10){
printf("*** DATA LIMIT IS 9..U CANT EXCEED IT*** ");
break;
}
	    tmp->data=j; // ADDING TO STACK
	    tmp->lnk=top;
	    top=tmp;
data=data+1;
printf("\n***> ELEMENT WHICH IS PUSHED IS  --> %d  ",data);
break;
}else
{

printf("\n OOPS ........!");
printf("\n  CHECK SEQUENCE OF DATA...(NEXT ELEMENT MUST BE  :-> %d)\n",data+1);

}
break;
}
case 2:{ // FOR POP OPERATION

	    if(top!=NULL)
	    {
printf("\n ELEMENT WHICH IS POPPED IS ->  %d  \n",top->data);


pop->lnk=top; // ADDING POPPED NODES TO POP LIST
top=top->lnk; //SETTING TOP TO PREVIOUS POSITION IN STACK
pop=pop->lnk;
pop->lnk=NULL;

printf("ELEMENTS WHICH IS CURRENTLY POPPED OUT : "); // IT WILL SHOW CURRENT POPPED OUT VALUE...
if(bool){
start=(struct node *)malloc(sizeof(struct node));
start=pop;
save=start;
bool=0;
}

while(start!=NULL)   // for printing popped out values
	    {
		printf("-> %d",start->data);
		start=start->lnk;
	    }
	    start=save;
	    }
	    else
	    {
		printf("\n ***UNDERFLOW STACK****");
	    }

break;
}

case 3: // EXIT CASE
exit(0);
}


getch();    }
}


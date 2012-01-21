#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node   // ** NODE OF KIDS **
{
  int num;
  int eliminated;
  struct node *lnk;

};

struct node *crcle,*start,*tmp;

void main()
{
  int m,n,j,bool=1,won,number=0,increment;
  clrscr();
  start=(struct node *)malloc(sizeof(struct node));
  crcle=(struct node *)malloc(sizeof(struct node));

  printf("GiVE NUMBER OF KiDS : "); // ENTER VALUES OF M AND N
  scanf("%d",&m);

  printf("GiVE VALUE OF N : ");
  scanf("%d",&n);

     for(j=1;j<=m;j++){ // CREATiNG CiRCULAR QUEUE
     if(bool){
     crcle->num=j;
     crcle->eliminated=0;
      bool=0;
      start=crcle;
      continue;
  }
   tmp=crcle;
   crcle=(struct node *)malloc(sizeof(struct node));
   crcle->num=j;
   crcle->eliminated=0;
   tmp->lnk=crcle;

}
  crcle->lnk=start;


  while(won!=1){ // FiRST LOOP RUNS TiLL WiNNiNG
    increment=1;

    while(increment!=n){ // SECOND LOOP RUNS TiLL COUNT iS EQUAL TO GiVEN VALUE N
      while(start->eliminated==1){ // WHiLE LOOP FOR SKiPPiNG ALREADY ELiMiNATED KiD(S)
printf("\n%d skipped ",start->num);

start=start->lnk;
      }
if(increment==1)   // FOR FIRST COUNED KID HERE IS A TRACKING NUMBER
{
number=start->num;
}


if(increment==2)
{

if(number==start->num)  //  CONDiTiON FOR WIN
{
won=1;
break;
}

}

increment=increment+1;
printf("\n %d IS COUNTED ",start->num);

start=start->lnk;
}


while(start->eliminated==1)    // FOR  ELIMINATED KIDS , HERE WE USE WHILE LOOP
{
printf("\n %d WAS SKIPPED  ",start->num);

start=start->lnk;
}

    if(increment==2)    // *** THIS CASE IS FOR M<4  ******
   {
   if(number==start->num){

   won=1;
   break;
  }}

  if(won!=1) // ** KID ELIMINATION AFTR COUNTING**
   {
    start->eliminated=1;
    printf("\n%d ELiMiNATED ",start->num);
    start=start->lnk;

   }
  }

printf("\n\n ** KiD AT POSiTiON = %d WON  **\n ",number);

}


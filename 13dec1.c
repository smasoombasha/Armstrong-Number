#include<stdio.h>
#include<conio.h>
void main()
{
    /* Program to write a number in words.*/
    /*int n,i=0,rev=0,j=0,m;
    printf("Enter n value ");scanf("%d",&n);
    m=n;
    for(n!=0;n>i;n/=10){
        rev=rev*10+(n%10);
    }
    printf("%d in words are -\n",m);
    for(rev!=0;rev>i;rev/=10){
        j=rev%10;
       switch(j){
        case 0: printf(" Zero ");break;
        case 1: printf(" One ");break;
        case 2: printf(" Two ");break;
        case 3: printf(" Three ");break;
        case 4: printf(" Four ");break;
        case 5: printf(" Five ");break;
        case 6: printf(" Six ");break;
        case 7: printf(" Seven ");break;
        case 8: printf(" Eight ");break;
        case 9: printf(" Nine ");break;
        default: printf(" Not a valid Number.");
       }
    }*/
         int n,rev=0,m,j=0;
         printf("Enter n value ");scanf("%d",&n);
         m=n;
         while(n!=0){
            rev=rev*10+(n%10);
            n/=10;
         }
         printf("%d in words --- ",m);
         while(rev!=0){
            j=rev%10;
            switch(j){
        case 0: printf(" Zero ");break;
        case 1: printf(" One ");break;
        case 2: printf(" Two ");break;
        case 3: printf(" Three ");break;
        case 4: printf(" Four ");break;
        case 5: printf(" Five ");break;
        case 6: printf(" Six ");break;
        case 7: printf(" Seven ");break;
        case 8: printf(" Eight ");break;
        case 9: printf(" Nine ");break;
        default: printf(" Not a valid Number.");

         }
         rev/=10;



}}
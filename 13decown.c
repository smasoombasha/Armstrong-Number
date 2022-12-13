/* Finding n Armstrong numbers between user input two values*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    /*Armstrong number between this i,j values*/
    long int i,j;
    printf("Enter the values to find Armstrong numbers between them.\n");
    printf("Enter the i values. ");scanf("%d",&i);
    printf("\nEnter the j value");scanf("%d",&j);
    /* Program to write  a Armstrong Number.*/  
   while(i<=j){
    long int m=i,n=i,x=i; 
    int l=0;
    /* counting no of values*/
    while(x!=0){
     int z=(x%10)!=0;
     l++;
     x/=10;
    } 
   /* Armstrong finding starts*/
   if(n<10){
        printf("Please enter the i value more than 9.");
    }else{
        long int s=0;
      do{ 
            s=s+pow((n%10),l);
            n/=10; 
        }while(n!=0);
        if(m==s){
            printf("%ld is a Armstrong number.\n",m);
        }  
    }
        i++;
   }
    
    
}
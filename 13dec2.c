#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    /* Program to write  a Armstrong Number.*/
    long int n,s=0,m,x;
    int l=0;
    printf("Enter n value to know whether Armstrong Number or Not. ");scanf("%ld",&n);
    m=n;
    x=n; 
    /* counting no of digits*/
    while(n!=0){
     int i=(n%10)!=0;
     l++;
     n/=10;
    } 
    if(x<10){
        printf("Please enter the n value more than 9.");
    }else{
        while(x!=0){
            s=s+pow((x%10),l);
            x/=10; 
        }
        if(m==s){
            printf("%ld is a Armstrong number.",m);
        } else{
            printf("%ld is not a Armstrong number.",m);
        }
    }
}
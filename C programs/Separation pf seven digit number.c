
   
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter 7 digit Number : ");
    scanf("%d",&n);
    printf( "\n output : " );

    printf("%d  ",(n/1000000));
    n = n-((n/1000000)*1000000); 
	  
    printf("%d  ",(n/100000));
    n = n-((n/100000)*100000);
        
    printf("%d  ",(n/10000));
    n= n -((n/10000)*10000);
    
    printf("%d  ",(n/1000));
    n = n - ((n/1000)*1000);
    
    printf("%d  ",(n/100));
    n = n - ((n/100)*100);
    
    printf("%d  ",(n/10));
    n= n -((n/10)*10);  
    
    printf("%d\n",(n%10));
    
}
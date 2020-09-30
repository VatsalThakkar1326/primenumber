#include<stdio.h>
#include<math.h>
#include <stdlib.h>

    int main(){
	int flag=0;
	int num,i;
	printf("\nenter the number\n");
	scanf("%d",&num);
	if(num<=1){
		printf("not prime");
		exit(0);
	}
	if(num==2)
	{
		printf("prime");
          exit(0);
	}
     else if(num%2==0){
	     printf("not prime");
          exit(0);
             
      }
	for(i=3;i<=sqrt(num);i=i+2)
	{
		if(num%i==0)
		{   
		    flag=1;
			break;
		}
	
    }   
    
		if(flag==0){
			printf("prime");
		}
		else{
			printf("not prime");
		}


}





    

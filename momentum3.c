#include<stdio.h>

main(){
	
	int k,i,n,g;
	
	printf("Enter A :- ");
	scanf("%i",&k);

	printf("Enter B :- ");
	scanf("%i",&i);

	printf("Enter C :- ");
	scanf("%i",&n);

	printf("Enter D :- ");
	scanf("%i",&g);
	
	if(k>i){
		
		if(k>n){
			
				if(k>g){
					printf("A is Max");
				}			
				else{
					printf("D is Max");
				}
		}
		
		else{
			
			printf("C is max");
		}
}
		
	else if(i>n){
		
			if(i>g) {
		
			printf(" B is max");
	}
			else{ 
		
			printf("D is max");
		
		}
	}	
	else if(n>g){
		
		printf("C is Max");
	}
	
	else{
		printf("D is max");
	}
}


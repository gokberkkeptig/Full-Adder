/*Gökberk Keptig */
#include<stdio.h>


int main()
{
	int choose,n,y,count=0,base,input,Sum,C_out,x,binary,A,B,C_IN;
	char hexa,octa;

	/*ENTRANCE*/

	printf("Welcome to Full Adder!\n(1) Compute and Display the Outputs\n(2) Quit\n");
	scanf("%d",&choose);
	while(choose != 1 && choose != 2){
		printf("(1) Compute and Display the Output\n(2) Quit\nYou choose:");
		scanf("%d",&choose);}
	while(choose != 2){
		Sum=0;C_out=0;x=1;binary=1;A=0;B=0;C_IN=0;
		if(choose==1)
			printf("You have chosen option 1\n");
		
		/*BASE SELECTION*/
		
		printf("Which base will you use to enter data lines (base 16/8/2)? ");
		scanf("%d",& base);
		
		
		/* BASE ERROR*/
		
		while(base != 2 && base != 8 && base != 16){
		printf("ERROR: %d is NOT valid base!\n",base);
		printf("Which base will you use to enter data lines (base 16/8/2)? ");
		scanf("%d",&base);
		}
		
		/* BASE 2*/
		
		if(base==2){
		
		/*INPUT SECTION*/
		
		printf("Please enter input:");
		scanf("%d",&input);
		
		/*COUNT DIGITS*/
		
			n=input;  
			count=0;
			  while(n != 0)
	    {
	        
	        n = n/10;
	        count=count+1;
	    
		}
		/*CHECK IF ITS BINARY OR NOT*/
		
		y=input;
		while(y>0){
			if( y%10 != 1 && y%10 != 0){
				y=0;
				binary=0;}
			else 
				y=y/10;
		}
		/*input ERROR*/
	
		while(count>3 || binary == 0){
			if(count>3)
			printf("It is not a 3-digit binary number for the lines to input. Please try again!\n");
		else if(binary == 0)
			printf("It is not a binary number. Please try again!\n");
			printf("Please enter input:");
			scanf("%d",&input);
			n=input;  
			count=0;
			while(n != 0)
	    {
	        
	        n = n/10;
	        count=count+1;
	    
		}
			y=input;
			binary=1;
		while(y>0){
			if( y%10 != 1 && y%10 != 0){
				y=0;
				binary=0;}
			else 
				y=y/10;
		}
	
		}
		/*Converting input to A,B and C_IN*/
		
		C_IN=input%10;
		input/=10;
		B=input%10;
		input/=10;
		A=input%10;
		
	
	}
		
		/*END OF BASE 2 */
		
		
		/*BASE 8 */
		
		else if(base == 8){
		
		/*input SECTION*/
		
		printf("Please enter input:");
		fflush(stdin);
		scanf("%c",&octa);
		
		/*DECIMAL TO BINARY*/
	
		while(x==1){
	
		switch(octa){
			case '0' : C_IN = 0 , B = 0 , A = 0 , x = 0 ; break;
			case '1' : C_IN = 1 , B = 0 , A = 0 , x = 0 ; break;
			case '2' : C_IN = 0 , B = 1 , A = 0 , x = 0 ; break;
			case '3' : C_IN = 1 , B = 1 , A = 0 , x = 0 ; break;
			case '4' : C_IN = 0 , B = 0 , A = 1 , x = 0 ; break;
			case '5' : C_IN = 1 , B = 0 , A = 1 , x = 0 ; break;
	 		case '6' : C_IN = 0 , B = 1 , A = 1 , x = 0 ; break;
			case '7' : C_IN = 1 , B = 1 , A = 1 , x = 0 ; break;
			default : {
			printf("This is not valid a number in base 8! Please try again!\n",hexa);
			printf("Please enter input:");
			fflush(stdin);
			scanf("%c",&octa);}
		}
	}
		
	
		
		/*END OF BASE 8*/
	
		
	}
		/*BASE 16*/
		
		else if(base == 16){
		
		
		/*input SECTION*/
		
		printf("Please enter input:");
		fflush(stdin);
		scanf("%c",& hexa );
		while(x==1){
		
		/*HEXADECIMAL TO BINARY*/
			
		switch(hexa){
			case '0' : C_IN = 0 , B = 0 , A = 0 , x = 0 ; break;
			case '1' : C_IN = 1 , B = 0 , A = 0 , x = 0 ; break;
			case '2' : C_IN = 0 , B = 1 , A = 0 , x = 0 ; break;
			case '3' : C_IN = 1 , B = 1 , A = 0 , x = 0 ; break;
			case '4' : C_IN = 0 , B = 0 , A = 1 , x = 0 ; break;
			case '5' : C_IN = 1 , B = 0 , A = 1 , x = 0 ; break;
	 		case '6' : C_IN = 0 , B = 1 , A = 1 , x = 0 ; break;
			case '7' : C_IN = 1 , B = 1 , A = 1 , x = 0 ; break;
			default : {
			printf("Hexadecimal %c cannot be represented with 3 bits! Please try again!\n",hexa);
			printf("Please enter input:");
			fflush(stdin);
			scanf("%c",&hexa);}
			
		
		}}
		
		/*END OF BASE 16*/
	
		}
		/*Finding Output*/
		Sum= C_IN ^ (A ^ B);
		C_out =  (A & B) | (C_IN & (A ^ B));
		
		/*PRINTING OUTPUT*/
		
		printf("Sum is %d C_out is %d\n",Sum,C_out);
		
		/*Reuse of program*/
	
		printf("Welcome to Full Adder!\n(1) Compute and Display the Output\n(2) Quit\nYou choose:");
		scanf("%d",&choose);
	
}
	printf("You have chosen option 2\nByee!!");
	
	return 0;
	
}

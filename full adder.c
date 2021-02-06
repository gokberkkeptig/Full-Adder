/*Gökberk Keptig */
#include<stdio.h>
#include <stdbool.h>

bool checkBinary(int);
int counter(int);
int* findResult(int);
int octalToBinary(char );

int main()
{
	int choose,n,y,count=0,base,input,Sum =0,C_out,binary,A,B,C_IN,*result,res;
	char hexa,octa;
	bool isBinary;

	/*ENTRANCE*/

	printf("Welcome to Full Adder!\n(1) Compute and Display the Outputs\n(2) Quit\n");
	scanf("%d",&choose);
	do{
	if(choose == 1){
		while(choose == 1)
	{
		Sum=0;C_out=0;A=0;B=0;C_IN=0;
		if(choose==1)
			printf("You have chosen option 1\n");
		
		/*BASE SELECTION*/
		
		printf("Which base will you use to enter data lines (base 16/8/2)? ");
		scanf("%d",& base);
		fflush(stdin);

		/* BASE ERROR*/
		
		while(base != 2 && base != 8 && base != 16){
		printf("ERROR: %d is NOT valid base!\n",base);
		printf("Which base will you use to enter data lines (base 16/8/2)? ");
		scanf("%d",&base);
		fflush(stdin);
		}
		
		/* BASE 2*/
		
		if(base==2){
		
		/*INPUT SECTION*/
		
		printf("Please enter input:");
		scanf("%d",&input);
		
		/*COUNT DIGITS*/
		
		count = counter(input);
		/*CHECK IF ITS BINARY OR NOT*/
		
		isBinary = checkBinary(input);
		/*input ERROR*/
	
		while(count>3 || !isBinary){
			if(count>3){
				printf("It is not a 3-digit binary number for the lines to input. Please try again!\n");
			}
				
		 	if(!isBinary){
		 		printf("It is not a binary number. Please try again!\n");
			 }
			printf("Please enter input:");
			scanf("%d",&input); 
			count = counter(input);
			isBinary=checkBinary(input);
		}
		int res = input;
		
	}
		
		/*END OF BASE 2 */
		
		
		/*BASE 8 */
		
		else if(base == 8){
		
		/*input SECTION*/
		
		printf("Please enter input:");
		fflush(stdin);
		scanf("%s",&octa);
		
		/*DECIMAL TO BINARY*/
	
		
	
		int res = octalToBinary(octa);
		}
	
		
	
		
		/*END OF BASE 8*/
	
		
	
		/*BASE 16*/
		
		else if(base == 16){
		
		
		/*input SECTION*/
		
		printf("Please enter input:");
		fflush(stdin);
		scanf("%c",& hexa );
	
		
		/*HEXADECIMAL TO BINARY*/
		
		int res = octalToBinary(hexa);
		
		/*END OF BASE 16*/
	
		}
		
		/*Converting input to A,B and C_IN*/
		result = findResult(res);
		A = result[2];
		B = result[1];
		C_IN = result[0];
		
		/*Finding Output*/
		Sum = C_IN ^ (A ^ B);
		C_out =  (A & B) | (C_IN & (A ^ B));
		
		/*PRINTING OUTPUT*/
		
		printf("Sum is %d C_out is %d\n",Sum,C_out);
		
		/*Reuse of program*/
	
		printf("Welcome to Full Adder!\n(1) Compute and Display the Output\n(2) Quit\nYou choose:");
		scanf("%d",&choose);
		fflush(stdin);
}
	}else if(choose == 2){
		printf("You have chosen option 2\nByee!!");
	
		break;
	}
	else{
		while(choose != 1 && choose != 2){
			printf("You have chosen a wrong option! Please try again! \n");
			printf("(1) Compute and Display the Output\n(2) Quit\nYou choose:");
			scanf("%d", &choose);
			fflush(stdin);
		}
	}
	
}while(choose != 2);
	return 0;
}
/*COUNT DIGITS FUNCTION*/
int counter(int n){
	int count = 0;
	while(n != 0)
	    {
	        n = n/10;
	        count=count+1;
		}
	return count;
}

/*CHECK IF ITS BINARY OR NOT FUNCTION*/
bool checkBinary(int y){
	bool binary = true;
	while(y>0){
		if( y%10 != 1 && y%10 != 0){
			y=0;
			binary = false;
			break;
			}
		else 
			y=y/10;
	}
	return binary;
}

int* findResult(int x){
		int arr[3];
		arr[0]=x%10;
		x/=10;
		arr[1]=x%10;
		x/=10;
		arr[2]=x%10;
		
		return arr;
} 


int octalToBinary(char octa){
	int binary;
		switch(octa){
			case '0' : binary = 000 ; break;
			case '1' : binary = 001 ; break;
			case '2' : binary = 010 ; break;
			case '3' : binary = 011 ; break;
			case '4' : binary = 100 ; break;
			case '5' : binary = 101 ; break;
	 		case '6' : binary = 110 ; break;
			case '7' : binary = 111 ; break;
			default : 
			{
				printf("This is not valid a number in base 8! Please try again!\n",octa);
				printf("Please enter input:");
				fflush(stdin);
				scanf("%c",&octa);
			}
	}
	return binary;		
}


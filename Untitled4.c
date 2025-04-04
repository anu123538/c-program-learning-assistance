
#include<stdio.h>

#include<stdlib.h>

void showMenu();

void explainDatatype();
void explainVariable();
void explainLoop();
void explainFunction();
void explainArray();
void quiz(int topic);
void askmoreinfo();
int main(){
	
int choice,lasttopic=0;
printf("        WELCOME TO THE C PROGRAMMING LEARNING   ASSISTANCE    ");
while(1){
showMenu();
printf("User:Enter your choice:");
scanf("%d", &choice);
switch(choice){
case 1:
printf("Bot: you are select the datatype.\n");
explainDatatype();
lasttopic=1;
break;
case 2:
printf("Bot: you  are select the variable.\n");
explainVariable();
lasttopic=2;
break;
case 3:
printf("Bot:you are select the loop.\n");
explainLoop();
lasttopic=3;
break;
case 4:
printf("Bot:you are select the function.\n");
explainFunction();
lasttopic=4;
break;
case 5:
printf("Bot:you are select the  array.\n");
explainArray();
lasttopic=5;
break;
case 6:
if(lasttopic==0){
printf("Bot:Please first choose a topic before starting the quiz \n");
}else{
quiz(lasttopic);
}
break;
case 7:
printf("Bot:THANK YOU! ");
exit(0);
default:
printf("Bot:invalid choice.please input correct number");
}
	}
	return 0;
}
void showMenu(){
printf(" \n Select the topic below \n");
printf("1. Datatype\n");
printf("2. Variable\n");
printf("3. Loop\n");
printf("4. Function\n");
printf("5. Array\n");
printf("6. take quiz\n");
printf("7. exit\n");
}
void askmoreinfo(){
	char response;
	printf("Bot:Do you want to more information?(y/n):");
	scanf(" %c", &response);
	if(response =='y'){
		printf("Bot:refer below link: \n");
                         printf("Bot:http://programhub.io");
	}else{
		printf("Bot:return topic \n");
	}
}

void explainDatatype(){

	printf("Bot:introduction of datatype     \n");
	printf("A data type is the type of data a variable can store, so if a variable could only store 0s and 1s, it could be an integer. \n");
	printf("It has two principal types. One of them is the primitive type, while the other is the nonprimitive type \n");
	printf("Bot:Example :");
	printf("  int, float, char, String\n");
	askmoreinfo();
}
void explainVariable(){

	printf(" Bot: introduction of  variable     \n");
	printf("The term, variable, is the name of a memory location. And it has data type, storage location, value and size.\n ");
	printf("Bot:Example :");
	printf("    float number=45; \n");
	 printf("printf(\"number: %d\", number);\n");
	askmoreinfo();
}

void explainLoop(){
	
	printf("Bot:introduction of loop    \n");
	printf("Three types of loop structures are present in the C programming language namely for loop, while loop and do while loop. \n");

	printf("    syntax of for loop    \n");
	printf(" for(initialization; condition; update) {\n");
	printf("Bot:Example  \n");
	printf("int main(){\n");
	printf("for(int i=0;i<=5;i++){\n");
	
           printf("printf(\"%d\", i);\n");
	printf("} \n");
	printf ("return 0; \n");
	printf("} \n");
            askmoreinfo();	}
void explainFunction(){
	
		printf("Bot:introduction of function    \n");
		printf("Programming functions are  elements that have a particular objective            that they perform  \n");
		printf("It helps in reusing code and making the program more organized.\n");
		printf("Bot:Example \n");
		printf("#include<stdio.h>\n");
		printf("int main(){\n");
		
	
	    printf("printf(\"hello\");\n");
	    printf("return 0;\n");
	     printf(" }\n");
                 askmoreinfo();
	}
	
void explainArray(){
		
		printf("Bot:introduction of array     \n");
		printf("A multi-value can be kept in a single variable of the same data type using the ARRAY data type. \n");
		printf("     syntax of array declaring    \n");
		printf("  datatype arrayname[size]; \n");
		printf("Bot:Example :");
		printf("  int numbers[3]={23,45,67}; \n");
                        askmoreinfo();
		}

void quiz( int topic){
	int answer;
            char response;
	printf("Bot:QUESTION   \n");
	switch(topic){
               case 1:
    	
	printf ("Q1: Which following is not a datatype\n");
	printf("1. int\n");
	printf("2. float\n");
	printf("3. void\n");
	printf("User:select the correct answer:\n");
	scanf("%d", &answer);
	if (answer==3)
		printf("Bot:answer is right  \n");
	else
		printf("Bot:Answer is wrong The correct answer is  '3. void' \n");

	break;
	case 2:
		
	  printf("Q2: choose the correct one\n");
	  printf("1.int age=2\n");
	  printf("2. age=2; \n");
	  printf("3. int age=2; \n");
	  printf("User:select the correct answer:\n");
	scanf("%d", &answer);
	    if(answer==3)
	    	printf("Bot:your answer is right \n");
	    else
	    	printf("Bot:your answer is wrong.Correct answer is '3.int age=2;'\n");
	    	
	
         break;
     case 3:
         	
	printf("Q3: give output the below group:\n");
	printf("#include<stdio.h>\n");
	printf("int main(){\n");

	printf("for(inti=4;i<=6;i++){\n");
	printf("printf(\"%d\", i);\n");
	printf("} \n");
	printf("return 0; \n");
	printf("}\n");
	printf("1. 4,5,6\n");
	printf("2. 3,5,6\n");
	printf("3. 6\n");
	printf("User:select the correct answer:\n");
	scanf("%d",&answer);
	if (answer==1)
		printf("Bot:answer is right  \n");
	else
		printf("Bot:answer is wrong.Correct answer is '1.4,5,6'\n");
		
    	
      	break;
	case 4:
		
		printf("Q4: which key word is used to define function in c:\n");
		printf("1. define\n");
		printf("2. function\n");
		printf("3. void\n");
		printf("User:select the correct answer:\n");
		scanf("%d",&answer);
		if(answer==3)
			printf("Bot:answer is right \n");
		else
			printf("Bot:answer is wrong.The answer is '3.void'\n");
		
			
	
		break;
		case 5:
				
			 printf("Q5:what is the index of first element in array:\n");
			 printf("1.  0\n");
			 printf("2. -1\n");
			 printf("3.  1\n");
			 printf("User:select the correct answer:\n");
			 scanf("%d",&answer);
			 if (answer==1)
			 	printf("Bot:the answer is right  \n");
			 else
			 	printf("Bot:the answer is wrong.The answer is '1. 0'\n");
			 
			 break;
		
		}
	printf("Bot:do you want to another question?(y/n):");
		scanf(" %c", &response);
		if(response=='y'){
			printf("Bot:refer below link:\n");
                                    printf("Bot:http://w3school.com");
		}else{
			printf("Bot:return topic\n");
	}
}
	



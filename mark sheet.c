#include<stdio.h>
#include<string.h>
int main(){
		char name [50], class [40]; int rollnum,mathematics,physics,chemistry,english; float total,percentage;
	    printf("\tPLEASE ENTER YOUR NAME\n");
	    scanf("\t%s",&name);
	    printf("\tPLEASE ENTER YOUR class\n");
	    scanf("\t%s",&class);
	    printf("\tPLEASE ENTER YOUR ROLL NUMBER\n");
	    scanf("\t%d",&rollnum);
	printf("\tPLEASE ENTER YOUR marks of mathematics\n");
	    scanf("\t%d",&mathematics);
	printf("\tPLEASE ENTER YOUR marks of physics\n");
	    scanf("\t%d",&physics);
	printf("\tPLEASE ENTER YOUR marks of chemistry\n");
	    scanf("\t%d",&chemistry);
	printf("\tPLEASE ENTER YOUR marks of english\n");
	    scanf("\t%d",&english);
	total=mathematics+physics+chemistry+english;
	percentage=total/400*100;
	                                               
	    printf("\tYOU HAVE ENTERED %s as your name \n",name);
	    printf("\tYOU HAVE ENTERED %s as your class \n",class);                                           
	    printf("\tYOU HAVE ENTERED %d as your roll number \n", rollnum);                                           		                                           
	    printf("\tYOUR TOTAL NUMBERS ARE %f\n", total);
	    printf("\tYOUR PERCENTAGE IS %f",percentage );
	    printf("%%");
	
	
	if(percentage>=80) {
		printf("\t\nYOU GOT 'A+ IN YOUR EXAMS AND BEST OF LUCK FOR YOUR FUTURE");
		}
	else if(percentage>=70){
		printf("\t\nYOU GOT 'A' IN YOUR EXAMS AND BEST OF LUCK FOR YOUR FUTURE");
	}
	else if(percentage>=60){
		printf("\t\nYOU GOT 'B' IN YOUR EXAMS AND IMPROVE YOURSELF");
	}
	else if(percentage>=50){
		printf("\t\nYOU GOT 'C' IN YOUR EXAMS AND WORK HARD FOR NEXT EXAM");
	}
	else if(percentage<50){
		printf("\t\nYOU GOT 'F' IN YOUR EXAMS AND BRING YOUR PARENTS BY TOMORROW ");
	}
	
	getch();

}

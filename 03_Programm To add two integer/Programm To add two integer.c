#include<stdio.h>

int main(){

int firstnumber ,secondnumber,resultofsum;
//Declaring three Variables //

printf("Input Two Integer\n");
//Askig for user input

scanf("%d %d",&firstnumber, &secondnumber );
//by using scanf() function the user inputs are stored

resultofsum=firstnumber+secondnumber;
//summation of two integer entered by user is store on resultofsum variable

printf("%d + %d =%d", firstnumber,secondnumber,resultofsum);
//display the result

return 0;

}

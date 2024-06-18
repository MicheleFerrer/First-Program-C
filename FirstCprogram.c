#include <stdio.h>

/*int main()
{
    printf("hello world! \n");
    printf("I created a new second line under the statement hello world using backslash n");
    printf("hi \"hi world \\sup\n \t hey");
    return 0;
}*/

/*
int main( ){
  int myNumber = 50;
printf("my favorite number is %d" "\n", myNumber);
printf("and my favorite character is %c", 'D');
return 0;  
}*/

/*int main(){
    int x = 6;
    int y = 4;
    int sum = x + y;
    printf("%d", sum);
    return 0;
}

int main(){
    int length = 4;
int width = 6;
int area;
area = length * width;

printf("length is %d\n", length);
printf("width is :%d\n");
printf("area of the rectangle is : %d", area);
return 0;
}
*/

// using data types to calculate the cost of different grocery items
int main(){
// Create variables of different data types
int items = 50;
float cost_per_item = 9.99;
float total_cost = items * cost_per_item;
char currency = '$';
float sum = (float) 9 / 4;
int sum1 = 100 + 50;
int sum2 = sum1 + 20;
int sum3 = sum1 + sum2;
int sum4 = sum3;
int time = 30;
(time < 30) ? printf("time is less than 30\n") : printf("time is greater than or equal to 30\n");

// Print variables
printf("Number of items: %d\n", items);
printf("Cost per item: %.2f %c\n", cost_per_item, currency);
printf("Total cost = %.2f %c\n", total_cost, currency);
printf("%d\n", sum3);
printf("%.1f\n", sum);
printf("%d\n", sum1 > sum2);
if(sum1 == sum3){
    printf("sum1 is older");
} else if ( sum4 == sum3){
    printf("sum1 and sum2 are not equal\n");
}
else{
    printf("sum4 is older");
    }

if (time < 20){
    printf("good morning");
} else if (time == 30){
    printf("just the right time");
}
else{
    printf("you missed the alarm");
}

return 0;
}
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

// Print variables
printf("Number of items: %d\n", items);
printf("Cost per item: %.2f %c\n", cost_per_item, currency);
printf("Total cost = %.2f %c\n", total_cost, currency);
printf("%.1f\n", sum);
return 0;
}
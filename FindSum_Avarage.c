//Find sum and avarage of user input numbers with array and forloop .
#include <stdio.h>
int arr[50];// define an integr array can carry 50 elements
int counter=0,i,sum=0;//define counter,i,sum, are  int type global variables.
float avg;//avg is float type global variable
int main()
 { 
    printf("Enter number of Elements\n");//ask user to enter the number of elements.
    scanf("%d",&counter);//store the user input to counter variable.
    {
    
    }
    printf("Enter the values of  Elements\n");//ask user to enter the value elements.
    for(i=0;i<counter;i++)//loop for iterate scanf function count numbers. 
    {
    scanf("%d",& arr[i]);//store the values to array index 0 to last index
    }
    {
    printf("Number of elements are = %d\n",counter);//display the value of counter variable
    }
    for (int i=0;i<counter;i++)//add the value of index 0 to index n in the array and find the sum
    {
        {
        sum = sum + arr[i];//add the entire value of elements and save to sum variable.
        avg = (float)sum/counter;//type cast the result and store to variable avg
        }
    
    }    printf("Sum = %d\n",sum);//display the value of sum.
         printf("The avarage = %.3f \n",avg);//display the value avarage.
return 0;
    }

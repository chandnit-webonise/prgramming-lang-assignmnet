/*programming language:C
program:Find the smallest element from the array.
why:It is easy for me to use c language because of it's simplicity.
It is strongly typed language means if we do the multiplication of two different datatypes it will give an error.
for example if we multiplying 10 which is int value and "Hello world" which is string value it will simply gives an error.
It is simple to understand.
It is portable means program once return can be run on another machine with less or no modification.

*/


#include<stdio.h>
 int main() 
{
   int a[4], i, n, small;
	printf("Enter no of elements :");
   	scanf("%d", &n);
   	for(i = 0; i<n; i++)
     	 scanf("%d", &a[i]);
	   small = a[0];
 	for (i = 0; i < n; i++) 
	{
      		if (a[i] < small) 
        	small = a[i];
        }
   printf("Smallest Element : %d", small);
 
   return (0);
}

/*

Explanation:

#include<stdio.h> is a header file in c. In header file there is definition of predefined functions like printf and scanf.

int a[4],i,n,small
int:it will understand that it is int value and for int compiler will allocate 4 bytes of memory for each variable.
a[4]:a is the name of array and when [ comes it will understand that there will be array and here size of array is 4 compiler
allocates 16 bytes of memory for array a.
 4 bytes of memory for variable i, 
4 bytes of memory for variable n, 
4 bytes of memory for variable small
compiler in total allocate 4*4+4+4+4=28 bytes of memory for this line on stack.

printf("Enter the no. of elements");
printf is used to print the data.Complier will understand sentence within the "" will be printed.
 
scanf("%d",&n);
scanf is used for reading the input from keyboard.By entering %d compiler will understand that user will enter the integer
value.If I given here as a float value so it will give an error.compiler will read the value of n from keyboard that user
enters.

for(i=0;i<n;i++)
for is one of the loop in c.Compiler will understand there will be initialization,condition and increment/decrement of the 
variable.
first compiler will assign the value of i to 0.when ; comes compiler will understand that initialization part is completed.
 After that condition is evaluated.If the condition is true it will execute the body of loop.If the condition is false body
 of loop does not executed,flow of control jumps to next statement after the for loop.
after execution of body it will go for increment part.

scanf("%d",&a[i]);
compiler will read the value of array from keyboard which user enters.

small=a[0];
It will assign the value of 1st element of array to small variable.

for(i=0;i<n;i++)
{
	if (a[i] < small) 
        small = a[i];
}
first compiler will assign the value of i to 0.
After that condition is evaluated.If the condition is true it will execute the body of loop.
for example input is{30,29,27,28},n=4
firstly small=arr[0] i.e.,small=30
it will initialize the value of i to 0.
it will check 0<4
true it will execute the body of loop.
again here it will check the condition a[0]< small
i.e., 30<30 no
it will come out from if.
now it will increment the value of i to 1.
now it compare 1<4 true it will execute the body
again it will check a[1]<small 
i.e., 29<30
yes.it will assign the value of small to 29
it will come out from the if.
 now small=29.
after that value of i is incremented by 1 now i is 2
again it compare 2<4 true jumps into body of for loop
it will compare a[2]<small i.e.,27<29
yes 
value of small will again updated now it is 27.
small=27
again the value of i is incremented now it is 3
again it compare 3<4 true jumps into body
will compare a[3]<small i.e.,28<27
no comes out from if.
value of i is incremented now it is 4
will compare 4<4
false jumps out from for loop.

printf("Smallest element %d:",small);
it will read and display the value of small variable. 

return(0) is compulsory because I am writing main as int main().It will return from main.

*/


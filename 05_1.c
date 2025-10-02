#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;
    char op;
    int result;
    

    printf("Enter the calculation :");
    scanf("%i %c %i", &a, &op, &b);
    
    //printf("%i %c %i", $a, $op, &b);
    
    if (op == '+')
        result = a+b;
    else if (op == '-')
        result = a-b;
    else if (op == '*')
        result = a*b;
    else if (op == '/')
        result = a/b;
        
    
    printf("= %i\n",result);
 

  
  system("PAUSE");	
  return 0;
}

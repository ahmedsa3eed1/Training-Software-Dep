#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	int size=b-a+1; 
    for(int i=0;i<size;i++)
    {
      if(a>=1 && a<=9){
       switch(a) {
        case 1: printf("one\n"); break; 
        case 2: printf("two\n"); break;
        case 3: printf("three\n"); break;
        case 4: printf("four\n"); break;
        case 5: printf("five\n"); break;
        case 6: printf("six\n"); break;
        case 7: printf("seven\n"); break;
        case 8: printf("eight\n"); break;
        case 9: printf("nine\n"); break;
        default: break;
        }
       }
     
      else if(a>9){
        if(a%2==0){
          printf("even\n");
        }
        else{
          printf("odd\n");
        }
    }
    a++;
    if(a>b){
      break;
    }
    }

    return 0;
}


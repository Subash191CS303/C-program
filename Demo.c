#include<stdio.h>
#include "function.h"
// #define lMb 30
int main(){
    int a,b=5;
    // Default for loop is with out intilization as true e.g for(;;) a=5;
    for(a=1;a<=b;a++)
    {
        printf("%d %d ",a,b);
    }
    fun(a);
    return 0;
}
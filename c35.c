// FILE HANDLING
//  TYPES OF MODES

// 1. READ MODE

// #include<stdio.h>
// int main(){
// FILE *ptr = NULL;
// char string[100];
// ptr =fopen("sagar.txt","r");
// fscanf(ptr,"%s", string);
// puts(string);
// fclose(ptr);

//     return 0;
    
// }


// WRITE MODE
// #include<stdio.h>
// int main(){
// FILE *ptr = NULL;
// char string[100]="sagar vlog kannada\nutta aytha ";
// ptr =fopen("sagar.txt","w+");
// fprintf(ptr,"%s", string);
// fclose(ptr);

//     return 0;
// }  




// A MODE
#include<stdio.h>
int main(){
FILE *ptr = NULL;
char string[100]="\nsagar vlog kannada\n utta aytha\n ";    
ptr =fopen("sagar.txt","a");                                    /* it is used for to give repeat more times */
fprintf(ptr,"%s", string);
fclose(ptr);

    return 0;
}  
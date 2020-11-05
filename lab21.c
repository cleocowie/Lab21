/** lab21.c
* ===========================================================
* Name: Cleo Cowie, 28SEPT2020
* Section: T1/2
* Project: LAB21
* Purpose: FILE IO
* ===========================================================
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUM_LINES 2
#define MAX_LEN 100

int main (void) {

    FILE*football = NULL;
    char firstname[NUM_LINES][15];
    char lastname[NUM_LINES][15];
    int heightFeet[NUM_LINES];
    int heightInches[NUM_LINES];
    double weightKgs[NUM_LINES];
    double weightLbs[NUM_LINES];
    int itemsRead;

    FILE*fbConvert=NULL;

    printf("Opening file.\n");
    football = fopen("football.txt","r");

    if (football == NULL) {
        printf("Could not open file.\n");
        exit(1);
    }
    else {
        printf("Successful at opening file.\n");
    }

    itemsRead=fscanf(football,"%s %s %d %d %lf",firstname[0],lastname[0],&heightFeet[0],&heightInches[0],&weightKgs[0]);
    printf("The contents of line 1 of the file are:\n"
        "First Name - %s\n"
        "Last Name - %s\n"
        "Height in Feet: %d\n"
        "Height in Inches:%d\n"
        "Weight in kgs: %.3lf\n",firstname[0],lastname[0],heightFeet[0],heightInches[0],weightKgs[0]);
        printf("Total items read on the first line: %d\n\n",itemsRead);


    itemsRead=fscanf(football,"%s %s %d %d %lf",firstname[1],lastname[1],&heightFeet[1],&heightInches[1],&weightKgs[1]);
    printf("The contents of line 2 of the file are:\n"
        "First Name - %s\n"
        "Last Name - %s\n"
        "Height in Feet: %d\n"
        "Height in Inches:%d\n"
        "Weight in kgs: %.3lf\n",firstname[1],lastname[1],heightFeet[1],heightInches[1],weightKgs[1]);
        printf("Total items read on the first line: %d\n\n",itemsRead);


    fbConvert = fopen("fbConvert.txt","w");

        if (fbConvert == NULL) {
            printf("Could not open file.\n");
            exit(1);
        }

        else {
            printf("Successful at opening file.\n");
        }

    weightLbs[0] = weightKgs[0] * 2.20368;
    weightLbs[1] = weightKgs[1] * 2.20368;

    fprintf(fbConvert,"%s %s %d %d %.1lf",firstname[0],lastname[0],heightFeet[0],heightInches[0],weightLbs[0]);
    fprintf(fbConvert,"\n");
    fprintf(fbConvert,"%s %s %d %d %.1lf",firstname[1],lastname[1],heightFeet[1],heightInches[1],weightLbs[1]);
     
    
system("pause");
return 0;
}
        
    
        




   
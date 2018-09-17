//
//  main.c
//  Percolation Assignment
//
//  Created by Andrew Ashley on 1/9/18.
//  Copyright © 2018 aaproduction. All rights reserved.
//Percolation Sample

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    int i = 1, j = 1, sizei = 4, sizej = 4, p=7, array[4][4], firstcol[1][4], count=0, icount=1, jcount=1, forward=1;//i,j: I = rows J = cols;
    
    
    for(i = 1; i <= sizei; i++){ //randomly places 1s in array
        for(j=1; j <= sizej; j++){
            int randomnumber;
            randomnumber = rand() % 10;
            if (randomnumber<=p){
                array[i][j] = 1;}
            else {
                array[i][j] = 0;
        }
            
        }
}
    for(i = 1; i <= sizei; i++){ //prints array
        printf("\n");
        for(j=1; j <= sizej; j++){
            printf("%d", array[i][j]);
}
    }
    for (i = 1; i<=sizei; i++){ //finds the number of 1s in the first column
        if (array[i][1] == 1){
            firstcol[i][1] = 1;
        }
        else {
            firstcol[i][1] = 0;
        }
        
    }
    if (count < 1000){
        while (jcount <=50) {
        if (firstcol[icount][1] == 1 && forward != 1){
            if (array[icount][jcount+1] == 1){
                jcount= jcount + 1;
                count = count + 1;
                
            }
            else if(array[icount+1][jcount]==1){
                icount = icount + 1;
                count = count + 1;
            }
            else if(array[icount-1][jcount] == 1){
                icount = icount - 1;
                count = count + 1;
            }
            else{
                jcount= jcount - 1;
                forward = 1;
                count = count + 1;
            }
        
        }
        
    }
} }

//Tamoor H
//12/26/2021

#include <stdio.h>

char** getGrid() {
    
}

int main() {
    FILE *fp; //File Pointer
    fp = fopen("grid1.txt", "r");
    char buff[9];
    char* puzzle[9];

    for (int i = 0; i < 9; i++)
    {
        fscanf(fp, "%s", buff);
        puzzle[i] = buff;
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            puzzle[i][j] = j + '0'; //Convert to char code
        }
        
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%d : %s\n",i ,puzzle[i]);
        
    }
    
    

    
   return 0;
}

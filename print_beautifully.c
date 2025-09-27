#include <stdio.h>
#include <windows.h>
#include <string.h>


void print_beautifully(char* passage){
    for (int i = 0; i < strlen(passage); i++) {
        if (passage[i] == ' ' && passage[i+1]==' '){
            i+=1;
            Sleep(500);
        }else{
            Sleep(20);
        }
        printf("%c", passage[i]);
        fflush(stdout);

    }   
    printf("\n"); 
    return;
}

void main(void) {
    char* passage = "Hey,  Mark!  What have you been doing recently?  I've been studying for the entrance exam for a while.  If you have time,  please reply me!";
    print_beautifully(passage);
    return;
}

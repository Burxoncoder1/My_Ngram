@ -0,0 +1,24 @@
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
    char now = ' ';
    int count = 0;
    while(now){
        if(now == '"') now++;
        for(int i = 1; i < argc; i++){
            for(int j =0 ; argv[i][j] != '\0'; j++){
                if(now == argv[i][j]) count++;
            }
        }
        if(count != 0){
            printf("%c:%d\n", now, count);
            count =0;
        }   
        now++;
    }
    return 0;
}

#include <unistd.h>

void ft_ftputstr(char *str){

    while(*str != '\0'){

        write(1,str,1);
        str++;
    }
    return;
}
int main(){

    char str[] = "Hello World";

    ft_ftputstr(str);   
    return 0;
}
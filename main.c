#include <stdio.h>
#include <unistd.h>
#include "password.c" //

int main()
{
        char *password;
        int counter = 0;

        printf("\033[1;35m\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\033[1;32m\t\t   PASSWORD STRENGTH FINDER\n");
        printf("\033[1;35m\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");

        printf("\033[1;33m[+] \033[1;34mIt contains at least one Lowercase character.\n");
        printf("\033[1;33m[+] \033[1;34mIt contains at least one Uppercase character.\n");
        printf("\033[1;33m[+] \033[1;34mIt contains at least one Special character.\n");
        printf("\033[1;33m[+] \033[1;34mIt contains at least one Digit.\n");
        printf("\033[1;33m[+] \033[1;34mIt contains at least Minimum: 8.\n");
        printf("\033[1;33m[+] \033[1;34mIt contains at least Maximum: 12.\n\n");

        password = getpass("\033[1;33m[+] \033[1;31mEnter Your Password : ");
        printf("\033[1;33m[+] \033[1;31mYour Password : \033[1;32m%s\n",password);
        printf("\033[1;33m[+] \033[1;31mPassword strength : \033[1;32m%d%/100%\n",check_password(password));
        printf("\033[1;33m[+] \033[1;31mPassword lenght : \033[1;32m%d\n",strlen(password));
        
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Prototype
int check_password(char *password);
int password_upper(char *password);
int password_lower(char *password);
int password_sysmbol(char *password);
int password_digit(char *password);
int password_min_length(char *password);
int password_max_length(char *password);



// function checking password
int check_password(char *password){
        int score = 0;

        score = score + password_upper(password);
        score = score + password_lower(password);
        score = score + password_sysmbol(password);
        score = score + password_digit(password);
        score = score + password_min_length(password);
        score = score + password_max_length(password);

        return score;
}

// password miniume 8
int password_min_length(char *password){


        if(strlen(password) >= 8){
                return 20;
        }
        else{
                return 0;
        }
        
}

int password_upper(char *password){
        for(int i = 0;i<strlen(password);i++){
                if(isupper(password[i])){
                        return 10;
                }
                
        }
        return 0;
}

int password_lower(char *password){
        for(int i = 0;i<strlen(password);i++){
                if(islower(password[i])){
                        return 10;
                }
        }
        return 0;
}

int password_sysmbol(char *password){
        for(int i = 0;i<strlen(password);i++){
                if(ispunct(password[i])){
                        return 20;
                }
        }
        return 0;
}

int password_digit(char *password){
        for(int i = 0;i<password[i];i++){
                if(isdigit(password[i])){
                        return 20;
                }
        }
        return 0;
}

int password_max_length(char *password){
       if(strlen(password) >= 12){
                return 20;
        }
        else{
                return 0;
        }
}
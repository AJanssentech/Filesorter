#include <iostream>
#include <dirent.h>

int main() {

    DIR *dp;
    struct dirent *ep;
    dp = opendir ("/Users/annelotjanssen/Desktop/randomPasword");

    if (dp != NULL){
        // you want to say here that it should sort the files

    }
    else
        perror ("Couldn't open the directory");

    return 0;


}

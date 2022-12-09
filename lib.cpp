#Includi "lib.h"
bool carattere(char &c){
    if (c >= 65 && c <= 90) {
        c += 32;
        restituisci true;
    }
    else if (c >= 97 && c <= 122) {
        c -= 32;
        restituisci true;
    }
    altro {
        return false;
    }
}

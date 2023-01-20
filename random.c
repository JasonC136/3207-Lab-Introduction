#include <stdlib.h>

char randchar(){
    char randomletter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random() % 26];
    return  randomletter;
}
#include <iostream>
#include <string.h>
#include <sstream>
#include <stdlib.h>

/*
  *@author ContentGamer
*/

using namespace std;

int getHours(){
    char tm[] = __TIME__;
    char *hours = strtok(tm, " ");
    return stoi(hours);
}
int getMinutes(){
    char tm[] = __TIME__;
    char *minutes = strtok(tm, " ");
    minutes = strtok(NULL, " ");
    return stoi(minutes);
}
int getSeconds(){
    char tm[] = __TIME__;
    char *seconds = strtok(tm, " ");
    seconds = strtok(NULL, " ");
    seconds = strtok(NULL, " ");
    return stoi(seconds);
}

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

/**
 * @author ContentGamer
*/

int fetchMonth(string option){
    int res = 0;
    if(option == "Jan"){
        res = 1;
    }else if(option == "Feb"){
        res = 2;
    }else if(option == "Mar"){
        res = 3;
    }else if(option == "Apr"){
        res = 4;
    }else if(option == "May"){
        res = 5;
    }else if(option == "Jun"){
        res = 6;
    }else if(option == "Jul"){
        res = 7;
    }else if(option == "Aug"){
        res = 8;
    }else if(option == "Sep"){
        res = 9;
    }else if(option == "Oct"){
        res = 10;
    }else if(option == "Nov"){
        res = 11;
    }else if(option == "Dec"){
        res = 12;
    }
    return res;
}

string completeMonth(string option){
    string res = "";
    if(option == "Jan"){
        res = "January";
    }else if(option == "Feb"){
        res = "Feburary";
    }else if(option == "Mar"){
        res = "March";
    }else if(option == "Apr"){
        res = "April";
    }else if(option == "May"){
        res = "May";
    }else if(option == "Jun"){
        res = "June";
    }else if(option == "Jul"){
        res = "July";
    }else if(option == "Aug"){
        res = "August";
    }else if(option == "Sep"){
        res = "September";
    }else if(option == "Oct"){
        res = "October";
    }else if(option == "Nov"){
        res = "November";
    }else if(option == "Dec"){
        res = "December";
    }
    return res;
}

template<typename T>
string itos(T i){
    stringstream s;
    s << i;
    return s.str();
}

int getYears(){
    char dt[] = __DATE__;
    char *year = strtok(dt, " ");
    year = strtok(NULL, " ");
    year = strtok(NULL, " ");
    return stoi(year);
}
int getMonths(){
    char dt[] = __DATE__;
    char *month = strtok(dt, " ");
    return fetchMonth(itos(month));
}
int getDays(){
 char dt[] = __DATE__;
 char *day = strtok(dt, " ");
 day = strtok(NULL, " ");
 return stoi(day);
}
char *getMonthsAsString(){
    char dt[] = __DATE__;
    char *month = strtok(dt, " ");
    return month;
}
string getMonthAsCompletedString(){
    char dt[] = __DATE__;
    char *month = strtok(dt, " ");
    return completeMonth(itos(month));
}
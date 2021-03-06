//
// Created by amichai on 25/03/18.
//

#ifndef EX1_MAINFUNCTIONS_H
#define EX1_MAINFUNCTIONS_H
#include <iostream>
using namespace std;

enum string_code{
    touch,
    pwd,
    write,
    read,
    cat,
    mkdir,
    rmdir,
    chdir,
    ls,
    copyFile,
    ln,
    lproot,
    other,
    rm,
    mv,
    wordCount,
    help
};
string_code stringHash(const string &str);
void printCommands();
#endif //EX1_MAINFUNCTIONS_H

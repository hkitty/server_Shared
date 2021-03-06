#ifndef COMMANDCONTROLLER_H
#define COMMANDCONTROLLER_H
#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <messagecontroller.h>
#include <settings.h>

class AdminInterface
{
public:
    AdminInterface();
    ~AdminInterface();

public:
    void authentication();
    void checkCommand();


private:
    std::string command;
    std::string IP;
    int id;
    int _port;

private:
    MessageController *msgCntr = new MessageController;
    Settings *settings = new Settings;
};

#endif // COMMANDCONTROLLER_H

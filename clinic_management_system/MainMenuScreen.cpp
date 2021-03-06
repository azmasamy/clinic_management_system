#include "MainMenuScreen.h"
#include "UiHelper.h"
#include "PatientsMainScreen.h"
#include "DoctorsMainScreen.h"
#include "PharmacyMainScreen.h"
#include <iostream>
#include <string>
using namespace std;

MainMenuScreen::MainMenuScreen()
{
    int choice = -1;
    string feedback = "";
    while(choice != 0)
    {
        system("cls");
        UiHelper::printTitle("MAIN MENU");
        UiHelper::printHorizontalLine();
        UiHelper::printChoice("1.Doctors Database");
        UiHelper::printChoice("2.Patients Database");
        UiHelper::printChoice("3.Pharmacy Database");
        UiHelper::printChoice("0.Back");
        UiHelper::printHorizontalLine();
        UiHelper::printFeedback(feedback);
        feedback = "";
        cout<<"\nEnter the number corresponding to your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            DoctorsMainScreen();
            break;
        }
        case 2:
        {
            PatientsMainScreen();
            break;
        }
        case 3:
        {
            PharmacyMainScreen();
            break;
        }
        case 0:
        {
            break;
        }
        default:
            feedback = "Please, Enter a valid option.";
        }
    }
}
MainMenuScreen::~MainMenuScreen()
{

}


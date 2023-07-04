#include <iostream>
using namespace std;

int main() {
    int quant;
    int choice;
    int Qrooms = 0, Qnoodles = 0, Qpasta = 0, Qburger = 0, Qdrinks = 0;
    int Srooms = 0, Snoodles = 0, Spasta = 0, Sburger = 0, Sdrinks = 0;
    int Prooms = 0, Pnoodles = 0, Ppasta = 0, Pburger = 0, Pdrinks = 0;
    int totalRevenue = 0; // Declare totalRevenue outside the switch statement

    cout << "\t QUANTITIES OF ROOMS/FOOD ITEMS WE HAVE " << endl;
    cout << "Quantity of Rooms --> ";
    cin >> Qrooms;
    cout << "Quantity of Noodles --> ";
    cin >> Qnoodles;
    cout << "Quantity of Pasta --> ";
    cin >> Qpasta;
    cout << "Quantity of Burgers --> ";
    cin >> Qburger;
    cout << "Quantity of Cold Drinks --> ";
    cin >> Qdrinks;

    cout << "\t PLEASE SELECT THE GIVEN OPTIONS WE HAVE :) " << endl;
    cout << "1) Rooms in RS 1000" << endl;
    cout << "2) Noodles in RS 100" << endl;
    cout << "3) Pasta in RS 50" << endl;
    cout << "4) Burgers in RS 30" << endl;
    cout << "5) Cold Drinks in RS 40" << endl;
    cout << "6) Info regarding sales and collections" << endl;
    cout << "7) Exit" << endl;

    while (true) {
        cout << "\n\t Please Enter Your Choice --> ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n\t Enter the number of rooms you want -- ";
                cin >> quant;
                if (Qrooms - Srooms >= quant) {
                    Srooms += quant;
                    Prooms += quant * 1000;
                    cout << quant << " rooms allotted to you :)" << endl;
                }
                else {
                    cout << Qrooms - Srooms << " rooms available only :|" << endl;
                }
                break;

            case 2:
                cout << "\n\t Enter the number of Noodles you want -- ";
                cin >> quant;
                if (Qnoodles - Snoodles >= quant) {
                    Snoodles += quant;
                    Pnoodles += quant * 100;
                    cout << quant << " noodles allotted to you :)" << endl;
                }
                else {
                    cout << Qnoodles - Snoodles << " noodles available only :|" << endl;
                }
                break;

            case 3:
                cout << "\n\t Enter the number of Pasta you want -- ";
                cin >> quant;
                if (Qpasta - Spasta >= quant) {
                    Spasta += quant;
                    Ppasta += quant * 50;
                    cout << quant << " Pasta allotted to you :)" << endl;
                }
                else {
                    cout << Qpasta - Spasta << " pasta available only :|" << endl;
                }
                break;

            case 4:
                cout << "\n\t Enter the number of Burgers you want -- ";
                cin >> quant;
                if (Qburger - Sburger >= quant) {
                    Sburger += quant;
                    Pburger += quant * 30;
                    cout << quant << " Burger allotted to you :)" << endl;
                }
                else {
                    cout << Qburger - Sburger << " burgers available only :|" << endl;
                }
                break;

            case 5:
                cout << "\n\t Enter the number of Cold Drinks you want -- ";
                cin >> quant;
                if (Qdrinks - Sdrinks >= quant) {
                    Sdrinks += quant;
                    Pdrinks += quant * 40;
                    cout << quant << " Cold Drinks allotted to you :)" << endl;
                }
                else {
                    cout << Qdrinks - Sdrinks << " cold drinks available only :|" << endl;
                }
                break;

            case 6:
                cout << "\n\t Details of Sales and Collections " << endl;
                cout << "\n Total No. of Rooms we have -- " << Qrooms;
                cout << "\n No. of Rooms are in Rent -- " << Srooms;
                cout << "\n No. of Rooms available Now -- " << Qrooms - Srooms;
                cout << "\n Amount of Money We make By Renting Rooms -- " << Prooms << endl;

                cout << "\n Total No. of Noodles we have -- " << Qnoodles;
                cout << "\n No. of Noodles Sold -- " << Snoodles;
                cout << "\n No. of Noodles available Now -- " << Qnoodles - Snoodles;
                cout << "\n Amount of Money We make By Selling Noodles -- " << Pnoodles << endl;

                cout << "\n Total No. of Pasta we have -- " << Qpasta;
                cout << "\n No. of Pasta Sold -- " << Spasta;
                cout << "\n No. of Pasta available Now -- " << Qpasta - Spasta;
                cout << "\n Amount of Money We make By Selling Pasta -- " << Ppasta << endl;

                cout << "\n Total No. of Burgers we have -- " << Qburger;
                cout << "\n No. of Burgers Sold -- " << Sburger;
                cout << "\n No. of Burgers available Now -- " << Qburger - Sburger;
                cout << "\n Amount of Money We make By Selling Burgers -- " << Pburger << endl;

                cout << "\n Total No. of Cold Drinks we have -- " << Qdrinks;
                cout << "\n No. of Cold Drinks Sold -- " << Sdrinks;
                cout << "\n No. of Cold Drinks available Now -- " << Qdrinks - Sdrinks;
                cout << "\n Amount of Money We make By Selling Cold Drinks -- " << Pdrinks << endl;
                cout << endl;
                totalRevenue = 0;
                totalRevenue = Prooms + Pnoodles + Ppasta + Pburger + Pdrinks;
                cout << "\t TOTAL BILL IS  --> " << totalRevenue << endl;
                break;

            case 7:
                cout << "\n\t BILL STATEMENT" << endl;
                cout << "Total Revenue from Rooms: " << Prooms << endl;
                cout << "Total Revenue from Noodles: " << Pnoodles << endl;
                cout << "Total Revenue from Pasta: " << Ppasta << endl;
                cout << "Total Revenue from Burgers: " << Pburger << endl;
                cout << "Total Revenue from Cold Drinks: " << Pdrinks << endl;
                totalRevenue = 0;
                totalRevenue = Prooms + Pnoodles + Ppasta + Pburger + Pdrinks;
                cout << "\n\t TOTAL REVENUE WE GOT IS  --> " << totalRevenue << endl;
                return 0;

            default:
                cout << "\n\t Invalid choice! Please try again." << endl;
                break;
        }
    }

    return 0;
}
#include <iostream>
#include <queue>
#include <limits>
#include "Patient.cpp"

using namespace std;

class PatientManager {
    private:
    //Make a priority queue object
    priority_queue<Patient> list;
    int order = 1;

    public:

    PatientManager() {
        this->list = list;
    }
    void start() {
        cout << "-------------------------" << endl;
        cout << "       (1) New Patient\n";
        cout << "       (2) Next Patient\n";
        cout << "       (3) Waiting List\n";
        cout << "       (4) Exit\n";
        cout << "-------------------------" << endl;

        while (true) {
            int item = 0;
            try {
                cout << "Choose an item from the menu: ";
                cin >> item;
                //Not sure if this is needed
                // if (item < 1 || item > 4);
                //     throw -1;
                if (cin.fail()) {
                    throw exception();
                }

            } catch (exception e) {
                cout << "(x) Wrong choice." <<endl;
                item = 0;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
            }

            if(item == 1) {
                this->newPatient();
            } else if(item == 2) {
                this->nextPatient();
            } else if(item == 3) {
                this->waitingList();
            } else if(item == 4) {
                cout << "Program terminated. Goodbye!\n";
                exit(0);
            } else if (item < 0|| item >4){
                cout << "(x) Wrong choice." <<endl;
                item = 0;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
            }
        }
    }

    void newPatient() {

    }

    void nextPatient() {

    }

    void waitingList() {

    }
};
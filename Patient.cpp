//Patients need to be comparable based off of
//emergency # (1-5, 5 being very urgent)
#include <iostream>
using namespace std;

class Patient {
    private:
    string name;
    int emergency;
    int order;

    public:

    void setName(string Name) {
        name = Name;
    }
    void setEmergency(int emerg) {
        emergency = emerg;
    }

    void setOrder(int Order) {
        order = Order;
    }

    string getName() {
        return name;
    }

    int getEmergency() {
        return emergency;
    }

    int getOrder() {
        return order;
    }
};
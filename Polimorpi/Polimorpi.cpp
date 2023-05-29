#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;
    virtual void pesan() {
        cout << "Pesan dari seseorang" << endl;
    }
};

class jakwan :public seseorang {
public:
    void pesan() {
        cout << "Pesan dari jakwan" << endl;
    }
};

class sarah :public seseorang {
public:
    void pesan() {
        cout << "Pesan dari Sarah" << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}


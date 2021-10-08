#include<iostream>

class variable{
private:
    char* arr = new char[NULL];

    std::string password;

    std::string name;

    int log;

    public:
    friend  void backup();
};
void backup() {
    std::cout << "Enter Your Name >>> ";
    variable v;
    std::cin >> v.name;
    std::cout << "Hello, " << v.name << " !" << std::endl;

REPEAT:
    std::cout << "Type 1 to LogIn or 2 to SignUP" << std::endl << ">>> ";
    std::cin >> v.log;

    if (v.log == 1) {
        std::cout << "Enter Your Password >>> ";
        std::cin >> v.password;
        if (v.password == v.arr) {
            system("cls");
            std::cout << "Welcome to HomePage!" << std::endl;
            std::cout << "Congratulations for reaching out Mr." << v.name << std::endl;
            std::cout << "Your current password is : " << v.password;
        }
        else {
            system("cls");
            std::cout << "Your password is wrong! (or) haven't set it yet." << std::endl;
            std::cout << "Check it back and try again." << std::endl;
            goto REPEAT;
        }
    }

    else if (v.log == 2) {
        std::cout << "Type a Password with no space >>> ";
        std::cin >> v.arr;
        std::cout << "SAVED!" << std::endl;
        goto REPEAT;
    }

    else {
        std::string relog;
        std::cout << "You didn't choose to LogIn or SingUp!!!" << std::endl;
        std::cout << "Type 'try' to try again >>> ";
        std::cin >> relog;
        if (relog == "try") {
            system("cls");
            goto REPEAT;
        }
    }


    int i = 0;

    while (i != EOF) {
        std::cin.get();
    }
}

int main() {
    backup();
}


 



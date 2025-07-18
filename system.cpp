#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User {
private:
    string username, password;

public:
    User(string name, string pass) {
        username = name;
        password = pass;
    }

    string getUsername() {
        return username;
    }

    string getPassword() {
        return password;
    }
};

class UserManager {
private:
    vector<User> users;

public:
    void RegisterUser() {
        string username, password;
        cout << "\t\tEnter User Name: ";
        cin >> username;
        cout << "\t\tEnter Password: ";
        cin >> password;

        User newUser(username, password);
        users.push_back(newUser);

        cout << "\t\tUser Registered Successfully...\n";
    }

    bool LoginUser(string name, string pass) {
        for (int i = 0; i < users.size(); i++) {
            if (users[i].getUsername() == name && users[i].getPassword() == pass) {
                cout << "\t\tLogin Successful...\n";
                return true;
            }
        }
        cout << "\t\tInvalid Username or Password...\n";
        return false;
    }

    void showUser() {
        cout << "\t\t--- Users List ---\n";
        for (int i = 0; i < users.size(); i++) {
            cout << "\t\t" << users[i].getUsername() << endl;
        }
    }

    void searchUser(string username) {
        bool found = false;
        for (int i = 0; i < users.size(); i++) {
            if (users[i].getUsername() == username) {
                cout << "\t\tUser Found: " << username << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "\t\tUser Not Found...\n";
        }
    }

    void deleteUser(string username) {
        bool deleted = false;
        for (int i = 0; i < users.size(); i++) {
            if (users[i].getUsername() == username) {
                users.erase(users.begin() + i);
                cout << "\t\tUser Removed Successfully...\n";
                deleted = true;
                break;
            }
        }
        if (!deleted) {
            cout << "\t\tUser Not Found...\n";
        }
    }
};

int main() {
    UserManager usermanage;
    int op;
    char choice;

    do {
        system("cls"); // works only on Windows
        cout << "\n\n\t\t1. Register User\n";
        cout << "\t\t2. Login\n";
        cout << "\t\t3. Show User List\n";
        cout << "\t\t4. Search User\n";
        cout << "\t\t5. Delete User\n";
        cout << "\t\t6. Exit\n";
        cout << "\t\tEnter Your Choice: ";
        cin >> op;

        switch (op) {
        case 1:
            usermanage.RegisterUser();
            break;
        case 2: {
            string username, password;
            cout << "\t\tEnter Username: ";
            cin >> username;
            cout << "\t\tEnter Password: ";
            cin >> password;
            usermanage.LoginUser(username, password);
            break;
        }
        case 3:
            usermanage.showUser();
            break;
        case 4: {
            string username;
            cout << "\t\tEnter Username: ";
            cin >> username;
            usermanage.searchUser(username);
            break;
        }
        case 5: {
            string username;
            cout << "\t\tEnter Username: ";
            cin >> username;
            usermanage.deleteUser(username);
            break;
        }
        case 6:
            cout << "\t\tExiting program...\n";
            return 0;
        default:
            cout << "\t\tInvalid choice. Please try again.\n";
        }

        cout << "\t\tDo You Want to Continue [Y/N]? : ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

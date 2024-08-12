#include <iostream>
#include <fstream>
#include <string>

class User {
public:
    std::string username;
    std::string password;

    void setCredentials(const std::string& uname, const std::string& pwd) {
        username = uname;
        password = pwd;
    }
};

int main() {
    User newUser;
    std::string username, password;

    // Get user input for registration
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    // Check if username is unique (not implemented here)

    // Create a new user object and set credentials
    newUser.setCredentials(username, password);

    // Store user information in a file
    std::ofstream userFile("users.txt", std::ios_base::app);
    if (userFile.is_open()) {
        userFile << newUser.username << " " << newUser.password << std::endl;
        userFile.close();
        std::cout << "Registration successful. User data saved." << std::endl;
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }

    return 0;
}
```

# Registration-and-Login-System

## 🔐 Login and Registration System – C++
This is a simple console-based Login and Registration System built using C++. The program allows users to register, log in, view a list of registered users, search for users, and delete user accounts—all within a single session using Object-Oriented Programming (OOP) principles.

📌 Features
✅ User Registration with username and password

✅ User Login authentication

✅ Display all registered users

✅ Search for a specific user by username

✅ Delete a user from the system

✅ Clean and interactive CLI (Command-Line Interface)

✅ Built using classes and vectors in C++

🛠 Technologies Used
-C++ (OOP Concepts)
-Vectors (std::vector)
-Standard Input/Output
-Console-based UI

📂 How It Works
1.The system maintains an in-memory list of users using a vector of User objects.
2.On registering, the username and password are stored.
3.Login checks the credentials against the stored users.
4.Admin-like functions like viewing, searching, and deleting users are also included.

🚀 Getting Started
Run the Code
1.Clone this repository or copy the .cpp file into your C++ IDE/editor.

2.Compile and run using any C++ compiler:
g++ main.cpp -o loginApp
./loginApp

3.Follow the on-screen menu to interact with the system.

📸 Sample Output
1. Register User
2. Login
3. Show User List
4. Search User
5. Delete User
6. Exit
Enter Your Choice:

📌 Note
This version does not store data permanently (no file/database used). Once the program ends, all data is lost. You can extend this by adding:

-File handling (e.g., fstream)
-Password masking
-Persistent storage (e.g., .txt or .csv)

#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

// Function to read data from the input file and populate the map
void readDataFromFile(map<string, int>& itemFrequency) {
    ifstream inputFile("CS210_Project_Three_Input_File.txt");
    string item;

    while (inputFile >> item) {
        itemFrequency[item]++;
    }

    inputFile.close();
}

// Function to save data to frequency.dat
void saveDataToFile(const map<string, int>& itemFrequency) {
    ofstream outputFile("frequency.dat");

    for (const auto& entry : itemFrequency) {
        outputFile << entry.first << " " << entry.second << endl;
    }

    outputFile.close();
}

// Function to display a menu and handle user input
void displayMenu(map<string, int>& itemFrequency) {
    int choice;

    do {
        cout << "1. frequency of an item" << endl;
        cout << "2. frequency of all items" << endl;
        cout << "3. histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string item;
            cout << "Enter item: ";
            cin >> item;
            cout << item << itemFrequency[item] << " " << endl;
        }
        else if (choice == 2) {
            for (const auto& entry : itemFrequency) {
                cout << entry.first << " " << entry.second << endl;
            }
        }
        else if (choice == 3) {
            for (const auto& entry : itemFrequency) {
                cout << entry.first << " ";
                for (int i = 0; i < entry.second; i++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (choice == 4) {
            cout << "Exiting program." << endl;
        }
        else {
            cout << "Invalid, please try again." << endl;
        }
    } while (choice != 4);
}

int main() {
    map<string, int> itemFrequency;

    // Read the input file and populate the map
    readDataFromFile(itemFrequency);

    // Display the menu
    displayMenu(itemFrequency);

    // Save data to file before exiting
    saveDataToFile(itemFrequency);

    return 0;
}

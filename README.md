Author: Umar Asif
Date: [Oct 20, 2024]
Overview
The application provides a menu for users to interact with which uses items provided in the input file (CS210_Project_Three_Input_File.txt). The program lets the users use different options to search for item frequencies of specific item or display the frequencies of all items and gives an option to display a histogram of item frequencies. The program also saves frequency data to a backup file (frequency.dat).
Design
The structure of the program uses a map data structure in C++ to store and show the frequency of each item. The design consists of three main functions:
1. File Processing: Reads input file and provides item frequencies.
2. Menu System: Allows users to use the program through multiple options, such as looking up item frequency, showing all frequencies in the file, and providing a histogram.
3. Data Backup: Writes a backup file (frequency.dat).
Functionality
The program functionalities:
• Menu Option 1 Prompt a user to input the item, or word, they wish to look for 
• Menu Option 2: Displays a list of all items and frequencies.
• Menu Option 3: Displays a histogram, asterisk represents an item’s frequency.
• Menu Option 4: Exits the program and saves the item frequency data to frequency.dat.

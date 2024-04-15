# Card-Deck-Simulator
 Simulates a card deck with functionalities to shuffle and deal cards from the deck. It features a menu-driven interface that allows the user to repeatedly draw cards from the deck until they choose to stop.

Features
Create and Shuffle Deck: Initializes a standard deck of 52 cards and shuffles them.
Deal Cards: Allows the user to draw cards from the deck one at a time.
Interactive Menu: Provides an interface to draw a card and decide whether to continue or stop.

Requirements
C++11 compatible compiler
C++ Standard Library (algorithm for shuffling and iostream for input/output)
Usage
The program does not require any command line arguments and can be executed directly after compilation.

Compilation Command
g++ -o card_deck_simulator deck_simulator.cpp -std=c++11

Running the Program
After compilation, run the program using:
./card_deck_simulator

Output
The program outputs the cards as they are drawn and asks the user if they wish to continue drawing cards. The sequence ends when the user chooses not to continue.

Explanation of Components
Class Deck: Handles the functionalities of creating, shuffling, and dealing cards.
createDeck(): Initializes the deck with 52 standard playing cards.
shuffle(): Shuffles the deck using a random seed based on the current time.
dealCard(): Outputs all cards in the deck (intended to list the current order of the deck, but is used improperly in the code).
drawCard(): Draws the top card from the deck and increments the deck's card index.
menu(): Provides a simple text-based menu for the user to draw cards and choose to continue or stop.

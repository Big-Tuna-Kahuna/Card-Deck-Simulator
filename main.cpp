#include <iostream>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

//****Start Class Deck****
class Deck {
public:
    Deck();
    string dealCard();
    void menu();
    void shuffle();

private:
    string cards[52];
    int cardNum = 0;
    void createDeck();
    string drawCard();
};

Deck::Deck() {
    createDeck();
}

string Deck::drawCard() {
    string newCard;

    if (cardNum < 52) {
        newCard = cards[cardNum];
        cardNum++;
    }
    else {
        newCard = "card deck empty - Reshuffling...";
        shuffle();
        cardNum = 0;
    }
    return newCard;
}

void Deck::createDeck() {
    string suit[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
    string face[] = {"2 ","3 ","4 ","5 ","6 ","7 ","8 ","9 ","10 ","J ","Q ","K ","A "};
    int num = 0;

    for (auto & i : face) {
        for (auto & j : suit) {
            cards[num] = (i + j);
            num++;
        }
    }
}

string Deck::dealCard() {
    for (auto & card : cards) {
        cout << card << "\n";
    }
}

void Deck::menu() {
    bool cont = true;
    int num;
    string currentCard;
    string choice;

    do {
        currentCard = drawCard();
        cout << currentCard << endl;
        cout << "Again? y or n?" << endl;
        cin >> choice;

        if (choice == "n") {
            cont = false;
        }
    }while(cont);
}

void Deck::shuffle() {
    srand(time(NULL));
    unsigned seed = rand() % 1000;
    int n = sizeof(cards) / sizeof(cards[seed]);
    std::shuffle(cards, cards + n, default_random_engine(seed));
    cardNum = 0;
}
//****End Class Deck****



int main() {
    Deck deck1;
    deck1.shuffle();
    deck1.menu();





    return 0;
}



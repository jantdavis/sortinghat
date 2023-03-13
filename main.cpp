//Jordan Davis
//April 14, 2022
//Harry Potter Sorting Hat Quiz

#include <iostream>

using namespace std;

int main()
{
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;
    int answer1 = 0;
    int answer2 = 0;
    int answer3 = 0;
    int answer4 = 0;
    int max = 0;
    string house;
    
    cout << "--------------------------------" << endl;
    cout << "--------------------------------" << endl;
    cout << "Welcome To The Sorting Hat Quiz!" << endl;
    cout << "--------------------------------" << endl;
    cout << "--------------------------------" << endl;


    cout << "Q1) When I'm dead, I want people to remember me as: " << endl;
    cout << endl;
    cout << "1) The Good " << endl;
    cout << "2) The Great " << endl;
    cout << "3) The Wise " << endl;
    cout << "4) The Bold " << endl;
    cout << "------------------------" << endl;
    cin >> answer1;
    
    system ("clear");
    
    if (answer1 == 1)
    {
        (hufflepuff = hufflepuff + 1);
    }
    else if (answer1 == 2)
    {
        (slytherin = slytherin + 1);
    }
    else if (answer1 == 3)
    {
        (ravenclaw = ravenclaw + 1);
    }
    else if (answer1 == 4)
    {
        (gryffindor = gryffindor + 1);
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    
    cout << "Q2) Dawn or Dusk? " << endl;
    cout << endl;
    cout << "1) Dawn " << endl;
    cout << "2) Dusk " << endl;
    cout << "------------------------" << endl;
    cin >> answer2;
    
    system ("clear");
    
    if (answer2==1)
    {
        (gryffindor = gryffindor + 1);
        (ravenclaw = ravenclaw + 1);
    }
    else if (answer2 == 2)
    {
        (hufflepuff = hufflepuff + 1);
        (slytherin = slytherin + 1);
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    
    cout << "Q3) Which kind of instrument most pleases your ear? " << endl;
    cout << endl;
    cout << "1) The Violin " << endl;
    cout << "2) The Trumpt " << endl;
    cout << "3) The Piano " << endl;
    cout << "4) The Drum " << endl;
    cout << "------------------------" << endl;
    cin >> answer3;
    
    system ("clear");
    
    if (answer3 ==1)
    {
        (slytherin = slytherin + 1);
    }
    else if (answer3 == 2)
    {
        (hufflepuff = hufflepuff + 1);
    }
    else if (answer3 == 3)
    {
        (ravenclaw = ravenclaw + 1);
    }
    else if (answer3 == 4)
    {
        (gryffindor = gryffindor + 1);
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    cout << "Q4) Which road tempts you most?" << endl;
    cout << endl;
    cout << "1) The wide, sunny grass lane" << endl;
    cout << "2) The narrow, dark, lantern-lit alley" << endl;
    cout << "3) The twisting, leaf-strewn path through woods" << endl;
    cout << "4) The cobbled street lined (ancient buildings)" << endl;
    cout << "----------------------------------------------------" << endl;
    cin >> answer4;
    
    system ("clear");
    
    if (answer4 == 1)
    {
        (hufflepuff = hufflepuff + 1);
    }
    else if (answer4 == 2)
    {
        (slytherin = slytherin + 1);
    }
    else if (answer4 == 3)
    {
        gryffindor = gryffindor + 1;
    }
    else if (answer4 == 4)
    {
        (ravenclaw = ravenclaw + 1);
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    
    
    if (gryffindor > hufflepuff && gryffindor > ravenclaw && gryffindor > slytherin)
    {
       cout << "Welcome to Gryffindor. " << endl;
    }
    else if (hufflepuff > gryffindor  && hufflepuff > ravenclaw && hufflepuff > slytherin)
    {
        cout << "Welcome to Hufflepuff. " << endl;
    }
    else if (ravenclaw > gryffindor && ravenclaw > hufflepuff && ravenclaw > slytherin)
    {
        cout << "Welcome to Ravenclaw. " << endl;
    }
    else if (slytherin > gryffindor && slytherin > hufflepuff  && slytherin > ravenclaw)
    {
        cout << "Welcome to Slytherin. " << endl;
    }
    else
    {
        cout << "Your offer to the Hogwarts School of Witchcraft and Wizardy has been revoked. " << endl;
    }

    
    return 0;
}

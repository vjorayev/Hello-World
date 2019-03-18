#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    int char_count = 0;
    int word_count = 0;
    int word_length = 0;
    int max_length = 0;

    char c;

    while ( cin.get(c) )
    {

        switch(c)
        {

        case ' ':
        case '-':
        case ';':
        case ',':
        case '.':
        case '!':
        case '?':
        case '\n':

            if(word_length != 0)
            {
                word_count++;
                if(word_length > max_length) max_length = word_length;
                word_length = 0;
            }

            break;
        default:
           char_count++;
           word_length++;
        }

    }

    cout << "Number of Words: " << word_count << endl;
    cout << "Average Word Length: " << char_count/word_count << endl;
    cout << "Maximum Word Length: " << max_length << endl;



}

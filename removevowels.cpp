#include <iostream>
#include <string>
using namespace std;

string removeVowels(string);

int main()
{
  string word;
  
  cout << "Enter a word: ";
  cin >> word;
  
  for (int i = 0; i < word.length(); i++)
  {
    while (!isalpha(word[i]))
    {
      cout << "\nError: Only letters are allowed.\n";
      cout << "Enter a word: ";
      cin >> word;
    }
  }
  
  cout << "Word with vowels removed: " << removeVowels(word) << "\n";
  
  system("pause");
  return 0;
}

string removeVowels(string word)
{
  string wordHalf1, wordHalf2;
  
  for (int i = 0; i < word.length(); i++)
  {
    wordHalf1 = word.substr(0, i);
    wordHalf2 = word.substr(i + 1, word.length());
    word = wordHalf1 + wordHalf2;
    i--;
  }
  
  return word;
}

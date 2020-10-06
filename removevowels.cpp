#include <iostream>
#include <string>
using namespace std;

bool isVowel(char)
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

bool isVowel(char letter)
{
  if (isupper(letter))
      letter = tolower(letter);
  
  if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
      return true;
  else
      return false;
}

string removeVowels(string word)
{
  string wordHalf1, wordHalf2;
  
  for (int i = 0; i < word.length(); i++)
  {
    if (isVowel(word[i]))
    {
       wordHalf1 = word.substr(0, i);
       wordHalf2 = word.substr(i + 1, word.length());
       word = wordHalf1 + wordHalf2;
       i--;
    }
  }
  
  return word;
}

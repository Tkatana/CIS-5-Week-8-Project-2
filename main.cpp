#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 62; // change this number

// Project 2 — Tyler Quintana
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 98; // change this number

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 92; // change this number

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 76; // change this number
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;
  // Project 2 — Tyler Quintana
  
  int A = 0, B = 0, C = 0, D = 0, F = 0;
  std::cout << "Student Grades by Index: \n";
  
  for (int i = 0; i < N; ++i)
  {
  std::cout << "[" << i << "] " << scores[i] << "\n";
  if (scores[i] < 60 )
  {
  ++ F;  
  }
  if (scores[i] >= 60 && scores[i] <= 69)
  {
  ++ D;
  }
  if (scores[i] >= 70 && scores[i] <= 79)
  {
  ++ C;  
  }
  if (scores[i] >= 80 && scores[i] <= 89)
  {
  ++ B;  
  }
  if (scores[i] >= 90)
  {
  ++ A;  
  }
  
  }
  std::cout << "\n";
  std::cout << "Letter Grade Counts: \n" << "A: " << A << "\n" << "B: " << B << "\n";
  std::cout << "C: " << C << "\n" << "D: " << D << "\n" << "Failing: " << F << "\n";
  std::cout << "\n";

  int i = 0; // declaring new index variable for while loop
  while (i < N)
  {
  if (scores[i] < 60)
  {
  std::cout << "Student at index [" << i << "] needs to come in for office hours! \n";  
  }  
  ++i; // updater so that loop ends
  }
  
  // Project 2 — Tyler Quintana
  return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char wbn[10], site[100], fname[100], lol[100];
  cout << "Enter a website name ("
          "eg. https://www.flipkart.com or just copy and paste a website url "
          "here from your browser."
          ") to display its source code: ";
  cin >> site;
  cout << "Enter file name to store the source code: ";
  cin >> fname;
  strcpy(wbn, "curl ");
  strcat(wbn, site);
  strcpy(lol, wbn);
  strcat(lol, " >");
  strcat(lol, fname);
  strcat(lol, ".html");
  system(lol);
  return 0;
}
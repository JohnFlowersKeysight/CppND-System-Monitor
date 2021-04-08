#include <locale.h>

#include "ncurses_display.h"
#include "system.h"

int main() {
  System system;
  // setlocale(LC_ALL, "");
  NCursesDisplay::Display(system);
}
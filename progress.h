// USERC68 ON GITHUB

#include <stdio.h>

#if defined(SEGMENTS)

//
// HEADER IF SEGMENTS DEFINED 
//

int progress(short per) {
  int filled = (per * SEGMENTS) / 100;
  printf("\rPROGRESS: (");
  for (int i = 0; i < SEGMENTS; i++) {
    if (i < filled) printf("#");
    else printf("-");
  }
  printf(") %d%%", per);
  fflush(stdout);
}

//
// END OF DEFINITION ONE
//

#else

// 
// HEADER IF SEGMENTS IS NOT DEFINED
//

int progress(short per, short seg) {
  int filled = (per * seg) / 100;
  printf("\rPROGRESS: (");
  for (int i = 0; i < seg; i++) {
    if (i < filled) printf("#");
    else printf("-");
  }
  printf(") %d%%", per);
  fflush(stdout);
}

//
// END OF DEFINITION TWO 
//

#endif

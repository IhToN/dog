
/* Include Guard */

#ifndef _DOGOS_H_
#define _DOGOS_H_

/*****************************************************************************/

/* Dogoos! */

const char dog_one[5][20] = {
	"          __",
	" |_______/ V`-,",	
    "  }        /~~",
	" /_)^ --,r'",
	"|b      |b"
};

const char dog_two[12][80] = {
	"      >>                           __,___	",
	"   >>    >>                       /       `",
	"    <<                           v     v   O `__",
	"     <<                         /v    v         O",
	"      <<--__ ________,__ _____/   v  v   _______/",
	"       -    `           `          v   /    U	",
	"      -                              /	",
	"       -  ______________________  _,/				",
	"       | ||                    | ||				",
	"        bbbb                    bbbb				",
	"								"
};

const int available_doggos = 2;

void renderDogOne(char* bark);
void renderDogTwo(char* bark);

/*****************************************************************************/

#endif /* _DOGOS_H_ */

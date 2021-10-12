#include "dogos.h"

static const uint8_t MAX_SIZE_RENDER_BUFFER = 64;

void renderDogOne(char* bark) {
	char buffer[MAX_SIZE_RENDER_BUFFER];

	for (int i = 0; i<5; i++) {
		if (i != 2) {
			snprintf(buffer, MAX_SIZE_RENDER_BUFFER, "%s", dog_one[i]);
		} else {
			snprintf(buffer, MAX_SIZE_RENDER_BUFFER, "%s  %s", dog_one[i], bark);
		}
		printf("%s\n", buffer);
	}
}

void renderDogTwo(char* bark) {
	char buffer[MAX_SIZE_RENDER_BUFFER];

	for (int i = 0; i<13; i++) {
		if (i != 4) {
			snprintf(buffer, MAX_SIZE_RENDER_BUFFER, "%s", dog_two[i]);
		} else {
			snprintf(buffer, MAX_SIZE_RENDER_BUFFER, "%s  %s", dog_two[i], bark);
		}
		printf("%s\n", buffer);
	}
}
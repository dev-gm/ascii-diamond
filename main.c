#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc == 1) {
		fprintf(stderr, "No argument. Aborting!");
		return 1;
	}
	const int line_len = atoi(argv[1]);
	int i, j;
	for (int k = 1; k >= 0; --k) {
		for (
			i = k ? 1 : line_len - 2;
			k ? (i <= line_len) : (i >= 1);
			k ? (i += 2) : (i -= 2)
		) {
			for (j = 0; j < (int) ((line_len - i) / 2); ++j)
				putc(' ', stdout);
			for (j = 0; j < i; ++j)
				putc('*', stdout);
			putc('\n', stdout);
		}
	}
}

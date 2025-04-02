#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if(argc != 2) {
		fprintf(stderr, "Using: %s <.def file>\n", argv[0]);
		return 1;
	}

	char *deb_file = argv[1];

	if(strstr(deb_file, ".deb") == NULL) {
		fprintf(stderr, "Err. the selected file isn't a .deb file!!!");
		return 1;
	}

	FILE *file = fopen(deb_file, "r");
	if(file == NULL) {
		perror("Err. Can't open the file :(");
		return 1;
	}
	fclose(file);

	printf("Installig .deb file");
	char command[256];
	snprintf(command, sizeof(command), "sudo dpkg -i %s", deb_file);

	int status = system(command);
	if(status != 0) {
		fprintf(stderr, "Err. in package instalattion. Trying to fix the problem...");
		system("sudo apt-get install -f");
	} else {
		printf("Package installed sucessfully\n");
	}

	return 0;
}

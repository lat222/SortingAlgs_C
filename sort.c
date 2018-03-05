int main(int argc, char* argv[]) 
{
	// checks that the correct number of command line arguments were given
	// at least three are needed and should look like: prog_name sorting_type list_to_sort
	if (argc < 3)
	{
		fprintf(stderr, "Error: Incorrect number of arguments. Requires at least 2 arguments-- NOT %d.\n", argc-1);
		return 1;
	}

	// check that input is a sort type that we can accomplish
	if (strcmp(argv[1], "bubble") == 1 || strcmp(argv[1], "selection") == 1 || strcmp(argv[1], "insertion") == 1 ||
		strcmp(argv[1], "merge") == 1)
	{
		// check the rest of the arguments inputted are integers

			// call the sorting algorithm

	} 
	else
	{
		fprintf(stderr, "Error: The first argument should be the type of sort. \
			Enter \"bubble\", \"selection\", \"insertion\", or \"merge\"-- NOT %s.\n", argv[1]);
		return 1;
	}
}
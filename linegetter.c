/**
 * linegetter-prints "$", wait for the user to enter  a command
 * prints it on the next line
 */
int main(void)
{
	ssize_t n_read;
	char *lineptr = NULL;
	size_t *n = 0;

	/*prompter*/
	write(1, "$" ,2);

	/*Get user input*/
	n_read = getline(&lineptr, &n, stdin);

	printf("%\n",lineptr);

	return(0);
}

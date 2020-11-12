# get_next_line
The function "get_next_line" reads from a given file descriptor, one line at a time, until the EOF

## Usage
Function prototype: int    get_next_line(int fd, char **line)

Returns 1 when a line is read, 0 when EOF is reached, -1 when an error occured

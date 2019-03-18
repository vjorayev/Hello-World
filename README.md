# Word Count
I wrote a short program that reads one or more sentences from standard input (that is, using the cin input stream), calculates the number of words, the average word length, and the maximum word length (the length of the longest word), and outputs these statistics to the screen as shown below.  This program uses a while loop to read from cin, one character at a time, until there is no more input to process.  For simplicity, assume that sentences are always terminated by the symbols '.', '!', or '?', and that the symbols that separate words from one another within a sentence are a ' ' (a blank space), '-', ';', or ','.  These symbols should not be included in the length of the words, nor should they be counted as words.  I used a switch statement to compare each character read from cin with the symbols listed here. I labeled one case action with a set of case labels, one label for each symbol; 
## Output
First, I tried the program using a single sentence entered at the keyboard as input.  
### For example:

To be or not to be; that is the question!

The output for this sentence should resemble the following:
Number of Words: 10
Average Word Length: 3
Maximum Word Length: 8

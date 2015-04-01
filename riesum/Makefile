NAME = riesum
CC = gcc
TEX = pdflatex

all: $(NAME)
	$(CC) $^.c -o $(NAME) -lm; $(TEX) -job-name=out $^.tex; rm $^.aux $^.log $^.out;

clean: $(NAME)
	rm $^ $^.pdf


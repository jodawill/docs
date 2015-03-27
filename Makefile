TEX = pdflatex
NAME = rms

.PHONY: all clean

all: $(NAME)

$(NAME): $(NAME).tex
	$(TEX) -job-name=out $^; rm *.aux *.log *.out;

clean:
	rm *.out *.aux *.log *.synctex.gz


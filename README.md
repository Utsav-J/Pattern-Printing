# Some tips i learnt:
We should know that 99% of pattern printing is done using nested loops.
Each nested loop has an outer and an inner loop. 
We are gonna have rows and columns,
1. Run the outer for loop for the number of time that we have rows

    If the pattern is 
    A
    A A
    A A A
    A A A A
    Outer for loop is for rows
    Inner is for columns
    Since we have 4 rows in the above pattern, outer loop is run from 1 to 4 (inclusive), or 0 to 4 (exclusive)

2. Identify, how many columns are there with each row? (in above case, first has 1, second has 2, and so on)
3. Also identify the type of items in the columns (are we printing some symbol or numbers?)
4. Try to come up with a formula looking at the patterns, counts, and lines

Check the code to see how i came up with my logic


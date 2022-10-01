# Leet Code 557 using C++
##Reverse Words in a String III


###Leetcode, C++ : 557. Reverse Words in a String III
**Intro:** This is my solution to the Leet Code problem 557, Reverse Words in a String III. I used C++ for this.

**Typical Solution:** Before submitting my solution, I poked around at other solutions. The ones I encountered used the same basic premise—run a string through a While loop until a space was detected to indicate the end of a word, then send that word to a function to reverse the order of that word, then add that word in a new string. This solves the problem by reversing the letters of each word without altering the order of the words in the sentence.

**My Solution:** it occurred to me I could use less lines of code if, instead of using a second function to reverse each word, I could simply update where the insertion point was when a space was detected.

**Conclusion:** My method is cleaner, but inserting characters into the middle of a string rather than concatenating to the end, runs at a higher Big-O complexity.

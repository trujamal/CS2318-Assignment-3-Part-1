# CS2318-Assignment-3-Part-1-
CS2318 Assembly Language
Fill in the "holes" intentionally left in Assign03P1.asm (one of the supplied files) so that the completed program will work as illustrated by the sample test run result (appearing as comments near the top of the file).
Note the following:
	Each hole that you must fill is indicated by a comment line that looks like
####################(4)####################
The number within the parentheses indicates the number of statements used in my ("strive-for-clarity-rather-than-compactness") solution. (It is not necessary that you match that number but you may want to take a hard look if your number differs a lot from it.)
	Be sure to refer to the Excel spreadsheet (Assign03P1_LocVarRefSheet.xslx) on how the main function's local storage is organized.
	The C++ source file (Assign03P1.cpp) is included in case you find it useful.
You are to print and turn in hardcopy of the following (collate and staple them together with a cover page):
	Your completed program.

(Be sure to refer to http://cs.txstate.edu/~lk04/2318/OthRes/Using_Microsoft_Excel_to_Print_Program_Nicely.pdf to print your MARS program nicely.)

(It will be okay if you print until the page that contains StrInitCode: and leave out the rest of the string initialization code.)
	The test output (using your completed program) for at least the test cases included in the sample test run result mentioned above.
Be sure to also email me your program (don't have to email me the test output).
	Be sure to read Programming Assignments - What/How to Submit on how to properly submit softcopies of your programs (especially in regard to the inclusion of subject lines in the specified format).
Tips:	Be sure to not overlook these 2 NOTES items (in particular) given near the top of the supplied Assign03P1.asm file:

# - does NOT adhere to yet-to-be-studied function-call convention (which is
#   needed when doing functions in general, not just "trivial" functions)
# - main (being the only non-"trivial" function & an unavoidable one) will in 
#   fact violate the yet-to-be-studied function-call convention
#   -- due to this, each of the functions that main calls MUST TAKE ANOMALOUS 
#      CARE not to "clobber" the contents of registers that main uses & expects
#      to be preserved across calls
#   -- experiencing the pains and appreciating the undesirability of having to
#      deal with the ANOMALOUS SITUATION (due to the non-observance of any
#      function-call convention that governs caller-callee relationship) should
#      help in understanding why some function-call convention must be defined
#      and observed

Be sure to take advantage of the Trivial Functions and Parameter Passing Mechanism Example studied in class.
CAUTION:	The assignment is based on the same C++ program as that used in the past. 
The Assign03P1.asm and the corresponding Assign03P1_LocVarRefSheet.xslx supplied this time have, for the purpose, intentionally been made different.
When the Assign03P1.asm supplied this time is properly completed (according to the corresponding Assign03P1_LocVarRefSheet.xslx), it should of course work/behave in exactly the same way as the C++ program.
NO CREDIT will be awarded for work turned in that is not done as required (i.e., according to the Assign03P1.asm and the corresponding Assign03P1_LocVarRefSheet.xslx supplied this time).

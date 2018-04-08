# count.cpp
## purpose

  + High level: Looks for a location in the document, attempts to match a regex expression immediately following that location for a preferred length, and checks if it is a unique occurrence. If true, will tally the occurrence. Will repeat until end of document and return count.
  
  + Example syntax:
    + ```./count vsftpd.log " CONNECT: Client " "\"{1}[0-9]*[.]{1}[0-9]*[.]{1}[0-9]*[.]{1}[0-9]*\"{1}" 7 12```
      + Finds string " CONNECT: Client ", and applies regex to pattern the chars from positions 7 to 12 from stopping point.
  
  + Low level:
    + Argument 1: Takes a .log (could also be .txt) file, to be written into buffer.
    + Argument 2: The point in the file where to stop iterator. Takes second argument as string in quotes so it can contain spaces (ex. "exa mple"). Program iterates through document until exact match is found.
    + Argument 3: Takes regex argument in quotes for pattern to be matched. Program will apply regex pattern that user is searching for to characters in specified length, which could be minimum or maximum. If both are the same, that will indicate exact size. 
    + Argument 4: The minimum length the user expects for the pattern to be matched.
    + Argument 5: The maximum length the user expects for the pattern to be matched.
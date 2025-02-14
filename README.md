# Algorithm

```
imports csv file, creates string for line data and a string vector for individual unit data

loops until file ends AND getsline:
  set a stringstream based on gotten line

  while the strignstream.good() == true:
    creates a string to store substrings
    getline(stringstream, substring) checking for commas
    adds substrings to string vector
  sets an int to the added strings within the first two string vectors by taking the integer character using v[x].at(y) - '0'
  for loop just made integer times:
    cout << string output
  cout << "\n"
  clears vector for next loop
returns 0
```

/**
 * Takes input .log file, and counts unique connection attempts.
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
  if (argc == 5)
  {
    ifstream istr(argv[1]);
    if (istr)
    {
      // Fetch file and put in buffer
      streambuf *pbuf = istr.rdbuf();
      streamsize pbuf_size = pbuf->pubseekoff(0, istr.end);

      // Strip quotes off arg2 (Stopping point).
      string stopping_point = argv[2];

      // Create storage for stopping point string.
      pbuf->pubseekoff(0, istr.beg); // Put cursor at beginning.

      istr.close();
    }
    return 0;
  }
  else
  {
    cout << "Not enough arguments.\n"
         << "Check github for instructions.\n";
    return 1;
  }
}
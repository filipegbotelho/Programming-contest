// Sample input 1, in CPP.

#include <cassert>

long long GetStackSize() {
  return 4LL;
}

long long GetNumDiners() {
  return 4LL;
}

long long GetStackItem(long long i) {
  switch ((int)i) {
    case 0: return 3LL;
    case 1: return 1LL;
    case 2: return 2LL;
    case 3: return 0LL;
    default: assert(0);
  }
}

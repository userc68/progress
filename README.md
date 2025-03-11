# progress
simple header for progress
## How to use 
Simply call the function with a percent from 1-100.
Either define segments or declare them at function call
## Explanation 
PROGRESS: (&&&&&&&&&&) ?% <br>
the ampersands = segments. how you define segements is how
long the progressbar will be. <br>
Segments defined: 
```c
#define SEGMENTS 10

int main() {
  progress(10);
  return 0;
}
```
Segments undefined: (second param is segments)
```c
int main() {
  progress(10, 10);
  return 0;
}
```

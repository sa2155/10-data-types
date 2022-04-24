int main() {
  int a ;
  char b ;
  float c ;
  double d ;
  short e ;
  long f ;
  long long g ;
  long double h ;
  unsigned int i ;
  signed char j ;
  
  printf("size of int = %d  bytes\n", sizeof(a));
  printf("size of char = %d bytes\n", sizeof(b));
  printf("size of float = %d bytes\n", sizeof(c));
  printf("size of double= %d bytes\n", sizeof(d));
  printf("size of short = %d bytes\n", sizeof(e));
  printf("size of long = %d bytes\n", sizeof(f));
  printf("size of long long = %d bytes\n", sizeof(g));
  printf("size of long double= %d bytes\n", sizeof(h));
  printf("size of unsigned int = %d bytes\n", sizeof(i));
  printf("size of signed char = %d bytes\n", sizeof(j));

  return 0;
}
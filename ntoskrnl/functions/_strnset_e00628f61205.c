char *__cdecl strnset(char *Dest, int Val, size_t Count)
{
  char *result; // rax

  result = Dest;
  while ( Count )
  {
    --Count;
    if ( !*Dest )
      break;
    *Dest++ = Val;
  }
  return result;
}

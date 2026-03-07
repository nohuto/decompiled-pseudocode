__int64 __fastcall SepIsOptionPresent(const char *a1)
{
  unsigned int v2; // ebx
  char *v3; // rax
  __int64 v5; // rdx

  v2 = 0;
  v3 = strstr(a1, "MINTCBIGNOREKD");
  if ( v3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( aMintcbignorekd[v5] );
    if ( (v3 == a1 || *(v3 - 1) == 32) && (v3[(unsigned int)v5] & 0xDF) == 0 )
      return 1;
  }
  return v2;
}

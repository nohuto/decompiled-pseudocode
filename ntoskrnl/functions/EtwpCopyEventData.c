__int64 __fastcall EtwpCopyEventData(char *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 v9; // rdi

  v4 = 0;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    v9 = *(unsigned int *)(a2 + 8);
    if ( (unsigned int)v9 > a4 )
      break;
    memmove(a1, *(const void **)a2, (unsigned int)v9);
    a1 += v9;
    a4 -= v9;
    ++v4;
    a2 += 16LL;
    if ( v4 >= a3 )
      return 0LL;
  }
  return 3221225476LL;
}

__int64 __fastcall MiGetBaseResidentPageForBugCheck(__int64 a1)
{
  unsigned __int64 v1; // rdx
  int v2; // r9d
  int i; // r8d
  __int64 v4; // rax

  v1 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v2 = 0;
  for ( i = 2; ; --i )
  {
    v4 = MiLargePageSizes[i] - 1;
    if ( (v4 & v1) != 0 )
    {
      v1 &= ~v4;
      a1 = 48 * v1 - 0x220000000000LL;
      if ( (unsigned int)++v2 > 3 )
        return 0LL;
    }
    if ( (*(_BYTE *)(a1 + 36) & 3) != 0 )
      break;
    if ( !i )
      return 0LL;
  }
  return a1;
}

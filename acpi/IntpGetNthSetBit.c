__int64 __fastcall IntpGetNthSetBit(unsigned __int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d

  LOBYTE(v2) = 0;
  v3 = 0;
  if ( a2 == -1 )
    return 1LL << v2;
  while ( _BitScanForward64((unsigned __int64 *)&v2, a1) )
  {
    ++v3;
    a1 &= ~(1LL << v2);
    if ( v3 >= a2 + 1 )
      return 1LL << v2;
  }
  return 0LL;
}

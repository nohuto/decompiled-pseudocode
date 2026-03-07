bool __fastcall bSubOverflow(__int64 a1, __int64 a2)
{
  if ( (a2 ^ a1) < 0 )
  {
    if ( a1 < 0 )
      return a1 < (__int64)(a2 + 0x8000000000000000uLL);
    if ( a1 > a2 + 0x7FFFFFFFFFFFFFFFLL )
      return 1;
  }
  return 0;
}

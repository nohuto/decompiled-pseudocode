bool __fastcall bAddOverflow(signed __int64 a1, __int64 a2)
{
  if ( (a2 ^ a1) >= 0 )
  {
    if ( a2 >= 0 )
      return 0x7FFFFFFFFFFFFFFFLL - a1 < a2;
    if ( a1 < (__int64)(0x8000000000000000uLL - a2) )
      return 1;
  }
  return 0;
}

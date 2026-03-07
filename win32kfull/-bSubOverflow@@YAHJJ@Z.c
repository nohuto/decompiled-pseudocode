bool __fastcall bSubOverflow(int a1, int a2)
{
  if ( (a2 ^ a1) < 0 )
  {
    if ( a1 < 0 )
      return a1 < (int)(a2 + 0x80000000);
    if ( a1 > a2 + 0x7FFFFFFF )
      return 1;
  }
  return 0;
}

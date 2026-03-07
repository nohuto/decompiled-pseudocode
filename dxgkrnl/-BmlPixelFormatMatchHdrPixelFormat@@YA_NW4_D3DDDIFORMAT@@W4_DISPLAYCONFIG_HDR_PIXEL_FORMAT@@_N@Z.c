char __fastcall BmlPixelFormatMatchHdrPixelFormat(int a1, int a2, char a3)
{
  char v3; // r10

  v3 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      return a1 == 31;
    if ( (unsigned int)(a2 - 2) >= 2 )
    {
      WdLogSingleEntry1(1LL, a2);
      return 0;
    }
    return a1 == 113;
  }
  else
  {
    if ( (unsigned int)(a1 - 21) <= 1 || a1 == 32 || a3 && a1 == 31 )
      return 1;
    return v3;
  }
}

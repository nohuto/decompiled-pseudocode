bool __fastcall HalpIsInterruptTypeSecondary(int a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 && a2 >= SecondaryGsivRangeStart )
    return a2 < SecondaryGsivRangeSize + SecondaryGsivRangeStart;
  return v2;
}

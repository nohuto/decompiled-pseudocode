char __fastcall Controller_AreFrameAndTimeDeltaValuesValid(unsigned int a1, unsigned __int64 a2)
{
  char v2; // r8
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  v2 = 0;
  if ( a1 && a2 && a1 <= 0x1DCD6500 && a2 <= 0x1DCD6500 )
  {
    v4 = 10000 * a1;
    v2 = 0;
    v5 = v4 - a2;
    if ( v4 <= a2 )
      v5 = a2 - v4;
    if ( v5 <= 0x5F5E100 )
      return 1;
  }
  return v2;
}

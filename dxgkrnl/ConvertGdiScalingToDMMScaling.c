__int64 __fastcall ConvertGdiScalingToDMMScaling(unsigned int a1, _DWORD *a2)
{
  unsigned int v3; // edx

  v3 = 1;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      *a2 = 3;
      return v3;
    }
    if ( a1 == 2 )
    {
      *a2 = 2;
      return v3;
    }
    WdLogSingleEntry1(3LL, a1);
    v3 = 0;
  }
  *a2 = 253;
  return v3;
}

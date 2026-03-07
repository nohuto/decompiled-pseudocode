__int64 __fastcall GetRITWakeReason(unsigned int *a1)
{
  unsigned int v1; // edx
  int v3; // ecx

  v1 = 0;
  if ( a1 )
  {
    v3 = gdwRITWakeReason & -gdwRITWakeReason;
    if ( v3 )
    {
      _InterlockedAnd(&gdwRITWakeReason, ~v3);
      *a1 = v3;
      return 1;
    }
  }
  else
  {
    LOBYTE(v1) = gdwRITWakeReason != 0;
  }
  return v1;
}

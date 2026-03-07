__int64 __fastcall ConvertDmmToDisplayConfigScaling(unsigned int a1)
{
  if ( a1 == 1 || a1 == 2 || a1 == 3 || a1 == 4 || a1 == 5 )
    return a1;
  if ( a1 == 253 )
  {
    WdLogSingleEntry1(1LL, 946LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Scaling != D3DKMDT_VPPS_PREFERRED",
      946LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 128LL;
}

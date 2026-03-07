__int64 __fastcall IsAMDDriverEscapeAllowed(_DWORD *a1, unsigned __int64 a2)
{
  unsigned int v2; // ecx

  if ( a2 < 0xC )
  {
    WdLogSingleEntry1(2LL, 676LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver private driver escape called with a buffer that is too small, failing the escape request.",
      676LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v2 = a1[2] & 0xFFFFFF00;
    if ( ((v2 - 16778752) & 0xFFFFFCFF) != 0 || v2 == 16779520 )
      return 1LL;
    WdLogSingleEntry1(3LL, 663LL);
  }
  return 0LL;
}

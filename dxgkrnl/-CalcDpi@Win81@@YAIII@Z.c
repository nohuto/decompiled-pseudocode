__int64 __fastcall Win81::CalcDpi(Win81 *this, int a2)
{
  if ( a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  WdLogSingleEntry1(1LL, 168LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"Divide by zero due to 0 physical dimension.",
    168LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 0LL;
}

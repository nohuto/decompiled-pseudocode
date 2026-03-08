/*
 * XREFs of ?CalcDpi@Win81@@YAIII@Z @ 0x1C031C370
 * Callers:
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031C72C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

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

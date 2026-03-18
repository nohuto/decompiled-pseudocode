/*
 * XREFs of FastGetProfileDword @ 0x1C00B7E20
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00AF6CC (W32kEtwEnableCallback.c)
 * Callees:
 *     FastGetProfileDwordEx @ 0x1C0036EC0 (FastGetProfileDwordEx.c)
 */

int __fastcall FastGetProfileDword(__int64 a1, unsigned int a2, const WCHAR *a3, int a4, _DWORD *a5)
{
  return FastGetProfileDwordEx(a1, a2, a3, a4, 0, a5, 0LL);
}

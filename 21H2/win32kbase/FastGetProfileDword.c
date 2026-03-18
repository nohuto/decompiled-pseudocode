/*
 * XREFs of FastGetProfileDword @ 0x1C00C14D0
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileDwordEx @ 0x1C00169B0 (FastGetProfileDwordEx.c)
 */

int __fastcall FastGetProfileDword(__int64 a1, unsigned int a2, const WCHAR *a3, int a4, _DWORD *a5)
{
  return FastGetProfileDwordEx(a1, a2, a3, a4, 0, a5, 0LL);
}

/*
 * XREFs of FastGetProfileDword @ 0x1C002E980
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00BE69C (W32kEtwEnableCallback.c)
 * Callees:
 *     FastGetProfileDwordEx @ 0x1C002E9B0 (FastGetProfileDwordEx.c)
 */

__int64 __fastcall FastGetProfileDword(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return FastGetProfileDwordEx(a1, 0, a5, 0LL);
}

/*
 * XREFs of _ReleaseDC @ 0x1C003EAA0
 * Callers:
 *     UserGetMonitorDC @ 0x1C003BFDC (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C003F210 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
}

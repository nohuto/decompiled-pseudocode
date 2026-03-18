/*
 * XREFs of _ReleaseDC @ 0x1C0071B20
 * Callers:
 *     UserGetMonitorDC @ 0x1C0071A64 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C002A470 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned int)ReleaseCacheDC(a1, 0LL, a3) != 2;
}

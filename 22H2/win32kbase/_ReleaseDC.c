/*
 * XREFs of _ReleaseDC @ 0x1C005BF10
 * Callers:
 *     NtUserReleaseDC @ 0x1C004C8C0 (NtUserReleaseDC.c)
 *     UserGetMonitorDC @ 0x1C005B2C0 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C004C160 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1)
{
  return (unsigned int)ReleaseCacheDC(a1, 0) != 2;
}

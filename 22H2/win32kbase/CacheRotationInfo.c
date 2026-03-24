/*
 * XREFs of CacheRotationInfo @ 0x1C009A94C
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0077600 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CacheRotationInfo())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256880;
  if ( qword_1C0256880 )
    return (__int64 (*)(void))qword_1C0256880();
  return result;
}

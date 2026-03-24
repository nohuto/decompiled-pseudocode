/*
 * XREFs of CacheRotationInfo @ 0x1C0099B8C
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0075F20 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CacheRotationInfo())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257880;
  if ( qword_1C0257880 )
    return (__int64 (*)(void))qword_1C0257880();
  return result;
}

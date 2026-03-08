/*
 * XREFs of ReleaseGL @ 0x1C004CEA8
 * Callers:
 *     AccFieldUnit @ 0x1C0051630 (AccFieldUnit.c)
 *     ParseAcquire @ 0x1C005A0F0 (ParseAcquire.c)
 *     ParseRelease @ 0x1C005BF70 (ParseRelease.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))ghGlobalLock)(5LL, 1LL, qword_1C0070280);
  return result;
}

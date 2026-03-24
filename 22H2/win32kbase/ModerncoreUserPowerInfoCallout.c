/*
 * XREFs of ModerncoreUserPowerInfoCallout @ 0x1C01FC5BC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C004FC50 (UserPowerInfoCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ModerncoreUserPowerInfoCallout())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0256658;
  if ( qword_1C0256658 )
    return (__int64 (*)(void))qword_1C0256658();
  return result;
}

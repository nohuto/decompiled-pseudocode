/*
 * XREFs of CleanupIAMAccess @ 0x1C00D4808
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CleanupIAMAccess())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D6760;
  if ( qword_1C02D6760 )
    return (__int64 (*)(void))qword_1C02D6760();
  return result;
}

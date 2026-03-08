/*
 * XREFs of IsxxxMNEndMenuStateSupported @ 0x1C0271FA0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxMNEndMenuStateSupported()
{
  if ( qword_1C02D6818 )
    return qword_1C02D6818();
  else
    return 3221225659LL;
}

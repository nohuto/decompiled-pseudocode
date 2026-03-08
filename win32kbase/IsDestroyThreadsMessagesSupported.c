/*
 * XREFs of IsDestroyThreadsMessagesSupported @ 0x1C00B98A4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDestroyThreadsMessagesSupported()
{
  if ( qword_1C02D6660 )
    return qword_1C02D6660();
  else
    return 3221225659LL;
}

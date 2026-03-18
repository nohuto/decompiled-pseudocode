/*
 * XREFs of IsDestroyThreadsMessagesSupported @ 0x1C00AC508
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDestroyThreadsMessagesSupported()
{
  if ( qword_1C029BDA8 )
    return qword_1C029BDA8();
  else
    return 3221225659LL;
}

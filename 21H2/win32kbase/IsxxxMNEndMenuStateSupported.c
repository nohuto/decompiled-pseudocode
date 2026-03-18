/*
 * XREFs of IsxxxMNEndMenuStateSupported @ 0x1C023E33C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxMNEndMenuStateSupported()
{
  if ( qword_1C029BF70 )
    return qword_1C029BF70();
  else
    return 3221225659LL;
}

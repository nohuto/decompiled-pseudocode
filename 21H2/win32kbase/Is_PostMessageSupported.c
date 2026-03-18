/*
 * XREFs of Is_PostMessageSupported @ 0x1C023E310
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_PostMessageSupported()
{
  if ( qword_1C029C070 )
    return qword_1C029C070();
  else
    return 3221225659LL;
}

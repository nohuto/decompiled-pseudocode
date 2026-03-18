/*
 * XREFs of Is_PostMessageSupported @ 0x1C02331C4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_PostMessageSupported()
{
  if ( qword_1C0295790 )
    return qword_1C0295790();
  else
    return 3221225659LL;
}

/*
 * XREFs of Is_PostMessageSupported @ 0x1C01FC5B0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_PostMessageSupported()
{
  if ( qword_1C0257330 )
    return qword_1C0257330();
  else
    return 3221225659LL;
}

/*
 * XREFs of Is_PostMessageSupported @ 0x1C01FC4E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_PostMessageSupported()
{
  if ( qword_1C0256330 )
    return qword_1C0256330();
  else
    return 3221225659LL;
}

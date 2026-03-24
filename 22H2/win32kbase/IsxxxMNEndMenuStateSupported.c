/*
 * XREFs of IsxxxMNEndMenuStateSupported @ 0x1C01FC50C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxMNEndMenuStateSupported()
{
  if ( qword_1C0256230 )
    return qword_1C0256230();
  else
    return 3221225659LL;
}

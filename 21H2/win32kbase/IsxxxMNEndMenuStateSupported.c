/*
 * XREFs of IsxxxMNEndMenuStateSupported @ 0x1C01FC5DC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxMNEndMenuStateSupported()
{
  if ( qword_1C0257230 )
    return qword_1C0257230();
  else
    return 3221225659LL;
}

/*
 * XREFs of IsCleanupIAMAccessSupported @ 0x1C00B8084
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0045950 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupIAMAccessSupported()
{
  if ( qword_1C0257170 )
    return qword_1C0257170();
  else
    return 3221225659LL;
}

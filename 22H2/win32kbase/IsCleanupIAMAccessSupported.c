/*
 * XREFs of IsCleanupIAMAccessSupported @ 0x1C00B83A4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0046DC0 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupIAMAccessSupported()
{
  if ( qword_1C0256170 )
    return qword_1C0256170();
  else
    return 3221225659LL;
}

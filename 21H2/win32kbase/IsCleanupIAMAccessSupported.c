/*
 * XREFs of IsCleanupIAMAccessSupported @ 0x1C00C5D2C
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupIAMAccessSupported()
{
  if ( qword_1C029BEB0 )
    return qword_1C029BEB0();
  else
    return 3221225659LL;
}

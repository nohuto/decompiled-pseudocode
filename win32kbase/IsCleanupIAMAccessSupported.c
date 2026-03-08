/*
 * XREFs of IsCleanupIAMAccessSupported @ 0x1C00D46B0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupIAMAccessSupported()
{
  if ( qword_1C02D6758 )
    return qword_1C02D6758();
  else
    return 3221225659LL;
}

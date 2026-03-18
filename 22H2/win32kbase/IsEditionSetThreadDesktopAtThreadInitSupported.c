/*
 * XREFs of IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C00B8914
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetThreadDesktopAtThreadInitSupported()
{
  if ( qword_1C02953F8 )
    return qword_1C02953F8();
  else
    return 3221225659LL;
}

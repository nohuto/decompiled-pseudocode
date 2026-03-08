/*
 * XREFs of IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C00C82E4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C024305C (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetThreadDesktopAtThreadInitSupported()
{
  if ( qword_1C02D6570 )
    return qword_1C02D6570();
  else
    return 3221225659LL;
}

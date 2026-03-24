/*
 * XREFs of IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00957E0
 * Callers:
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x1C0095620 (ApiSetEditionCreateWindowStationEntryPoint.c)
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C0095748 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionGetProcessWindowStationEntryPointSupported()
{
  if ( qword_1C0256EF8 )
    return qword_1C0256EF8();
  else
    return 3221225659LL;
}

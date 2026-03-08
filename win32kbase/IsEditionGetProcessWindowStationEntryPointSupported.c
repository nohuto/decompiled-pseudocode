/*
 * XREFs of IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00AD53C
 * Callers:
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x1C00AD2D0 (ApiSetEditionCreateWindowStationEntryPoint.c)
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C00AD448 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionGetProcessWindowStationEntryPointSupported()
{
  if ( qword_1C02D6500 )
    return qword_1C02D6500();
  else
    return 3221225659LL;
}

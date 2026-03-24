/*
 * XREFs of IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00965A0
 * Callers:
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x1C00963E0 (ApiSetEditionCreateWindowStationEntryPoint.c)
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C0096508 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionGetProcessWindowStationEntryPointSupported()
{
  if ( qword_1C0255EF8 )
    return qword_1C0255EF8();
  else
    return 3221225659LL;
}

/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x1C0076AE4
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C00768C0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSetInformationThreadSupported()
{
  if ( qword_1C0257600 )
    return qword_1C0257600();
  else
    return 3221225659LL;
}

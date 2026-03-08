/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x1C00B3DFC
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C00B3AC0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSetInformationThreadSupported()
{
  if ( qword_1C02D6B88 )
    return qword_1C02D6B88();
  else
    return 3221225659LL;
}

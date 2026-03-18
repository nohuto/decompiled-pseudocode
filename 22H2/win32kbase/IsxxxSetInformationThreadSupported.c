/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x1C009E7CC
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C009E490 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSetInformationThreadSupported()
{
  if ( qword_1C0295A10 )
    return qword_1C0295A10();
  else
    return 3221225659LL;
}

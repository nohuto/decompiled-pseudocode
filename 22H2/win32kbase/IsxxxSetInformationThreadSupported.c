/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x1C00781C4
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0077FA0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSetInformationThreadSupported()
{
  if ( qword_1C0256600 )
    return qword_1C0256600();
  else
    return 3221225659LL;
}

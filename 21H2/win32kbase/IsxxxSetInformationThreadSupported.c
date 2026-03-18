/*
 * XREFs of IsxxxSetInformationThreadSupported @ 0x1C007C764
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C007C540 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSetInformationThreadSupported()
{
  if ( qword_1C029C340 )
    return qword_1C029C340();
  else
    return 3221225659LL;
}

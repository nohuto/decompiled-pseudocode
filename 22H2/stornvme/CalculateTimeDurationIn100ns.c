/*
 * XREFs of CalculateTimeDurationIn100ns @ 0x1C00074C4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0003550 (NVMeHwAdapterControl.c)
 *     IoQueuesCreation @ 0x1C000A6A8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000A834 (IoQueuesCreationAsync.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C0016924 (NVMeIsAllowedWithinThrottleLimit.c)
 *     RecordCommandTimingHistory @ 0x1C0025180 (RecordCommandTimingHistory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalculateTimeDurationIn100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = 0LL;
  if ( a2 )
    return 10000 * (1000 * (a1 % a2) % a2) / a2 + 10000 * (1000 * (a1 / a2) + 1000 * (a1 % a2) / a2);
  return v2;
}

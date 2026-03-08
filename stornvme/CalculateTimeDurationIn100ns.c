/*
 * XREFs of CalculateTimeDurationIn100ns @ 0x1C0007370
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0003050 (NVMeHwAdapterControl.c)
 *     IoQueuesCreation @ 0x1C000A5E8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000A774 (IoQueuesCreationAsync.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C00168B4 (NVMeIsAllowedWithinThrottleLimit.c)
 *     RecordCommandTimingHistory @ 0x1C00251C0 (RecordCommandTimingHistory.c)
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

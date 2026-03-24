/*
 * XREFs of CalculateTimeDurationIn100ns @ 0x1C00010AC
 * Callers:
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C0001008 (NVMeIsAllowedWithinThrottleLimit.c)
 *     NVMeHwAdapterControl @ 0x1C0006080 (NVMeHwAdapterControl.c)
 *     IoQueuesCreation @ 0x1C000BFD8 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000C15C (IoQueuesCreationAsync.c)
 *     RecordCommandTimingHistory @ 0x1C001C8A4 (RecordCommandTimingHistory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalculateTimeDurationIn100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    return 10000 * (1000 * (a1 % a2) % a2) / a2 + 10000 * (1000 * (a1 % a2) / a2 + 1000 * (a1 / a2));
  return v2;
}

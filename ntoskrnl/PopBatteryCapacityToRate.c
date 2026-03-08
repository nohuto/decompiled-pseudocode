/*
 * XREFs of PopBatteryCapacityToRate @ 0x14059674C
 * Callers:
 *     PopCalculateCsSummary @ 0x14058EE94 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140999904 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopBatteryCapacityToRate(unsigned int a1, unsigned __int64 a2)
{
  if ( a2 )
    return 3600000000u * (unsigned __int64)a1 / a2;
  else
    return 0LL;
}

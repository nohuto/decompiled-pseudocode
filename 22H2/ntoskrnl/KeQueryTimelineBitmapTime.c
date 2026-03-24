/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1402056E0
 * Callers:
 *     PsQueryProcessEnergyValues @ 0x1405E92D0 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextUpdateComponentPower @ 0x14060526C (PoEnergyContextUpdateComponentPower.c)
 *     PoEnergyContextCleanup @ 0x14061410C (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x1406732D8 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}

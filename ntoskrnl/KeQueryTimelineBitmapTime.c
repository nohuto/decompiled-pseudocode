/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1402384D0
 * Callers:
 *     PsQueryProcessEnergyValues @ 0x1406B0B60 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406FF3F8 (PoEnergyContextUpdateComponentPower.c)
 *     PoEnergyContextCleanup @ 0x1407046AC (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x140767578 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}

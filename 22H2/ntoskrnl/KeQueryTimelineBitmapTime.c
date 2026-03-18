/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1402C0834
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1406A7514 (PoEnergyContextUpdateComponentPower.c)
 *     PsQueryProcessEnergyValues @ 0x1407424E0 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextCleanup @ 0x1407B12D0 (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x1407B897C (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}

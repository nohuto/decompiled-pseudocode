/*
 * XREFs of PopEtEnergyTrackerSnapshotProcesses @ 0x1408F2BE8
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1406732D8 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PsEnumProcesses @ 0x14062B870 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerSnapshotProcesses(__int64 a1)
{
  return PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback, a1);
}

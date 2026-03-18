/*
 * XREFs of PopEtEnergyTrackerEnumSnapshotCallback @ 0x1407B1B20
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x1407B14E4 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopEtProcessSnapshotUpdate @ 0x1407B2298 (PopEtProcessSnapshotUpdate.c)
 */

__int64 __fastcall PopEtEnergyTrackerEnumSnapshotCallback(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  PopEtProcessSnapshotUpdate(a2);
  *(_QWORD *)(a2 + 16) = 0LL;
  return 0LL;
}

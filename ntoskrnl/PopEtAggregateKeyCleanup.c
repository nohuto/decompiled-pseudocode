/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x140702A18
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x140701954 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotUpdate @ 0x140701D28 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1407025B8 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140768330 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtEnergyTrackerCleanup @ 0x14099565C (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x140702A60 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140702B20 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *a1 )
  {
    result = PopEtAppIdDereference();
    *a1 = 0LL;
  }
  v3 = a1[1];
  if ( v3 )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56, v3);
    a1[1] = 0LL;
  }
  return result;
}

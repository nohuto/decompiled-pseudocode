/*
 * XREFs of MiMirrorPurgePartitionPages @ 0x1406259E0
 * Callers:
 *     <none>
 * Callees:
 *     MiPurgeZeroList @ 0x14064B790 (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14064EF50 (MiPurgePartitionStandby.c)
 */

__int64 __fastcall MiMirrorPurgePartitionPages(__int64 a1, int a2)
{
  if ( a2 )
  {
    MiPurgePartitionStandby();
    *(_BYTE *)(a1 + 15780) = 0;
  }
  return MiPurgeZeroList(a1);
}

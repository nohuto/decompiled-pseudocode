/*
 * XREFs of MiComputeCommitThresholds @ 0x140392978
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140392864 (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x140653F84 (MiReduceCommitLimits.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x1403929E0 (MiSyncCommitSignals.c)
 */

__int64 __fastcall MiComputeCommitThresholds(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // r8

  v1 = a1[2227];
  v2 = v1 / 0xA;
  if ( v1 / 0xA > 0x10000 )
    v2 = 0x10000LL;
  a1[2052] = v1 - v2;
  v3 = v1 >> 2;
  if ( v1 >> 2 > 0x100000 )
    v3 = 0x100000LL;
  v4 = v1 - v3;
  a1[2051] = v4;
  return MiSyncCommitSignals(a1, 1LL, v4);
}

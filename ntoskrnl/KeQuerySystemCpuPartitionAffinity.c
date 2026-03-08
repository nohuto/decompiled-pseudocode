/*
 * XREFs of KeQuerySystemCpuPartitionAffinity @ 0x1403A86F0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryCpuPartitionAffinity @ 0x1403A8718 (KeQueryCpuPartitionAffinity.c)
 */

__int64 __fastcall KeQuerySystemCpuPartitionAffinity(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return KeQueryCpuPartitionAffinity(KiSystemCpuPartition, a1, a2, a3);
}

/*
 * XREFs of PsCpuPartitionMoveCpus @ 0x1409B0B48
 * Callers:
 *     PsInitializeBootCpuPartitions @ 0x140B72D1C (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     KeCpuPartitionMoveCpus @ 0x140574E64 (KeCpuPartitionMoveCpus.c)
 */

__int64 __fastcall PsCpuPartitionMoveCpus(__int64 a1, __int64 a2, char *a3)
{
  return KeCpuPartitionMoveCpus(a1, (__int64)PspSystemCpuPartition, a3, 0);
}

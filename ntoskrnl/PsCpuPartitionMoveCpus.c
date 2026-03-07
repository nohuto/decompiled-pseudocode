__int64 __fastcall PsCpuPartitionMoveCpus(__int64 a1, __int64 a2, char *a3)
{
  return KeCpuPartitionMoveCpus(a1, (__int64)PspSystemCpuPartition, a3, 0);
}

/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1402381F0
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     NtQueryInformationCpuPartition @ 0x1409AD630 (NtQueryInformationCpuPartition.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}

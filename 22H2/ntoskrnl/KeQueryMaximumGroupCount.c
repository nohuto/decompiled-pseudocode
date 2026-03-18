/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1402BE5F0
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     NtQueryInformationCpuPartition @ 0x1409B0680 (NtQueryInformationCpuPartition.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}

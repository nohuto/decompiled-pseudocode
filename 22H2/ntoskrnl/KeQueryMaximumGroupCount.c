/*
 * XREFs of KeQueryMaximumGroupCount @ 0x140341F00
 * Callers:
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}

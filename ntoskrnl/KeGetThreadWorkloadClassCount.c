/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x1403030B4
 * Callers:
 *     KiInitializeThreadCycleTable @ 0x140A89F10 (KiInitializeThreadCycleTable.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140A8BB88 (KiAllocateHeteroConfigBuffer.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}

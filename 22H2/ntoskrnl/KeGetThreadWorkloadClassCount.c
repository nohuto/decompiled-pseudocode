/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x14036EA64
 * Callers:
 *     KiInitializeThreadCycleTable @ 0x140A8D520 (KiInitializeThreadCycleTable.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140A92074 (KiAllocateHeteroConfigBuffer.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}

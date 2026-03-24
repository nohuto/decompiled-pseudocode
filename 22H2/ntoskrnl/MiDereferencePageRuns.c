/*
 * XREFs of MiDereferencePageRuns @ 0x14037E930
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140727470 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F428 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407C83F0 (MmGetNodeChannelRanges.c)
 *     MiComputeNodeMemory @ 0x1407CCFC0 (MiComputeNodeMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C4EE0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C5FDC (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C7108 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1408D0820 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x1408DBFA0 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14031C868 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}

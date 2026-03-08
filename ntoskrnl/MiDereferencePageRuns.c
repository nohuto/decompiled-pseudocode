/*
 * XREFs of MiDereferencePageRuns @ 0x1402EBA0C
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1407C7D50 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x140836318 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x14084FBB8 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2C028 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140A2FF20 (MiScanPagefileSpace.c)
 *     MmScrubMemory @ 0x140A43E64 (MmScrubMemory.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x1402EBA28 (MiDereferencePageRunsEx.c)
 */

__int64 __fastcall MiDereferencePageRuns(__int64 a1)
{
  return MiDereferencePageRunsEx(a1, 1LL);
}

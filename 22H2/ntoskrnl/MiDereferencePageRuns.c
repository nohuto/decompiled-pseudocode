/*
 * XREFs of MiDereferencePageRuns @ 0x1403575C8
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1406F9DC0 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x140835FC8 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x140852FF8 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140A2B738 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A2CCBC (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x140A2ED78 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140A32C50 (MiScanPagefileSpace.c)
 *     MmScrubMemory @ 0x140A46B34 (MmScrubMemory.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x1403575E4 (MiDereferencePageRunsEx.c)
 */

__int64 __fastcall MiDereferencePageRuns(__int64 a1)
{
  return MiDereferencePageRunsEx(a1, 1LL);
}

/*
 * XREFs of MiLocateVadEvent @ 0x14027EA34
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x14061E510 (MiUnmapViewOfSection.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MiFreeToSubAllocatedRegion @ 0x140636BA4 (MiFreeToSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x14063A390 (MiInsertVadCharges.c)
 *     MmFreeVirtualMemory @ 0x14063AD20 (MmFreeVirtualMemory.c)
 *     MiMarkPrivateImageCfgBits @ 0x14066A340 (MiMarkPrivateImageCfgBits.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140683A58 (MiAllocateNewSubAllocatedRegion.c)
 *     MiGetReadyInPageBlock @ 0x1408C8604 (MiGetReadyInPageBlock.c)
 *     MiGetAweVadPageSize @ 0x1408D60F8 (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x1408D8AE0 (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x1408D9D70 (MiCopyLargeVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14027EA4C (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiLocateVadEvent(__int64 a1, __int64 a2)
{
  return MiLocateLockedVadEvent(a1, a2);
}

/*
 * XREFs of MiLocateVadEvent @ 0x14020DC50
 * Callers:
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406A5278 (MiFreeToSubAllocatedRegion.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140727330 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMarkPrivateImageCfgBits @ 0x14075BBE8 (MiMarkPrivateImageCfgBits.c)
 *     MiInitializePartialVad @ 0x140760134 (MiInitializePartialVad.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiFillMapFileInfo @ 0x1408A749A (MiFillMapFileInfo.c)
 *     MiGetReadyInPageBlock @ 0x140A2E670 (MiGetReadyInPageBlock.c)
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 *     MiGetAweVadPageSize @ 0x140A3F0EC (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x140A466EC (MiCopyLargeVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14020DC68 (MiLocateLockedVadEvent.c)
 */

__int64 MiLocateVadEvent()
{
  return MiLocateLockedVadEvent();
}

/*
 * XREFs of MiLocateVadEvent @ 0x14030B2DC
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MiDeleteVad @ 0x1406FA4D0 (MiDeleteVad.c)
 *     MiUnmapViewOfSection @ 0x14071F030 (MiUnmapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x1407455D0 (MmFreeVirtualMemory.c)
 *     MiInitializePartialVad @ 0x14076DBFC (MiInitializePartialVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076F194 (MiFreeToSubAllocatedRegion.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407A4470 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A5200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CD0F4 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFillMapFileInfo @ 0x1408AC30A (MiFillMapFileInfo.c)
 *     MiGetReadyInPageBlock @ 0x140A313A0 (MiGetReadyInPageBlock.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35650 (MiApplyImageHotPatchRequest.c)
 *     MiGetAweVadPageSize @ 0x140A41DCC (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x140A483EC (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x140A493BC (MiCopyLargeVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14030B2F4 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiLocateVadEvent(__int64 a1, __int64 a2)
{
  return MiLocateLockedVadEvent(a1, a2);
}

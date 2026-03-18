/*
 * XREFs of MiReferenceControlAreaFile @ 0x1402A22B4
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406AB91C (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x1406AB9A4 (MiParseComAndCetHeaders.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1406AF6A4 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MmExtendSection @ 0x1407065B4 (MmExtendSection.c)
 *     MiUnmapViewOfSection @ 0x14071F030 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14071F314 (MiUnmapVad.c)
 *     MiCreateSectionCommon @ 0x140722780 (MiCreateSectionCommon.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A5200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmFlushVirtualMemory @ 0x1407B4808 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140871B60 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408AC1EE (MmGetFileNameForAddress.c)
 *     MiFillMapFileInfo @ 0x1408AC30A (MiFillMapFileInfo.c)
 *     MmSectionToSectionObjectPointers @ 0x1408AC57E (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x140A2E764 (MmGetFileNameForSection.c)
 *     MiLoadUserSymbols @ 0x140A30B64 (MiLoadUserSymbols.c)
 *     MiAllocateFileExtents @ 0x140A330D8 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140A3C65C (MmIsFileMapped.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E7B8 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiReferenceControlAreaFileWithTag @ 0x1402A22D0 (MiReferenceControlAreaFileWithTag.c)
 */

__int64 __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  return MiReferenceControlAreaFileWithTag(a1, 1666411853LL);
}

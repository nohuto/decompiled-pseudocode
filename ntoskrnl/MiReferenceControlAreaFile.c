/*
 * XREFs of MiReferenceControlAreaFile @ 0x140344094
 * Callers:
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1406A2850 (MiUnmapVad.c)
 *     MiMapImageInSystemSpace @ 0x1406A53F8 (MiMapImageInSystemSpace.c)
 *     MmCreateSpecialImageSection @ 0x14070DBD4 (MmCreateSpecialImageSection.c)
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140727330 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MiCreateSectionCommon @ 0x1407D01E0 (MiCreateSectionCommon.c)
 *     MiAllowImageMap @ 0x1407D35A0 (MiAllowImageMap.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiLogRelocationFaults @ 0x1407F457C (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x1407F4604 (MiParseComAndCetHeaders.c)
 *     MiParseImageLoadConfig @ 0x1407F4AEC (MiParseImageLoadConfig.c)
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 *     NtAreMappedFilesTheSame @ 0x14086F640 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408A737E (MmGetFileNameForAddress.c)
 *     MiFillMapFileInfo @ 0x1408A749A (MiFillMapFileInfo.c)
 *     MmSectionToSectionObjectPointers @ 0x1408A770E (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x140A2BA04 (MmGetFileNameForSection.c)
 *     MiLoadUserSymbols @ 0x140A2DE34 (MiLoadUserSymbols.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140A39978 (MmIsFileMapped.c)
 *     MiMapImageForEnclaveUse @ 0x140A3BAD0 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 */

__int64 __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  return MiReferenceControlAreaFileWithTag(a1, 1666411853LL);
}

/*
 * XREFs of MiVadDeleted @ 0x14025AB90
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E9B0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCleanVad @ 0x14061ECB8 (MiCleanVad.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MiPopulateCfgBitMap @ 0x1406201D8 (MiPopulateCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x140636D24 (MiMarkSharedImageCfgBits.c)
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 *     MiPrepareVadDelete @ 0x14063BF98 (MiPrepareVadDelete.c)
 *     MiReturnPageTablePageCommitment @ 0x14063C0B0 (MiReturnPageTablePageCommitment.c)
 *     NtAreMappedFilesTheSame @ 0x1406A0330 (NtAreMappedFilesTheSame.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406C4F40 (MiAllocateFromSubAllocatedRegion.c)
 *     MiHotPatchImage @ 0x1408CA384 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408CA6A8 (MiHotPatchProcess.c)
 *     MiPerformImageHotPatch @ 0x1408CCF14 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE554 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x1408D1070 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D35C0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D83D8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}

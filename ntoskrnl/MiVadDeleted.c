/*
 * XREFs of MiVadDeleted @ 0x14031F750
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406A3620 (MiAllocateFromSubAllocatedRegion.c)
 *     MiReturnPageTablePageCommitment @ 0x1406B6AF0 (MiReturnPageTablePageCommitment.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140727330 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPopulateCfgBitMap @ 0x14075C600 (MiPopulateCfgBitMap.c)
 *     MiPrepareVadDelete @ 0x14075FF3C (MiPrepareVadDelete.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x1407D20C4 (MiMarkSharedImageCfgBits.c)
 *     MiCleanVad @ 0x1407D36F8 (MiCleanVad.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x14086F640 (NtAreMappedFilesTheSame.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A3464C (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x140A34804 (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x140A3827C (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A383A8 (MiProcessPatchImageCfg.c)
 *     MmIsFileMapped @ 0x140A39978 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3B820 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A45098 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}

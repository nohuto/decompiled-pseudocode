/*
 * XREFs of MiVadDeleted @ 0x1402752F0
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x14071F400 (MiCleanVad.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MiMarkSharedImageCfgBits @ 0x140747214 (MiMarkSharedImageCfgBits.c)
 *     MiReturnPageTablePageCommitment @ 0x140764EA0 (MiReturnPageTablePageCommitment.c)
 *     MiPrepareVadDelete @ 0x14076DA04 (MiPrepareVadDelete.c)
 *     MiPopulateCfgBitMap @ 0x1407A4E80 (MiPopulateCfgBitMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A5200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x140871B60 (NtAreMappedFilesTheSame.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A3737C (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x140A37534 (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x140A3AF5C (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A3B088 (MiProcessPatchImageCfg.c)
 *     MmIsFileMapped @ 0x140A3C65C (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E508 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47D68 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}

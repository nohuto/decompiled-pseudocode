/*
 * XREFs of RtlClearAllBits @ 0x140290C30
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1406B781C (SepAddLuidToIndexEntry.c)
 *     MiCaptureImageExceptionValues @ 0x140705214 (MiCaptureImageExceptionValues.c)
 *     CmCheckRegistry @ 0x1407052C0 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x14070551C (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x1407055E0 (MiInitializePrivateFixupBitmap.c)
 *     HvStoreModifiedData @ 0x1407075E4 (HvStoreModifiedData.c)
 *     MiGetNewSessionId @ 0x1407A9F4C (MiGetNewSessionId.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F4F18 (SepGetLowBoxNumberEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x1407F5AE0 (SepInitializeLowBoxNumberTable.c)
 *     HvpPerformLogFileRecovery @ 0x14080093C (HvpPerformLogFileRecovery.c)
 *     MmStoreRegister @ 0x140834954 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x14085E3CC (HalpIrtExtendRemappingRange.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     SmcStoreResize @ 0x1409DB824 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1409E8C78 (EtwpUpdateStackTracing.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A36420 (MiCheckPatchesInSupportedSections.c)
 *     MiPrepareToHotPatchImage @ 0x140A3A978 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x140A44990 (MiExpandPartitionIds.c)
 *     HalpIommuInitializeAll @ 0x140A90F0C (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A96E08 (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x140AC8A6C (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140AEF568 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}

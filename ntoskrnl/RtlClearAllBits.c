/*
 * XREFs of RtlClearAllBits @ 0x1402B24A0
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14070B8C0 (SepAddLuidToIndexEntry.c)
 *     MiCaptureImageExceptionValues @ 0x14072D5FC (MiCaptureImageExceptionValues.c)
 *     HvStoreModifiedData @ 0x14072D6A8 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x14072DEB4 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x14072E110 (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x14072E1E0 (MiInitializePrivateFixupBitmap.c)
 *     SepGetLowBoxNumberEntry @ 0x140739A38 (SepGetLowBoxNumberEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x140739CF0 (SepInitializeLowBoxNumberTable.c)
 *     MiGetNewSessionId @ 0x140757858 (MiGetNewSessionId.c)
 *     HvpPerformLogFileRecovery @ 0x1407FBCAC (HvpPerformLogFileRecovery.c)
 *     MmStoreRegister @ 0x140834CA4 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x14085A40C (HalpIrtExtendRemappingRange.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     SmcStoreResize @ 0x1409D8984 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1409E5DD8 (EtwpUpdateStackTracing.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A336F0 (MiCheckPatchesInSupportedSections.c)
 *     MiPrepareToHotPatchImage @ 0x140A37C98 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x140A41CBC (MiExpandPartitionIds.c)
 *     HalpIommuInitializeAll @ 0x140A8DA7C (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A93CC8 (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x140AC4A6C (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140AEB5A8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}

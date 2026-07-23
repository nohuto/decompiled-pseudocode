/*
 * XREFs of RtlClearAllBits @ 0x1402F70D0
 * Callers:
 *     SepGetLowBoxNumberEntry @ 0x1406C6708 (SepGetLowBoxNumberEntry.c)
 *     MiInitializePrivateFixupBitmap @ 0x1406EBBF0 (MiInitializePrivateFixupBitmap.c)
 *     SepAddLuidToIndexEntry @ 0x1406F3858 (SepAddLuidToIndexEntry.c)
 *     HvStoreModifiedData @ 0x1406F88B8 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x1406F8F20 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x1406F917C (HvResetDirtyData.c)
 *     MiCaptureImageExceptionValues @ 0x14075E804 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140786DD0 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14078E718 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x1407B6890 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x140865E88 (HalpIrtExtendRemappingRange.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x1408CD798 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1408DAFB8 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x14092E1D8 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x140935B5C (EtwpUpdateStackTracing.c)
 *     HalpIommuInitializeAll @ 0x14099C3D4 (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A8FCC (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x1409CE3AC (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1409F45B8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}

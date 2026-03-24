/*
 * XREFs of RtlClearAllBits @ 0x140361940
 * Callers:
 *     MiInitializePrivateFixupBitmap @ 0x1405FC490 (MiInitializePrivateFixupBitmap.c)
 *     SepAddLuidToIndexEntry @ 0x140603C6C (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14070F258 (SepGetLowBoxNumberEntry.c)
 *     HvStoreModifiedData @ 0x140720430 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x140720A98 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x140720CF4 (HvResetDirtyData.c)
 *     MiCaptureImageExceptionValues @ 0x14075DE34 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140786B10 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14078E458 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x1407B6B30 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x140865D78 (HalpIrtExtendRemappingRange.c)
 *     HvpPerformLogFileRecovery @ 0x14087410C (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x1408CD688 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1408DAEA8 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x14092E0C8 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1409359DC (EtwpUpdateStackTracing.c)
 *     HalpIommuInitializeAll @ 0x14099B3C4 (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A81DC (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x1409CD3BC (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1409F35B8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}

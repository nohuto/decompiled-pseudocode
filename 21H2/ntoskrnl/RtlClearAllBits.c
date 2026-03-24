/*
 * XREFs of RtlClearAllBits @ 0x140362270
 * Callers:
 *     MiInitializePrivateFixupBitmap @ 0x1405FC490 (MiInitializePrivateFixupBitmap.c)
 *     SepAddLuidToIndexEntry @ 0x140604128 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x1407180B8 (SepGetLowBoxNumberEntry.c)
 *     HvStoreModifiedData @ 0x140721060 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x1407216C8 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x140721924 (HvResetDirtyData.c)
 *     MiCaptureImageExceptionValues @ 0x14075E644 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140786C10 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14078E558 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x1407B637C (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x140865D28 (HalpIrtExtendRemappingRange.c)
 *     HvpPerformLogFileRecovery @ 0x1408740BC (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x1408CD638 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1408DAE58 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x14092E078 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x14093598C (EtwpUpdateStackTracing.c)
 *     HalpIommuInitializeAll @ 0x14099B3D4 (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A809C (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x1409CD3AC (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1409F35B8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}

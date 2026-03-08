/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x14034C5AC (MiObtainReferencedSecureVad.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140619C68 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x14065065C (MmOutSwapVirtualAddresses.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140727330 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407285AC (MiCommitInitialVadMetadataBits.c)
 *     MmGetImageInformation @ 0x14077582C (MmGetImageInformation.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiUnlockVadRange @ 0x1407D73E8 (MiUnlockVadRange.c)
 *     MiHotPatchProcess @ 0x140A34804 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140A3989C (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140A39978 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x140A3D6E8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140A46988 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140A46E40 (MiFreeLargePageView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  char result; // al

  *(_BYTE *)(a1 + 1384) &= ~2u;
  v2 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 1224));
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}

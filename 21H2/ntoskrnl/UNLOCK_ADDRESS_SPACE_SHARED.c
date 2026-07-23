/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403534E0
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x14027CC60 (MiObtainReferencedSecureVad.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14029F008 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1402A0C0C (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1402A1700 (MmOutSwapWorkingSet.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiScrubProcessLargePages @ 0x140564734 (MiScrubProcessLargePages.c)
 *     MmGetImageInformation @ 0x1405CF098 (MmGetImageInformation.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140688200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MiUnlockVadRange @ 0x140689DA0 (MiUnlockVadRange.c)
 *     MiCfgInitializeProcess @ 0x1406C072C (MiCfgInitializeProcess.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 *     MiHotPatchProcess @ 0x1408CA7B8 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D10A0 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408D1180 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408DA0C4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408DA470 (MiFreeLargePageView.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 */

char __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  char result; // al

  *(_BYTE *)(a1 + 1304) &= ~2u;
  v2 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 1224));
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}

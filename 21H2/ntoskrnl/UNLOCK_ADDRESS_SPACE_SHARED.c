/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x140348790
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x14025B6F0 (MiObtainReferencedSecureVad.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14035A26C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x14035BCDC (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x14035C7D0 (MmOutSwapWorkingSet.c)
 *     MiScrubProcessLargePages @ 0x1405644F4 (MiScrubProcessLargePages.c)
 *     MmGetImageInformation @ 0x1405CF098 (MmGetImageInformation.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E590 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MiUnlockVadRange @ 0x140620130 (MiUnlockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x1407120DC (MiCfgInitializeProcess.c)
 *     MiHotPatchProcess @ 0x1408CA658 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D0F40 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408D1020 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4CE8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408D9F64 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408DA310 (MiFreeLargePageView.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 */

char __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  char result; // al
  __int64 v5; // rcx

  *(_BYTE *)(a1 + 1304) &= ~2u;
  v2 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 1224));
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery(v5);
  return result;
}

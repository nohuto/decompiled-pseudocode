/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402C8E20
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x14025AF50 (MiObtainReferencedSecureVad.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140317C38 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1403504CC (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 *     MiScrubProcessLargePages @ 0x140564434 (MiScrubProcessLargePages.c)
 *     MmGetImageInformation @ 0x1405CF098 (MmGetImageInformation.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E9B0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MiUnlockVadRange @ 0x140620550 (MiUnlockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x14063896C (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x1406FC70C (MiCfgInitializeProcess.c)
 *     MiHotPatchProcess @ 0x1408CA6A8 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D0F90 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408D1070 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408D9FB4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408DA360 (MiFreeLargePageView.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
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

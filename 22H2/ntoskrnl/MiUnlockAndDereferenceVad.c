/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x140274970
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159F4 (MiObtainReferencedSecureVad.c)
 *     MiProbeAndLockPrepare @ 0x140234D90 (MiProbeAndLockPrepare.c)
 *     MmProbeAndLockPages @ 0x140238770 (MmProbeAndLockPages.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiProbeAndLockPages @ 0x1402FC270 (MiProbeAndLockPages.c)
 *     MiDeprioritizeVad @ 0x1403C67DC (MiDeprioritizeVad.c)
 *     MiCheckLockUnlockByVa @ 0x14061C780 (MiCheckLockUnlockByVa.c)
 *     MmUpdateUserShadowStackValue @ 0x1406467F0 (MmUpdateUserShadowStackValue.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MmUnsecureVirtualMemory @ 0x1406B0260 (MmUnsecureVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9820 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A518 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x14071F030 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x14071F400 (MiCleanVad.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MmFreeVirtualMemory @ 0x1407455D0 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140747D40 (NtResetWriteWatch.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076F194 (MiFreeToSubAllocatedRegion.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A436C (MiCommitInitialVadMetadataBits.c)
 *     MiCfgMarkValidEntries @ 0x1407A4C5C (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A5514 (MiProcessVaRangesInfoClass.c)
 *     MmSecureVirtualMemoryEx @ 0x1407BAE50 (MmSecureVirtualMemoryEx.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407E66E0 (MiUnmapLockedPagesInUserSpace.c)
 *     MmSetGraphicsPtes @ 0x140A2EB60 (MmSetGraphicsPtes.c)
 *     MmRotatePhysicalView @ 0x140A31C40 (MmRotatePhysicalView.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x140A31FDC (MmAdjustSecuredVirtualMemorySize.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35650 (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A3737C (MiGetVadForHotPatchInProgress.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140A3C284 (MmPrepareImagePagesForHotPatch.c)
 *     MiCreateEnclave @ 0x140A3D6DC (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x140A3DF08 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E508 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A3EA7C (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x140A3F2E0 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x140A3F910 (NtTerminateEnclave.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A45BD0 (MmStoreAllocateVirtualMemory.c)
 *     MiScrubProcessLargePage @ 0x140A46A04 (MiScrubProcessLargePage.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD300 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(char *P)
{
  signed __int32 v2; // edx
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  v3 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}

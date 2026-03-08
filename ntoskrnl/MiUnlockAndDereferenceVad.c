/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x14031EDC0
 * Callers:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x14034C5AC (MiObtainReferencedSecureVad.c)
 *     MiDeprioritizeVad @ 0x1403C0F1C (MiDeprioritizeVad.c)
 *     MiCheckLockUnlockByVa @ 0x14061A2D0 (MiCheckLockUnlockByVa.c)
 *     MmUpdateUserShadowStackValue @ 0x1406441CC (MmUpdateUserShadowStackValue.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406A0D38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406A3620 (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406A5278 (MiFreeToSubAllocatedRegion.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407285AC (MiCommitInitialVadMetadataBits.c)
 *     NtResetWriteWatch @ 0x140755F20 (NtResetWriteWatch.c)
 *     MiCfgMarkValidEntries @ 0x14075C3DC (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x14075C744 (MiProcessVaRangesInfoClass.c)
 *     MmSecureVirtualMemoryEx @ 0x140769030 (MmSecureVirtualMemoryEx.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140797184 (MiUnmapLockedPagesInUserSpace.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 *     MiCleanVad @ 0x1407D36F8 (MiCleanVad.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     MmSetGraphicsPtes @ 0x140A2BE10 (MmSetGraphicsPtes.c)
 *     MmRotatePhysicalView @ 0x140A2EF10 (MmRotatePhysicalView.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x140A2F2AC (MmAdjustSecuredVirtualMemorySize.c)
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A3464C (MiGetVadForHotPatchInProgress.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140A395A0 (MmPrepareImagePagesForHotPatch.c)
 *     MiCreateEnclave @ 0x140A3A9F4 (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x140A3B220 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3B820 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A3BD94 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x140A3C600 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x140A3CC30 (NtTerminateEnclave.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A42EFC (MmStoreAllocateVirtualMemory.c)
 *     MiScrubProcessLargePage @ 0x140A43D34 (MiScrubProcessLargePage.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAA0D0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(PVOID P)
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
    ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
  KeAbPostRelease((ULONG_PTR)P + 40);
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}

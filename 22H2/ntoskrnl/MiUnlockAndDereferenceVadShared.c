/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x14025AAB0
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     MiCleanCfg @ 0x14031C944 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x14032BD70 (MiWaitForRotateToComplete.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     MiPrefetchPreallocatePages @ 0x140539560 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x14054B674 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x140552200 (MiProcessVaContiguityInformation.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140668FB4 (MmFlushVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x140679CAC (MiCheckShadowStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x1406A0330 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408C4094 (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x1408CA6A8 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE554 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12F0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408D1D58 (MiHandleEnclaveFault.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D83D8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(char *P)
{
  signed __int32 v2; // eax
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rcx
  bool v6; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  v3 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  BYTE1(CurrentThread[1].Queue) &= ~0x40u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5);
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}

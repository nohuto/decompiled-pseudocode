/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x14031F7B0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiCleanCfg @ 0x1402F86F4 (MiCleanCfg.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiPrefetchPreallocatePages @ 0x14062FD08 (MiPrefetchPreallocatePages.c)
 *     MiWaitForRotateToComplete @ 0x1406317E4 (MiWaitForRotateToComplete.c)
 *     MmGetEnclaveModuleList @ 0x140646774 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14065B3D4 (MiProcessVaContiguityInformation.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 *     MiCheckForUserStackOverflow @ 0x14076B848 (MiCheckForUserStackOverflow.c)
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x14086F640 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408A737E (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x140A34804 (MiHotPatchProcess.c)
 *     MiHandleEnclaveFault @ 0x140A39FAC (MiHandleEnclaveFault.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3CCE0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A45098 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(PVOID P)
{
  signed __int32 v2; // eax
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  v3 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  BYTE1(CurrentThread[1].Queue) &= ~0x40u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)P + 5);
  KeAbPostRelease((ULONG_PTR)P + 40);
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}

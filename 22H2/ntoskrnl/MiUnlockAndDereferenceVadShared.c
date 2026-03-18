/*
 * XREFs of MiUnlockAndDereferenceVadShared @ 0x140275350
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiCleanCfg @ 0x140363724 (MiCleanCfg.c)
 *     MiPrefetchPreallocatePages @ 0x140632198 (MiPrefetchPreallocatePages.c)
 *     MiWaitForRotateToComplete @ 0x140633C74 (MiWaitForRotateToComplete.c)
 *     MmGetEnclaveModuleList @ 0x140648D90 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x14065DA24 (MiProcessVaContiguityInformation.c)
 *     MiCopyVirtualMemory @ 0x1406F79C0 (MiCopyVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1407B4808 (MmFlushVirtualMemory.c)
 *     MiCheckForUserStackOverflow @ 0x1407BDF28 (MiCheckForUserStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x140871B60 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408AC1EE (MmGetFileNameForAddress.c)
 *     MiHotPatchProcess @ 0x140A37534 (MiHotPatchProcess.c)
 *     MiHandleEnclaveFault @ 0x140A3CC94 (MiHandleEnclaveFault.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F9C0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47D68 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVadShared(char *P)
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
    ExfReleasePushLockShared(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}

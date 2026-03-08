/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x1402CD080
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x140249050 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsChunkFree @ 0x140249D70 (RtlpHpVsChunkFree.c)
 *     RtlpHpAllocateHeap @ 0x14024A2B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpVsContextMultiAlloc @ 0x14024A490 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14024A790 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x14024AB60 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextAllocate @ 0x1402E0C44 (RtlpHpVsContextAllocate.c)
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  _DWORD *v3; // rcx
  unsigned __int64 v4; // rsi
  $C71981A45BEB2B45F82C232A7085991E *v5; // rax
  volatile signed __int64 *v6; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  bool v8; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v3 = *(_DWORD **)(a2 + 8);
    v4 = *(unsigned __int8 *)(a2 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
    else
      *v3 = 0;
    LOBYTE(v5) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = ($C71981A45BEB2B45F82C232A7085991E *)(-1LL << ((unsigned __int8)v4 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)v5;
        v8 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v8 )
          LOBYTE(v5) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    v6 = *(volatile signed __int64 **)(a2 + 8);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    LOBYTE(v5) = KeAbPostRelease((ULONG_PTR)v6);
    CurrentThread = KeGetCurrentThread();
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 )
    {
      v5 = &CurrentThread->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v5->ApcState.ApcListHead[0].Flink != v5 )
        LOBYTE(v5) = KiCheckForKernelApcDelivery();
    }
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return (char)v5;
}

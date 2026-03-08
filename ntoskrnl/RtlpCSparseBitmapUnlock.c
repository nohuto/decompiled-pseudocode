/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x1403083A8
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x1403046C4 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlSparseArrayElementAllocate @ 0x140304B54 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x140305C10 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140306EB8 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall RtlpCSparseBitmapUnlock(int *a1)
{
  __int64 v1; // rax
  int v2; // edx
  volatile signed __int64 *v3; // rbx
  unsigned __int64 v4; // rsi
  volatile LONG *v5; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  bool v7; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx

  v1 = *((_QWORD *)a1 + 1);
  v2 = *a1;
  v3 = (volatile signed __int64 *)(v1 + 24);
  if ( *(_BYTE *)(v1 + 48) )
  {
    v4 = *((unsigned __int8 *)a1 + 4);
    v5 = (volatile LONG *)(v1 + 24);
    if ( v2 == 1 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v7 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
  }
  else
  {
    if ( v2 == 1 )
    {
      if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
    }
    else if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)v3);
    }
    KeAbPostRelease((ULONG_PTR)v3);
    CurrentThread = KeGetCurrentThread();
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}

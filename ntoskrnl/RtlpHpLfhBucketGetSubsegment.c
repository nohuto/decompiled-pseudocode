/*
 * XREFs of RtlpHpLfhBucketGetSubsegment @ 0x140309A44
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14030AA84 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLfhBucketGetSubsegment(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v3; // r14d
  volatile LONG *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  bool v10; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax

  v2 = (_QWORD *)(a1 + 24);
  v3 = a2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v5 = (volatile LONG *)(a1 + 16);
  v6 = (unsigned __int8)RtlpHpAcquireLockExclusive(a1 + 16, a2);
  if ( (_QWORD *)*v2 == v2 )
    v7 = 0LL;
  else
    v7 = RtlpHpLfhOwnerMoveSubsegment(a1, *v2, 2LL);
  if ( v3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v10 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((ULONG_PTR)v5);
    CurrentThread = KeGetCurrentThread();
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return v7;
}

/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x14030A880
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140309BA0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpLfhSubsegmentFree @ 0x1402EB198 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x14030AA5C (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x14030AA84 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  volatile signed __int64 *v8; // rdi
  unsigned __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  bool v11; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx

  v5 = a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    v8 = (volatile signed __int64 *)(a2 + 16);
    v9 = (unsigned __int8)RtlpHpAcquireLockExclusive(a2 + 16, *(unsigned __int8 *)(a1 + 57));
    RtlpHpLfhSubsegmentSetOwner(v5, a2);
    if ( *(_WORD *)(v5 + 32) == *(_WORD *)(v5 + 34) )
      *(_QWORD *)(v5 + 16) = 0LL;
    else
      v5 = RtlpHpLfhOwnerMoveSubsegment(a2, v5, 0LL);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v11 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16));
      KeAbPostRelease(a2 + 16);
      CurrentThread = KeGetCurrentThread();
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( v5 )
    RtlpHpLfhSubsegmentFree(a1, v5, a2, a4 & 1);
}

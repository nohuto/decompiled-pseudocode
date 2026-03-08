/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x1402E5158
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140248BE0 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall RtlpHpSegMgrCommitComplete(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        PEX_SPIN_LOCK SpinLock,
        unsigned __int8 a6)
{
  signed __int16 v6; // ax
  signed __int16 v9; // bx
  signed __int16 v10; // cx
  __int16 v11; // dx
  signed __int16 v12; // tt
  struct _KTHREAD *CurrentThread; // rcx
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx

  v6 = *a2;
  while ( 1 )
  {
    v9 = v6;
    v10 = v6;
    if ( (v6 & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v11 = 0x8000;
      else
        v11 = 0;
      v10 = v11 | v6 & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v10 += a3;
    }
    else if ( !a4 )
    {
      v10 -= a3;
    }
    if ( v10 == v6 )
      break;
    v12 = v6;
    v6 = _InterlockedCompareExchange16(a2, v10, v6);
    if ( v12 == v6 )
    {
      if ( (v9 & 0x4000) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v18 = ~(unsigned __int16)(-1LL << (a6 + 1));
              v14 = (v18 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v18;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(a6);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)SpinLock);
          KeAbPostRelease((ULONG_PTR)SpinLock);
          CurrentThread = KeGetCurrentThread();
          v14 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v14
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
      return;
    }
  }
}

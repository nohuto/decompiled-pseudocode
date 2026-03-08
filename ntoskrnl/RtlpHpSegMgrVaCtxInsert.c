/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x14030C1E4
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x14030853C (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegContextInitialize @ 0x140375540 (RtlpHpSegContextInitialize.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpQueryVA @ 0x140309578 (RtlpHpQueryVA.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // r14
  unsigned __int16 v4; // ax
  unsigned __int64 v5; // rbx
  KIRQL v6; // al
  unsigned __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  bool v9; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  unsigned __int16 *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  RtlpHpQueryVA(a2, a2, &v14, 0LL);
  v3 = v14;
  v4 = *v14;
  *v14 ^= (*v14 ^ (*v14 + 1)) & 0x7FF;
  if ( ((v4 ^ (v4 ^ (v4 + 1)) & 0x7FF) & 0x8000u) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v3 = v14;
  }
  v5 = (unsigned __int64)*v3 >> 15;
  v6 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v5 + 120);
  *(_QWORD *)(a1 + 8 * v5 + 120) = v3 + 4;
  v7 = v6;
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v9 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    CurrentThread = KeGetCurrentThread();
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}

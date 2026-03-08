/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x1402A4E28
 * Callers:
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140332B34 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // r14d
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  volatile LONG *v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 result; // rax
  _QWORD *v13; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  bool v15; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10

  v2 = *(_DWORD *)(a2 + 8);
  KeAbPostRelease(a1);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = MiBuildWakeList(a1, *(unsigned int *)(a2 + 8));
  v7 = (volatile LONG *)(a1 + 72);
  v8 = (_QWORD *)v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = -1LL << ((unsigned __int8)v5 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)v9;
      v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      v10 = (unsigned int)result & SchedulerAssist[5];
      SchedulerAssist[5] = v10;
      if ( v15 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  if ( v8 )
  {
    do
    {
      v13 = (_QWORD *)*v8;
      if ( v8 != (_QWORD *)a2 )
        result = KeSignalGate(v8 + 2, 1LL);
      v8 = v13;
    }
    while ( v13 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 != 16 )
    return KeLeaveCriticalRegionThread(CurrentThread);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentThread, v9, v10, SchedulerAssist);
  }
  return result;
}

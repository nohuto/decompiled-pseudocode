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

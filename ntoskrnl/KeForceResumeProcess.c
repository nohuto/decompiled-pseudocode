/*
 * XREFs of KeForceResumeProcess @ 0x140355998
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140616A90 (MiReAcquireCommitFailWorker.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1407DC198 (PspTerminateProcess.c)
 *     PsFreezeProcess @ 0x1407DD068 (PsFreezeProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiThawSingleThread @ 0x140355DCC (KiThawSingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeForceResumeProcess(__int64 a1)
{
  _QWORD **v2; // r14
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v5; // rbp
  __int64 v6; // r8
  char result; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rax
  _QWORD *i; // rdi
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  v2 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v9) = 4;
    if ( CurrentIrql != 2 )
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 888) + ((*(_DWORD *)(a1 + 632) >> 3) & 1) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 3u);
    *(_DWORD *)(a1 + 888) = 0;
    for ( i = *v2; i != v2; i = (_QWORD *)*i )
    {
      LOBYTE(v6) = 1;
      KiThawSingleThread(CurrentPrcb, i - 95, v6);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    return KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

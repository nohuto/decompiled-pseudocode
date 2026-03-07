void __fastcall RtlpHpAcquireQueuedLockExclusive(volatile signed __int32 *a1, int a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    a3[1] = a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v8) = 4;
      else
        v8 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v8;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1, CurrentIrql);
    }
    else
    {
      v9 = 0;
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v9 = ExpWaitForSpinLockExclusiveAndAcquire(a1);
      while ( (*a1 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (*a1 & 0x40000000) == 0 )
          _InterlockedOr(a1, 0x40000000u);
        KeYieldProcessorEx(&v9);
      }
    }
    a3[2] = CurrentIrql;
  }
  else
  {
    *a3 = 0LL;
    a3[2] = 0LL;
    CurrentThread = KeGetCurrentThread();
    a3[1] = a1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  }
}

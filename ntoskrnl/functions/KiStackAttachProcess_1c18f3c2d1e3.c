int __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // si
  volatile int result; // eax
  int v9; // ecx
  _DWORD *SchedulerAssist; // r8
  __int64 v11; // r9
  int v12; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = 0;
  result = KeGetPcr()->Prcb.DpcRequestSummary;
  if ( (result & 0x10001) != 0 )
  {
    v9 = a2 & 2;
    if ( (a2 & 2) == 0 )
LABEL_22:
      KeBugCheckEx(
        5u,
        (ULONG_PTR)BugCheckParameter1,
        (ULONG_PTR)CurrentThread->ApcState.Process,
        CurrentThread->ApcStateIndex,
        KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  }
  else
  {
    v9 = a2 & 2;
  }
  if ( (*(_DWORD *)&BugCheckParameter1->0 & 0x800) != 0 )
    goto LABEL_22;
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    if ( !v9 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v11) = 4;
        else
          v11 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v11;
      }
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( CurrentThread->ThreadLock );
      }
    }
    if ( CurrentThread->ApcStateIndex )
    {
      return KiAttachProcess((_DWORD)CurrentThread, (_DWORD)BugCheckParameter1, CurrentIrql, a2, a3);
    }
    else
    {
      result = KiAttachProcess(
                 (_DWORD)CurrentThread,
                 (_DWORD)BugCheckParameter1,
                 CurrentIrql,
                 a2,
                 (__int64)&CurrentThread->600);
      *(_QWORD *)(a3 + 32) = 0LL;
    }
  }
  return result;
}

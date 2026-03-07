__int64 __fastcall MmSetAccessLogging(int a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v10; // zf
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  dword_140C67C68 = a1;
  dword_140C67C6C = a2;
  if ( a1 )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !ListEntry )
      return KiInsertQueueDpc((ULONG_PTR)&dword_140C67F20, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    if ( stru_140C67C48.Parameter )
    {
      if ( stru_140C67C48.Parameter == (void *)2 )
        stru_140C67C48.Parameter = (void *)3;
    }
    else
    {
      stru_140C67C48.List.Flink = 0LL;
      stru_140C67C48.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      stru_140C67C48.Parameter = (void *)1;
      ExQueueWorkItem(&stru_140C67C48, DelayedWorkQueue);
    }
    result = KxReleaseQueuedSpinLock(&LockHandle);
    v6 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = ((unsigned int)result & v12[5]) == 0;
        v12[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    __writecr8(v6);
  }
  return result;
}

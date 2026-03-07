__int64 MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v7; // eax
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C6EEC0, &LockHandle);
  if ( qword_140C6B1E8 )
  {
    v0 = MiState[0];
    v1 = qword_140C65108;
    if ( qword_140C65108 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_140C6B1E8->Header.SignalState )
        KeResetEvent(qword_140C6B1E8);
    }
    else if ( !qword_140C6B1E8->Header.SignalState )
    {
      KeSetEvent(qword_140C6B1E8, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_140C6B1E0->Header.SignalState )
        KeSetEvent(qword_140C6B1E0, 0, 0);
    }
    else if ( qword_140C6B1E0->Header.SignalState )
    {
      KeResetEvent(qword_140C6B1E0);
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}

void MiEmptyAccessLogs()
{
  PSLIST_ENTRY v0; // r15
  unsigned __int64 v1; // rdi
  void *i; // rcx
  __int64 NextProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG_PTR v7; // rdi
  __int64 v8; // r14
  struct _KPROCESS *j; // rcx
  struct _KPROCESS *NextSession; // rax
  struct _KPROCESS *v11; // rdi
  __int64 SessionVm; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-38h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( dword_140C67C68 )
  {
    stru_140C67C48.Parameter = 0LL;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v0 = 0LL;
    do
    {
      stru_140C67C48.Parameter = (void *)2;
      KxReleaseQueuedSpinLock(&LockHandle);
      v1 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v22 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      __writecr8(v1);
      for ( i = 0LL; ; i = (void *)v7 )
      {
        NextProcess = PsGetNextProcess(i);
        v7 = NextProcess;
        if ( !NextProcess )
          break;
        v8 = NextProcess + 1664;
        if ( *(_QWORD *)(MiGetSharedVm(NextProcess + 1664, v4, v5, v6, LockHandle.LockQueue.Next) + 40) )
        {
          KiStackAttachProcess(v7);
          MiDrainSystemAccessLog(v8);
          KiUnstackDetachProcess(&ApcState, 0LL);
        }
      }
      for ( j = 0LL; ; j = v11 )
      {
        NextSession = (struct _KPROCESS *)MiGetNextSession(j);
        v11 = NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, &ApcState) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          MiDrainSystemAccessLog(SessionVm);
          MmDetachSession(v11, &ApcState);
        }
      }
      v13 = &unk_140C69680;
      v14 = 3LL;
      do
      {
        if ( v13[14] )
          MiDrainSystemAccessLog(v13);
        v13 += 40;
        --v14;
      }
      while ( v14 );
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    }
    while ( stru_140C67C48.Parameter != (void *)2 );
    if ( !dword_140C67C68 )
    {
      v0 = ListEntry;
      ListEntry = 0LL;
    }
    stru_140C67C48.Parameter = 0LL;
    KxReleaseQueuedSpinLock(&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v26 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    __writecr8(v15);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}

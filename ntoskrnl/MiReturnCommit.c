void __fastcall MiReturnCommit(__int64 a1, __int64 a2, __int64 CachedCommit)
{
  __int64 v3; // rdi
  struct _KPRCB *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v3 = a2;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !*(_QWORD *)(a1 + 16440) )
      goto LABEL_27;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 16424), &LockHandle);
    v3 = MiRestockOverCommit(a1, v3);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        CachedCommit = (unsigned int)v14 & SchedulerAssist[5];
        SchedulerAssist[5] = CachedCommit;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( v3 )
    {
LABEL_27:
      if ( (_UNKNOWN *)a1 == &MiSystemPartition
        && (v5 = KeGetCurrentPrcb(),
            _m_prefetchw((const void *)&v5->CachedCommit),
            CachedCommit = v5->CachedCommit,
            (unsigned __int64)(v3 + CachedCommit) <= 0x100) )
      {
        while ( 1 )
        {
          v6 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&v5->CachedCommit,
                 v3 + CachedCommit,
                 CachedCommit);
          if ( v6 == CachedCommit )
            break;
          CachedCommit = v6;
          if ( (unsigned __int64)(v6 + v3) > 0x100 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17576), -v3);
        v8 = *(_QWORD *)(a1 + 16416);
        if ( v7 >= v8 && v7 - v3 < v8 || (v9 = *(_QWORD *)(a1 + 16408), v7 >= v9) && v7 - v3 < v9 )
          MiSyncCommitSignals(a1, 0LL, CachedCommit);
      }
    }
  }
}

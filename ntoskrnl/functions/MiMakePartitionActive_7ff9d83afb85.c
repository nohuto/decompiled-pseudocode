__int64 __fastcall MiMakePartitionActive(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r11
  _DWORD *v19; // r9
  int v20; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (int)SmCreatePartition(v2) >= 0 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C67000, &LockHandle);
    if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
    {
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      return 1LL;
    }
    if ( (unsigned int)MiChargeCommit(a1, 160LL, 0LL) )
    {
      *(_DWORD *)(a1 + 4) &= ~0x10u;
      *(_QWORD *)(a1 + 16432) = 160LL;
      KxReleaseQueuedSpinLock(&LockHandle);
      v16 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v17 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v20 & v19[5]) == 0;
          v15 = (unsigned int)v20 & v19[5];
          v19[5] = v15;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      __writecr8(v16);
      MiReturnCommit(a1, 160LL, v15);
      if ( (_UNKNOWN *)a1 != &MiSystemPartition )
        MiSetSlabAllocatorPolicy(a1);
      return 1LL;
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    v10 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    __writecr8(v10);
  }
  return 0LL;
}

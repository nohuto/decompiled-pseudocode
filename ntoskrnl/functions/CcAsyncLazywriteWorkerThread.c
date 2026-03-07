__int64 __fastcall CcAsyncLazywriteWorkerThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  bool v4; // zf
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v8; // r14
  __int64 *v9; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+38h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 72);
  result = 0LL;
  v4 = *(_DWORD *)(a1 + 32) == 7;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 64);
  v8 = v2 + 288;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v21, 0, sizeof(v21));
  if ( v4 )
  {
    *(_DWORD *)(v2 + 4LL * *(unsigned int *)(a1 + 40) + 352) = 0;
    if ( (*(_DWORD *)(v6 + 1600) & 2) != 0 )
      CcAsyncLazywriteWorkerMulti(a1, a2);
    else
      CcAsyncLazywriteWorker(a1);
    *(_DWORD *)(v2 + 4LL * *(unsigned int *)(a1 + 40) + 352) = -1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 832), &LockHandle);
    v9 = *(__int64 **)(v2 + 296);
    if ( *v9 != v8 )
      __fastfail(3u);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v9;
    *v9 = a1;
    *(_QWORD *)(v2 + 296) = a1;
    --*(_DWORD *)(v2 + 304);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( *(_DWORD *)(v2 + 304) <= 1u
      && *(_QWORD *)(v6 + 992) >= (unsigned __int64)*(unsigned int *)(v6 + 1040)
      && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v6 + 1584) + 5000000LL )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v21);
      CcNotifyWriteBehindVolume(v6, 32);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v21);
      v15 = v21.OldIrql;
      if ( KiIrqlFlags )
      {
        v16 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && v21.OldIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (v21.OldIrql + 1));
          v4 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v4 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      __writecr8(v15);
    }
    CcDereferencePartition(v5);
    result = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 8));
    if ( result <= -1 )
      __fastfail(0xEu);
  }
  return result;
}

char __fastcall CcCompleteAsyncLazywriteWorkerThread(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 72);
  LOBYTE(v2) = 0;
  v3 = *(_DWORD *)(a1 + 32) == 8;
  v4 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = v1 + 400;
  if ( v3 )
  {
    CcCompleteAsyncLazywriteWorker(a1);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
    v8 = *(__int64 **)(v1 + 408);
    if ( *v8 != v7 )
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *v8 = a1;
    *(_QWORD *)(v1 + 408) = a1;
    --*(_DWORD *)(v1 + 416);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v3 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    LOBYTE(v2) = CcDereferencePartition(v4);
    if ( v6 )
    {
      v2 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 8));
      if ( v2 <= -1 )
        __fastfail(0xEu);
    }
  }
  return v2;
}

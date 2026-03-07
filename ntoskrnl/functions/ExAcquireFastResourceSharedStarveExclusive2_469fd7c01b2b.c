char __fastcall ExAcquireFastResourceSharedStarveExclusive2(_WORD *BugCheckParameter2, ULONG_PTR a2, char a3)
{
  __int16 v3; // r9
  __int64 v4; // rbp
  int v7; // r10d
  char v8; // si
  int v9; // r13d
  unsigned __int8 v10; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR v13; // r9
  char v14; // al
  int v15; // r12d
  ULONG_PTR v16; // r9
  int v17; // ecx
  KSPIN_LOCK *v18; // r14
  char v19; // r15
  signed __int64 v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rtt
  int v23; // r13d
  int v24; // r12d
  int v25; // r15d
  char v26; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v31; // eax
  signed __int32 v32; // ett

  v3 = BugCheckParameter2[13];
  v4 = 0LL;
  v7 = 4;
  if ( a3 )
    v7 = 12;
  v8 = 1;
  v9 = v7 & 0x10;
  v10 = 2 - ((v7 & 8) != 0);
  if ( (v3 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > v10 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v10, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v3 & 8) == 0 && (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)v13 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v13, 0LL);
  v14 = *(_BYTE *)(a2 + 37);
  v15 = v7;
  if ( (v14 & 2) == 0 )
  {
    v16 = *(_QWORD *)(a2 + 24);
    if ( v16 )
    {
      if ( (_WORD *)v16 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a2, v16, 0LL);
    }
  }
  v17 = *(_DWORD *)(a2 + 32);
  if ( !v17 || (v14 & 4) != 0 )
  {
    v18 = (KSPIN_LOCK *)KeGetCurrentThread();
    if ( !*(_BYTE *)(a2 + 36) )
      v4 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
    v19 = 3;
    do
    {
      _m_prefetchw(BugCheckParameter2);
      v20 = *(_QWORD *)BugCheckParameter2;
      if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
        return ExpAcquireFastResourceSharedSlow((ULONG_PTR)BugCheckParameter2, v15);
      v21 = v20 + 4;
      v22 = *(_QWORD *)BugCheckParameter2;
    }
    while ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v20 + 4, v20) );
    if ( v9 )
      v19 = 15;
    v23 = v19 & 2;
    v24 = v19 & 4;
    v25 = v19 & 8;
    if ( (_WORD *)a2 != BugCheckParameter2 + 32 )
      *(_QWORD *)(a2 + 24) = BugCheckParameter2;
    *(_DWORD *)(a2 + 32) = 1;
    *(_QWORD *)(a2 + 16) = (unsigned __int64)v18 | (v24 != 0);
    if ( v4 )
    {
      v26 = 2 * *(_BYTE *)(v4 + 16);
      *(_BYTE *)(v4 + 18) = 1;
      *(_BYTE *)(a2 + 36) = v26 | 1;
    }
    if ( v23 )
      _disable();
    if ( v24 )
    {
      KxAcquireSpinLock(v18 + 209);
      LOBYTE(v28) = 1;
      ExpAddFastOwnerEntryToThreadList2(v18, v29, v28, a2);
      KeReleaseSpinLockFromDpcLevel(v18 + 209);
    }
    else
    {
      ExpAddFastOwnerEntryToThreadList2(v18, v21, 0LL, a2);
    }
    if ( v23 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v31 = *SchedulerAssist;
        do
        {
          v32 = v31;
          v31 = _InterlockedCompareExchange(SchedulerAssist, v31 & 0xFFDFFFFF, v31);
        }
        while ( v32 != v31 );
        if ( (v31 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
    if ( v24 )
    {
      if ( v25 && v4 )
        KeAbMarkCrossThreadReleasable((__int64)CurrentPrcb, (__int64 *)v4);
      ObfReferenceObject(v18);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v17 + 1;
  }
  return v8;
}

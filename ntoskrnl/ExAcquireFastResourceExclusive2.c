char __fastcall ExAcquireFastResourceExclusive2(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r14
  char v4; // di
  __int16 v5; // r9
  int v6; // r12d
  unsigned __int8 v8; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  __int64 v11; // rdx
  ULONG_PTR v12; // rsi
  signed __int64 v13; // rax
  char v14; // al
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett

  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  v5 = *(_WORD *)(BugCheckParameter2 + 26);
  v6 = 1;
  if ( a3 )
    v6 = 9;
  v8 = 2 - ((v6 & 8) != 0);
  if ( (v5 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > v8 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v8, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v5 & 8) == 0 && (v10->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v12 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 0LL);
  if ( v13 )
  {
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 80) == CurrentThread )
    {
      ++*(_DWORD *)(BugCheckParameter2 + 96);
      if ( v12 )
        KeAbPostReleaseEx(BugCheckParameter2, v12);
    }
    else if ( (v6 & 8) != 0 )
    {
      ExpAcquireFastResourceExclusiveSlow(BugCheckParameter2, v13, CurrentThread, v12, v6);
    }
    else
    {
      if ( v12 )
        KeAbPostReleaseEx(BugCheckParameter2, v12);
      return 0;
    }
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 96) = 1;
    *(_QWORD *)(BugCheckParameter2 + 80) = CurrentThread;
    if ( v12 )
    {
      v14 = 2 * *(_BYTE *)(v12 + 16);
      *(_BYTE *)(v12 + 18) = 1;
      *(_BYTE *)(BugCheckParameter2 + 100) = v14 | 1;
    }
    _disable();
    ExpAddFastOwnerEntryToThreadList2(CurrentThread, v11, 0LL, BugCheckParameter2 + 64);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v17 = *SchedulerAssist;
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return v4;
}

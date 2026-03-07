char __fastcall CcAsyncCopyRead(
        _QWORD *Object,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 Ahead; // rax
  _DWORD *v17; // r9
  __int64 v18; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v20; // r9
  _QWORD *PoolWithTagFromNode; // rax
  void *v22; // r14
  int v23; // ebp
  volatile signed __int64 *DeepFreezeStartTime; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rdi
  int PagePriorityThread; // eax
  __int64 v35; // r8
  __int64 v36; // rbp
  unsigned int v37; // ecx
  __int64 v39; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v41; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v42; // [rsp+98h] [rbp+10h]

  v42 = a2;
  PsGetIoPriorityThread(KeGetCurrentThread());
  v41 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_QWORD *)(Object[5] + 8LL);
  v13 = *(_QWORD *)(v12 + 536);
  v39 = v13;
  Ahead = CcGetNodeForReadAhead(v12, v14, v15, Object[6]);
  v18 = Ahead;
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x3FDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(3221225704LL);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && (*v17 & 0x20000) != 0 )
    CcScheduleReadAheadNuma(Object, a2, a3, a7, Ahead);
  ++qword_140C5F528;
  if ( !byte_140C5F501 && CcTelemetryGlobalData && !dword_140C5F610 && !dword_140C5F614 )
    CcSetTelemetryPeriodicTimer(DueTime);
  v20 = *(unsigned int *)(v18 + 24);
  LODWORD(v20) = v20 | 0x80000000;
  PoolWithTagFromNode = (_QWORD *)ExpAllocatePoolWithTagFromNode(512LL, 8LL, 1933665091LL, v20, 0);
  v22 = PoolWithTagFromNode;
  if ( !PoolWithTagFromNode )
    RtlRaiseStatus(3221225626LL);
  *PoolWithTagFromNode = 0LL;
  v23 = CcAllocateWorkQueueEntry(v13, *(_QWORD *)(v12 + 600), v18, &v41);
  if ( v23 < 0 )
  {
    ExFreePoolWithTag(v22, 0x73416343u);
    RtlRaiseStatus((unsigned int)v23);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  DeepFreezeStartTime = (volatile signed __int64 *)CurrentThread->Process[2].DeepFreezeStartTime;
  if ( DeepFreezeStartTime )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(DeepFreezeStartTime, (a3 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(DeepFreezeStartTime + 2, 1uLL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v39 + 768), &LockHandle);
  ++*(_DWORD *)(v12 + 4);
  ++*(_DWORD *)(v12 + 544);
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v30 = (v29 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v29;
      if ( v30 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 528));
  v31 = v41;
  v32 = v42;
  *(_DWORD *)(v41 + 128) = 5;
  *(_QWORD *)(v31 + 16) = v12;
  v33 = a8;
  *(_QWORD *)(v31 + 32) = Object;
  *(_QWORD *)(v31 + 24) = *v32;
  *(_DWORD *)(v31 + 40) = a3;
  *(_QWORD *)(v31 + 48) = v22;
  *(_QWORD *)(v31 + 64) = *(_QWORD *)(v33 + 16);
  *(_QWORD *)(v31 + 72) = a6;
  *(_QWORD *)(v31 + 80) = v33;
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  *(_DWORD *)(v35 + 56) = PagePriorityThread;
  v36 = v41;
  *(_QWORD *)(v41 + 88) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v36 + 96) = CurrentThread;
  *(_BYTE *)(v36 + 112) = *(_BYTE *)(v33 + 24);
  *(_DWORD *)(v36 + 116) = *(_DWORD *)(v33 + 28);
  *(LARGE_INTEGER *)(v36 + 120) = PerformanceCounter;
  *(_QWORD *)(v36 + 104) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread);
  v37 = *(_DWORD *)(v33 + 28);
  if ( v37 > CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x4A3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead((PSLIST_ENTRY)v36, *(_QWORD *)(v18 + 256) + 16LL * v37);
  return 1;
}

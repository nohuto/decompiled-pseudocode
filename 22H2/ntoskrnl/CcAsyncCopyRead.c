/*
 * XREFs of CcAsyncCopyRead @ 0x140278AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x140242140 (PsGetPagePriorityThread.c)
 *     CcAllocateWorkQueueEntry @ 0x140276E50 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueueAsyncRead @ 0x140278CE4 (CcPostWorkQueueAsyncRead.c)
 *     IoReferenceIoAttributionFromThread @ 0x140278F68 (IoReferenceIoAttributionFromThread.c)
 *     CcScheduleReadAheadEx @ 0x140279480 (CcScheduleReadAheadEx.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  _SLIST_ENTRY *Next; // rsi
  __int64 v11; // rax
  __int64 v13; // rbx
  __int64 Partition; // r15
  struct _KTHREAD *CurrentThread; // rdi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v17; // rsi
  NTSTATUS v18; // ebp
  volatile signed __int64 *DeepFreezeStartTime; // rcx
  unsigned __int64 OldIrql; // rbp
  PSLIST_ENTRY v21; // rdx
  __int64 v22; // rbx
  int PagePriorityThread; // eax
  __int64 v24; // rdx
  PSLIST_ENTRY v25; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+80h] [rbp+8h] BYREF

  Next = Object[3].Next;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = *((_QWORD *)&Object[2].Next + 1);
  ListEntry = 0LL;
  v13 = *(_QWORD *)(v11 + 8);
  Partition = CcGetPartition(v13);
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v13 + 8) )
    KeBugCheckEx(0x34u, 0x393uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && ((__int64)Next->Next & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object);
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x73416343u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  PoolWithTag->Next = 0LL;
  v18 = CcAllocateWorkQueueEntry(Partition, &ListEntry);
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v17, 0x73416343u);
    RtlRaiseStatus(v18);
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
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  ++*(_DWORD *)(v13 + 4);
  ++*(_DWORD *)(v13 + 536);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v31 = (v30 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 520));
  v21 = ListEntry;
  *((_BYTE *)&ListEntry[7].Next + 8) = 5;
  v21[1].Next = (_SLIST_ENTRY *)v13;
  v22 = a8;
  v21[2].Next = Object;
  *((_QWORD *)&v21[1].Next + 1) = *a2;
  *((_DWORD *)&v21[2].Next + 2) = a3;
  v21[3].Next = v17;
  v21[4].Next = *(_SLIST_ENTRY **)(v22 + 16);
  *((_QWORD *)&v21[4].Next + 1) = a6;
  v21[5].Next = (_SLIST_ENTRY *)v22;
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  *(_DWORD *)(v24 + 56) = PagePriorityThread;
  v25 = ListEntry;
  *((_QWORD *)&ListEntry[5].Next + 1) = KeGetCurrentThread()->ApcState.Process;
  v25[6].Next = (_SLIST_ENTRY *)CurrentThread;
  LOBYTE(v25[7].Next) = *(_BYTE *)(v22 + 24);
  HIDWORD(v25[7].Next) = *(_DWORD *)(v22 + 28);
  *((_QWORD *)&v25[6].Next + 1) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread);
  if ( *(_DWORD *)(v22 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x42AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v25);
  return 1;
}

/*
 * XREFs of ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041059C
 * Callers:
 *     ExMoveFastResourceOwnershipWithFlags @ 0x14040D2D0 (ExMoveFastResourceOwnershipWithFlags.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x1402C5C00 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403C7520 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList2 @ 0x14040FD90 (ExpAddFastOwnerEntryToThreadList2.c)
 *     ExpRemoveEntryListAndClear2 @ 0x14041128C (ExpRemoveEntryListAndClear2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpMoveSharedFastResourceOwnershipWithFlags(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        ULONG_PTR a3,
        char a4)
{
  __int64 CurrentThread; // r13
  __int16 v5; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v10; // rdx
  __int64 v11; // r8
  char v12; // dl
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  struct _KTHREAD *v15; // r8
  ULONG_PTR v16; // r9
  ULONG_PTR v17; // r9
  unsigned __int8 v18; // r14
  unsigned int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett

  CurrentThread = (__int64)KeGetCurrentThread();
  v5 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v5 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && !_bittest((const signed __int32 *)&v10->116, 0xAu) && !v10->WaitBlock[3].SpareLong )
    goto LABEL_50;
  v11 = *(_QWORD *)(a2 + 16);
  if ( (struct _KTHREAD *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != v10 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v11 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  v12 = *(_BYTE *)(a2 + 37);
  if ( (v12 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 24);
    if ( v13 != BugCheckParameter2 )
    {
      if ( v13 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
    }
  }
  if ( (v11 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v12 & 2) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v12 & 2) << 15, 0LL);
  v14 = KeGetCurrentIrql();
  v15 = KeGetCurrentThread();
  if ( v14 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v14, 2uLL, 0LL);
  if ( v14 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v5 & 8) == 0 && (v15->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v14 && !_bittest((const signed __int32 *)&v15->116, 0xAu) && !v15->WaitBlock[3].SpareLong )
LABEL_50:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v16 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)v16 != v15 )
    KeBugCheckEx(0x1C6u, 9uLL, a3, v16, 0LL);
  if ( (*(_BYTE *)(a3 + 37) & 2) == 0 )
  {
    v17 = *(_QWORD *)(a3 + 24);
    if ( v17 )
    {
      if ( v17 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a3, v17, 0LL);
    }
  }
  if ( (a4 & 1) != 0 )
  {
    v18 = 1;
    if ( *(int *)(a2 + 32) > 1 )
      KeBugCheckEx(0x1C6u, 0x17uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    v18 = 0;
  }
  v19 = 0;
  *(_QWORD *)(a3 + 24) = BugCheckParameter2;
  *(_QWORD *)(a3 + 16) = CurrentThread | v18;
  *(_DWORD *)(a3 + 32) = 1;
  *(_BYTE *)(a3 + 36) = *(_BYTE *)(a2 + 36);
  _disable();
  ExpRemoveEntryListAndClear2(a2);
  if ( v18 )
  {
    v19 = *(unsigned __int8 *)(a3 + 36);
    KxAcquireSpinLock((PKSPIN_LOCK)(CurrentThread + 1672));
    ExpAddFastOwnerEntryToThreadList2(CurrentThread, v21, 1, (_QWORD *)a3);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(CurrentThread + 1672));
  }
  else
  {
    ExpAddFastOwnerEntryToThreadList2(CurrentThread, v20, 0, (_QWORD *)a3);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v24 = *SchedulerAssist;
    do
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange(SchedulerAssist, v24 & 0xFFDFFFFF, v24);
    }
    while ( v25 != v24 );
    if ( (v24 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  *(_DWORD *)(a2 + 32) = 0;
  *(_BYTE *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  if ( v19 )
    KeAbMarkCrossThreadReleasable((__int64)CurrentPrcb, (__int64 *)v19);
  if ( v18 )
    ObfReferenceObject((PVOID)CurrentThread);
}

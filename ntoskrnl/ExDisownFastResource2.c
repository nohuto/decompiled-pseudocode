/*
 * XREFs of ExDisownFastResource2 @ 0x14040E06C
 * Callers:
 *     ExDisownFastResource @ 0x1403C6EF0 (ExDisownFastResource.c)
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

LONG_PTR __fastcall ExDisownFastResource2(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  KSPIN_LOCK *CurrentThread; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett

  CurrentThread = (KSPIN_LOCK *)KeGetCurrentThread();
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    BugCheckParameter3 = BugCheckParameter2 + 64;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v5 = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (v5->MiscFlags & 0x400) == 0 && !v5->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v6 = *(_QWORD *)(BugCheckParameter3 + 16);
  if ( (struct _KTHREAD *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != v5 )
    KeBugCheckEx(0x1C6u, 9uLL, BugCheckParameter3, v6 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 37) & 2) == 0 )
  {
    v7 = *(_QWORD *)(BugCheckParameter3 + 24);
    if ( v7 != BugCheckParameter2 )
    {
      if ( v7 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 24));
    }
  }
  if ( (v6 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, BugCheckParameter3, 0LL, 0LL);
  _disable();
  if ( *(int *)(BugCheckParameter3 + 32) > 1 )
    KeBugCheckEx(0x1C6u, 0x12uLL, BugCheckParameter2, 0LL, 0LL);
  ExpRemoveEntryListAndClear2(BugCheckParameter3);
  KxAcquireSpinLock(CurrentThread + 209);
  *(_QWORD *)(BugCheckParameter3 + 16) |= 1uLL;
  v8 = (__int64 *)*(unsigned __int8 *)(BugCheckParameter3 + 36);
  LOBYTE(v9) = 1;
  ExpAddFastOwnerEntryToThreadList2(CurrentThread, v10, v9, BugCheckParameter3);
  KeReleaseSpinLockFromDpcLevel(CurrentThread + 209);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v13 = *SchedulerAssist;
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  if ( (_BYTE)v8 )
    KeAbMarkCrossThreadReleasable((__int64)CurrentPrcb, v8);
  return ObfReferenceObject(CurrentThread);
}

/*
 * XREFs of ExInitializeFastResourceAcquired2 @ 0x14040E404
 * Callers:
 *     ExInitializeFastResourceAcquired @ 0x14040D290 (ExInitializeFastResourceAcquired.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     ExInitializeFastResource2 @ 0x14040E2C0 (ExInitializeFastResource2.c)
 *     ExpAddFastOwnerEntryToThreadList2 @ 0x14040FD90 (ExpAddFastOwnerEntryToThreadList2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int16 __fastcall ExInitializeFastResourceAcquired2(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // r15d
  __int64 v7; // rdi
  unsigned __int32 v8; // eax
  __int64 v9; // rdx
  ULONG_PTR v10; // rbp
  char v11; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v14; // ett
  char v15; // al
  struct _KPRCB *v16; // rcx
  unsigned __int32 *v17; // r8
  unsigned __int32 v18; // ett

  CurrentThread = KeGetCurrentThread();
  v5 = BugCheckParameter3;
  v7 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  LOWORD(v8) = ExInitializeFastResource2(BugCheckParameter2, v5);
  v10 = BugCheckParameter2 + 64;
  if ( (v5 & 2) != 0 )
  {
    a3 = BugCheckParameter2 + 64;
    *(_QWORD *)BugCheckParameter2 |= 1uLL;
    *(_QWORD *)(BugCheckParameter2 + 80) = CurrentThread;
    *(_DWORD *)(BugCheckParameter2 + 96) = 1;
    if ( v7 )
    {
      v11 = 2 * *(_BYTE *)(v7 + 16);
      *(_BYTE *)(v7 + 18) = 1;
      *(_BYTE *)(BugCheckParameter2 + 100) = v11 | 1;
    }
    _disable();
    LOWORD(v8) = ExpAddFastOwnerEntryToThreadList2(CurrentThread, v9, 0LL, v10);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v8 = *SchedulerAssist;
      do
      {
        v9 = v8;
        LODWORD(v9) = v8 & 0xFFDFFFFF;
        v14 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v8 & 0xFFDFFFFF, v8);
      }
      while ( v14 != v8 );
      if ( (v8 & 0x200000) != 0 )
        LOWORD(v8) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  if ( (v5 & 4) != 0 )
  {
    *(_QWORD *)BugCheckParameter2 = *(_QWORD *)BugCheckParameter2 & 3LL | 4;
    if ( a3 != v10 )
      *(_QWORD *)(a3 + 24) = BugCheckParameter2;
    *(_QWORD *)(a3 + 16) = CurrentThread;
    *(_DWORD *)(a3 + 32) = 1;
    if ( v7 )
    {
      v15 = 2 * *(_BYTE *)(v7 + 16);
      *(_BYTE *)(v7 + 18) = 1;
      *(_BYTE *)(a3 + 36) = v15 | 1;
    }
    _disable();
    LOWORD(v8) = ExpAddFastOwnerEntryToThreadList2(CurrentThread, v9, 0LL, a3);
    v16 = KeGetCurrentPrcb();
    v17 = (unsigned __int32 *)v16->SchedulerAssist;
    if ( v17 )
    {
      _m_prefetchw(v17);
      v8 = *v17;
      do
      {
        v18 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)v17, v8 & 0xFFDFFFFF, v8);
      }
      while ( v18 != v8 );
      if ( (v8 & 0x200000) != 0 )
        LOWORD(v8) = KiRemoveSystemWorkPriorityKick(v16);
    }
    _enable();
  }
  return v8;
}

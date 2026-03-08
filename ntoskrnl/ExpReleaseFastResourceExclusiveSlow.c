/*
 * XREFs of ExpReleaseFastResourceExclusiveSlow @ 0x140410F34
 * Callers:
 *     ExpReleaseFastResourceExclusive2 @ 0x140410E88 (ExpReleaseFastResourceExclusive2.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402916B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExpCommitWakeFastResource @ 0x14040FE18 (ExpCommitWakeFastResource.c)
 *     ExpPrepareToWakeFastResourceExclusive @ 0x140410920 (ExpPrepareToWakeFastResourceExclusive.c)
 *     ExpUpdateLockWordForRelease @ 0x1404112C0 (ExpUpdateLockWordForRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseFastResourceExclusiveSlow(KSPIN_LOCK *BugCheckParameter2, unsigned __int8 a2)
{
  ULONG_PTR v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+90h] [rbp+38h] BYREF
  int v18; // [rsp+98h] [rbp+40h] BYREF
  volatile signed __int32 *v19; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+50h] BYREF

  v20 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v6 = 4;
    if ( CurrentIrql != 2 )
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(BugCheckParameter2 + 6, &LockHandle);
  _m_prefetchw(BugCheckParameter2);
  if ( (*BugCheckParameter2 & 2) != 0 )
  {
    ExpPrepareToWakeFastResourceExclusive((__int64)BugCheckParameter2, (__int64 *)&v19, &v20, &v17, &v18);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpCommitWakeFastResource(&v19, v8, v9, v18);
  }
  else
  {
    LOBYTE(v7) = 1;
    ExpUpdateLockWordForRelease(BugCheckParameter2, 0LL, v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (_BYTE)v3 )
    return KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v3);
  return result;
}

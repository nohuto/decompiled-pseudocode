/*
 * XREFs of MiAttachThreadDone @ 0x14029C9D4
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1402FB050 (MmQueryCommitReleaseState.c)
 *     MiUnlockStealVm @ 0x1403B7AF8 (MiUnlockStealVm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140617408 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v9 = *(_DWORD *)(a1 + 184);
  BYTE1(v9) = BYTE1(v9) & 0xF | (16 * ((BYTE1(v9) >> 4) - 1));
  *(_WORD *)(a1 + 184) = v9;
  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    KeSignalGate(v2, 1LL);
  result = KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}

/*
 * XREFs of MiUpdateAvailableEvents @ 0x1403A9340
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIncreaseAvailablePages @ 0x140288238 (MiIncreaseAvailablePages.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14034FE70 (MiUnlinkNodeLargePageHelper.c)
 *     MiDecreaseAvailablePages @ 0x1403504C0 (MiDecreaseAvailablePages.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403A9280 (MiUpdatePageThresholdsDpc.c)
 *     MiInitializeMemoryEvents @ 0x1408096D8 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateAvailableEvents(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  struct _KEVENT *v3; // rcx
  struct _KEVENT *v4; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 1984, &LockHandle);
  v2 = a1[2152];
  v3 = (struct _KEVENT *)a1[38];
  if ( v2 <= a1[2019] )
    KeSetEvent(v3, 0, 0);
  else
    KeResetEvent(v3);
  v4 = (struct _KEVENT *)a1[39];
  if ( v2 <= a1[2020] )
    KeResetEvent(v4);
  else
    KeSetEvent(v4, 0, 0);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}

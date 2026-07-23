/*
 * XREFs of MiDeleteExtentPfns @ 0x1405406C0
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C4EE0 (MiAddPhysicalMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541830 (MiPurgeBadFileOnlyPages.c)
 *     MiWaitForExtentDeletions @ 0x140542620 (MiWaitForExtentDeletions.c)
 *     MiWakeExtentDeletionWaiters @ 0x140542740 (MiWakeExtentDeletionWaiters.c)
 *     MiRemovePhysicalMemory @ 0x1408C5FDC (MiRemovePhysicalMemory.c)
 */

char __fastcall MiDeleteExtentPfns(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 )
  {
    v3 = KeAbPreAcquire((ULONG_PTR)&qword_140C4CB10, 0LL, 0);
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
  }
  while ( 1 )
  {
    MiPurgeBadFileOnlyPages(a1, a2);
    while ( qword_140C4CAE8 )
      MiRemovePhysicalMemory(0LL);
    KeAcquireInStackQueuedSpinLock(&qword_140C51DA0, &LockHandle);
    v4 = qword_140C4CAE8;
    if ( !v2 )
    {
      if ( qword_140C4CAE8 || byte_140C4CB31 == 1 )
      {
        LOBYTE(v5) = MiWaitForExtentDeletions(&LockHandle);
        return v5;
      }
      goto LABEL_12;
    }
    if ( !qword_140C4CAE8 )
      break;
LABEL_12:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(v5) = KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v5) = KeGetCurrentIrql();
        if ( (unsigned __int8)v5 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          a1 = (unsigned int)LockHandle.OldIrql + 1;
          a2 = -1LL << (LockHandle.OldIrql + 1);
          v5 = ~(unsigned __int16)a2;
          v9 = (v5 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v5;
          if ( v9 )
            LOBYTE(v5) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !v4 )
      goto LABEL_22;
  }
  LOBYTE(v5) = MiWakeExtentDeletionWaiters(&LockHandle);
LABEL_22:
  if ( v2 )
    LOBYTE(v5) = KeAbPostRelease((ULONG_PTR)&qword_140C4CB10);
  return v5;
}

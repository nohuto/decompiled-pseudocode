/*
 * XREFs of MiGetPrivatePageCount @ 0x1402FD46C
 * Callers:
 *     MiAllocateCrcList @ 0x1407961D4 (MiAllocateCrcList.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiGetPrivatePageCount(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  bool v8; // cc
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v3 = (_QWORD *)(a1 + 16928);
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v5 = v4[14];
    v6 = v2;
    v4 = (_QWORD *)*v4;
    v7 = v2 + v5;
    v8 = v7 <= v2;
    v2 = v7;
    if ( v8 )
      v2 = v6;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v2;
}

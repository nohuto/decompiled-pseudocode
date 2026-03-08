/*
 * XREFs of MiInsertNewCombineBlocks @ 0x1402A15C4
 * Callers:
 *     MiAllocateCombineBlock @ 0x1402A14C4 (MiAllocateCombineBlock.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockPagedRange @ 0x14072601C (MiLockPagedRange.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned int)MiLockPagedRange(a2, 3960LL) )
    return 0LL;
  memset(v2, 0, 0xF78uLL);
  v4 = 54;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v5 = (__int64 *)(a1 + 72);
  do
  {
    v6 = *v5;
    if ( *(__int64 **)(*v5 + 8) != v5 )
      __fastfail(3u);
    *v2 = v6;
    v2[1] = v5;
    *(_QWORD *)(v6 + 8) = v2;
    *v5 = (__int64)v2;
    v2 += 9;
    --v4;
  }
  while ( v4 );
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v2;
}

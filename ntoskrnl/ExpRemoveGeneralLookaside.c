/*
 * XREFs of ExpRemoveGeneralLookaside @ 0x1402EC404
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1402EC300 (ExDeletePagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x1402EC380 (ExDeleteLookasideListEx.c)
 *     ExDeleteNPagedLookasideList @ 0x1403C0DB0 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

PVOID __fastcall ExpRemoveGeneralLookaside(KSPIN_LOCK *a1, __int64 a2)
{
  PVOID *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 **v7; // r8
  PVOID result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v4 = (PVOID *)(a2 + 64);
  v5 = KeAcquireSpinLockRaiseToDpc(a1);
  v6 = (__int64 *)*v4;
  v7 = *(__int64 ***)(a2 + 72);
  if ( *((_QWORD *)*v4 + 1) != a2 + 64 || *v7 != (__int64 *)v4 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  KxReleaseSpinLock((volatile signed __int64 *)a1);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  *(_WORD *)(a2 + 16) = 0;
  result = MmBadPointer;
  *v4 = MmBadPointer;
  return result;
}

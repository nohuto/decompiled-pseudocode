/*
 * XREFs of ExpDeleteResource @ 0x1403CEE78
 * Callers:
 *     ExDeleteFastResource @ 0x1403CEDE0 (ExDeleteFastResource.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpDeleteResource(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v2 = ExAcquireSpinLockExclusive(&ExpResourceSpinLock);
  v3 = (_QWORD *)a1[1];
  v4 = v2;
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v3 != a1 )
    __fastfail(3u);
  *v3 = v5;
  *(_QWORD *)(v5 + 8) = v3;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ExpResourceSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  *a1 = 0LL;
  a1[1] = 0LL;
}

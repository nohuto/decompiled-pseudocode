/*
 * XREFs of PspRemovePartitionFromGlobalList @ 0x1405A41A8
 * Callers:
 *     PspDeletePartition @ 0x1409B36F0 (PspDeletePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PspRemovePartitionFromGlobalList(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  v1 = (_QWORD *)(a1 + 48);
  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = *v1;
  v4 = (_QWORD *)v1[1];
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v4 != v1 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspActivePartitionListLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
}

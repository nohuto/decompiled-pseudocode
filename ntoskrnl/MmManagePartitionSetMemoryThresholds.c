/*
 * XREFs of MmManagePartitionSetMemoryThresholds @ 0x1406598F8
 * Callers:
 *     NtManagePartition @ 0x140705650 (NtManagePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmManagePartitionSetMemoryThresholds(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  KIRQL v5; // al
  unsigned __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v3 = *a1;
  if ( *(_DWORD *)a2 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 < *(_QWORD *)(a2 + 8) )
  {
    if ( v4 )
      return 3221225485LL;
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 224));
  *(_QWORD *)(v3 + 16136) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 16144) = *(_QWORD *)(a2 + 16);
  v6 = v5;
  *(_BYTE *)(v3 + 12) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 224));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  KeSetEvent((PRKEVENT)(*(_QWORD *)(v3 + 16920) + 96LL), 0, 0);
  return 0LL;
}

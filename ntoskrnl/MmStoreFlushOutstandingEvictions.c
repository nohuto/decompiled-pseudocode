/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x14065AA54
 * Callers:
 *     MiStoreDeletePartition @ 0x140659A64 (MiStoreDeletePartition.c)
 *     SmStoreCompressionStart @ 0x1409D4A38 (SmStoreCompressionStart.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall MmStoreFlushOutstandingEvictions(_QWORD *a1)
{
  __int64 v1; // rdi
  volatile LONG *v2; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  v1 = *a1;
  v2 = (volatile LONG *)(*a1 + 1224LL);
  v3 = ExAcquireSpinLockExclusive(v2);
  if ( !*(_DWORD *)(v1 + 1200) )
    KeResetEvent((PRKEVENT)(v1 + 1312));
  ++*(_DWORD *)(v1 + 1200);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  KeSetEvent((PRKEVENT)(v1 + 1240), 0, 0);
  return KeWaitForSingleObject((PVOID)(v1 + 1312), WrKernel, 0, 0, 0LL);
}

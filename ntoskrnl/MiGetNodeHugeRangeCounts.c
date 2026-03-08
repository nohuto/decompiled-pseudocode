/*
 * XREFs of MiGetNodeHugeRangeCounts @ 0x14061D9D0
 * Callers:
 *     MmFillEtwHugeIoSpaceInformation @ 0x1406153F0 (MmFillEtwHugeIoSpaceInformation.c)
 *     MmManagePartitionMemoryInformation @ 0x1407059DC (MmManagePartitionMemoryInformation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiGetNodeHugeRangeCounts(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  volatile LONG *v4; // rbp
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  *a3 = 0LL;
  v4 = (volatile LONG *)(a1 + 23104);
  *a4 = 0LL;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 23104));
  if ( MmNumberOfChannels )
  {
    v10 = (__int64 *)(a1 + 22896);
    v11 = (unsigned int)MmNumberOfChannels;
    do
    {
      *a3 += *(v10 - 4);
      v12 = *v10++;
      *a4 += v12;
      --v11;
    }
    while ( v11 );
  }
  *a2 = *(_QWORD *)(a1 + 22856);
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
}

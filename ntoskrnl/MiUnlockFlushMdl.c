/*
 * XREFs of MiUnlockFlushMdl @ 0x1402D6F00
 * Callers:
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x140284DD0 (MiUnlockMdlWritePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140332B34 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRetardMdl @ 0x14061A580 (MiRetardMdl.c)
 */

void __fastcall MiUnlockFlushMdl(PMDL MemoryDescriptorList, __int64 a2, int *a3)
{
  volatile LONG *v6; // rsi
  KIRQL v7; // al
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    MiRetardMdl(MemoryDescriptorList);
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  MiUnlockMdlWritePages(MemoryDescriptorList, a3);
  v6 = (volatile LONG *)(a2 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  --*(_DWORD *)(a2 + 76);
  v8 = v7;
  v9 = (_QWORD *)MiBuildWakeList(a2, 8LL);
  if ( (_BYTE)v8 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
  }
  if ( v9 )
    MiReleaseControlAreaWaiters(v9);
}

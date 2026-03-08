/*
 * XREFs of MiUnlockIoPfnTree @ 0x14029B9B4
 * Callers:
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiLookupIoPageNode @ 0x1403AB558 (MiLookupIoPageNode.c)
 *     MiDeleteStaleCacheMaps @ 0x14062B5C0 (MiDeleteStaleCacheMaps.c)
 *     MiIsProbeActive @ 0x14062BDE8 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x14062C04C (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062C34C (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiMarkHugeRangeTransition @ 0x14062C4CC (MiMarkHugeRangeTransition.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockIoPfnTree(unsigned __int8 a1, char a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v9; // eax
  bool v10; // zf

  v2 = a1;
  if ( (a2 & 1) != 0 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577) + 384LL));
  }
  else
  {
    v4 = qword_140C65720;
    v5 = 0;
    if ( KeNumberNodes != 1 )
    {
      do
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 368) + 384LL));
        v4 += 376LL;
        ++v5;
      }
      while ( v5 < (unsigned int)(unsigned __int16)KeNumberNodes - 1 );
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 368) + 384LL));
  }
  if ( (a2 & 4) == 0 )
  {
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
  }
}

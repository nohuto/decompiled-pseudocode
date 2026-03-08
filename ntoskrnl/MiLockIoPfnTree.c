/*
 * XREFs of MiLockIoPfnTree @ 0x14029C1B0
 * Callers:
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiLookupIoPageNode @ 0x1403AB558 (MiLookupIoPageNode.c)
 *     MiDeleteStaleCacheMaps @ 0x14062B5C0 (MiDeleteStaleCacheMaps.c)
 *     MiFreezeIoPfnNode @ 0x14062BCF8 (MiFreezeIoPfnNode.c)
 *     MiIsProbeActive @ 0x14062BDE8 (MiIsProbeActive.c)
 *     MiMakeIoRangePermanent @ 0x14062C04C (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062C34C (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiMarkHugeRangeTransition @ 0x14062C4CC (MiMarkHugeRangeTransition.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

unsigned __int8 __fastcall MiLockIoPfnTree(char a1)
{
  __int64 v1; // r8
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // r14
  unsigned int v5; // ebx
  _DWORD *SchedulerAssist; // r11
  __int64 v7; // r14

  LODWORD(v1) = 4;
  if ( (a1 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql != 2 )
        v1 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v1;
    }
  }
  if ( (a1 & 1) != 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577) + 384LL));
  }
  else
  {
    v4 = qword_140C65720;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(qword_140C65720 + 368) + 384LL));
    v5 = 1;
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      v7 = v4 + 744;
      do
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v7 + 384LL));
        v7 += 376LL;
        ++v5;
      }
      while ( v5 < (unsigned __int16)KeNumberNodes );
    }
  }
  return CurrentIrql;
}

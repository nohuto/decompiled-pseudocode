/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14045E6CE
 * Callers:
 *     VmpFlushTb @ 0x14045E4DA (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x1405F6DF0 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x1405F6F6C (VmpInsertMemoryRange.c)
 *     VmpInvalidateSlatBatched @ 0x1405F73F8 (VmpInvalidateSlatBatched.c)
 *     VmpMergeMemoryRanges @ 0x1405F7BB4 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRange @ 0x1405F7F20 (VmpPinMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x1405F88E4 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405F8CA0 (VmpSplitMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x1405F9144 (VmpUnpinMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v3; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v3) = 0x8000;
    else
      v3 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v3;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}

/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14045F78C
 * Callers:
 *     VmpFlushTb @ 0x140629B70 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x140629D0C (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x140629E84 (VmpInsertMemoryRange.c)
 *     VmpInvalidateSlatBatched @ 0x14062A30C (VmpInvalidateSlatBatched.c)
 *     VmpMergeMemoryRanges @ 0x14062AAC8 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRange @ 0x14062AE30 (VmpPinMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14062BA64 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14062BE2C (VmpSplitMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x14062C2E4 (VmpUnpinMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}

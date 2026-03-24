/*
 * XREFs of VmpProcessContextLockShared @ 0x1405A49D4
 * Callers:
 *     VmColdPagesHint @ 0x1405A27D0 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1405A2B6C (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405A4584 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1405A4BEC (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x1405A5144 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031C8D0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockShared(PEX_SPIN_LOCK SpinLock)
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
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  return CurrentIrql;
}

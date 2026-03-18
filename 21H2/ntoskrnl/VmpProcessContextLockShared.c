/*
 * XREFs of VmpProcessContextLockShared @ 0x14045F804
 * Callers:
 *     VmColdPagesHint @ 0x140628D00 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x14062908C (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x14062B1A8 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14062B7FC (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14062BE2C (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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

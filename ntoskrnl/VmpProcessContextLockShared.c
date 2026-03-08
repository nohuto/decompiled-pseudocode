/*
 * XREFs of VmpProcessContextLockShared @ 0x14045E744
 * Callers:
 *     VmpAccessFaultBatch @ 0x14045DEF6 (VmpAccessFaultBatch.c)
 *     VmpQueryAccessedState @ 0x14045E7BA (VmpQueryAccessedState.c)
 *     VmColdPagesHint @ 0x1405F6510 (VmColdPagesHint.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405F828C (VmpPrefetchVirtualAddresses.c)
 *     VmpSplitMemoryRange @ 0x1405F8CA0 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockShared(PEX_SPIN_LOCK SpinLock)
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
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  return CurrentIrql;
}

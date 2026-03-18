/*
 * XREFs of RtlpAcquirePropStoreLockExclusive @ 0x1405E7AF0
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x1405E7140 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E7300 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x1405E7870 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x1405E79C0 (RtlRemovePropertyStore.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

unsigned __int8 __fastcall RtlpAcquirePropStoreLockExclusive(PEX_SPIN_LOCK SpinLock)
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

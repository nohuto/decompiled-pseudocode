/*
 * XREFs of IoAcquireCancelSpinLock @ 0x1402CFAA0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  KIRQL CurrentIrql; // bl
  void *ArbitraryUserPointer; // rcx
  volatile __int64 *v4; // r8
  __int64 v5; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v7; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v4 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 15);
  v5 = (__int64)ArbitraryUserPointer + 112;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v4);
  }
  else if ( _InterlockedExchange64(v4, v5) )
  {
    KxWaitForLockOwnerShip(v5);
  }
  *Irql = CurrentIrql;
}

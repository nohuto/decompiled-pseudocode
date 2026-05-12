/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x1C000B9E8
 * Callers:
 *     StorportTimerDpc @ 0x1C0001110 (StorportTimerDpc.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000B910 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0016A64 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x1C002E2E0 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0031CDC (RaidInitializePerfOptsPassive.c)
 *     StorAcquireSpinLockEx @ 0x1C00381A8 (StorAcquireSpinLockEx.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005A08 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 720) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 712), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}

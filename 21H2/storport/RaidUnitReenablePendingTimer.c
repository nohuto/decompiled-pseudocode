/*
 * XREFs of RaidUnitReenablePendingTimer @ 0x1C0005910
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0004470 (RaidUnitClaimIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001AB28 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C001D28C (RaUnitRemoveDeviceIrp.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C0041370 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0041830 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0042120 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00424B0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitReenablePendingTimer(__int64 a1, char a2)
{
  char v2; // r8
  int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // r15
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a1 + 3216);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = v2 != 0 ? 1 : 4;
  v6 = v2 != 0 ? 0xFFFFFF06 : 0;
  v7 = v2 != 0 ? 500 : 2000;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( (*(_BYTE *)(a1 + 449) & 0x20) != 0 || a2 )
  {
    KeSetCoalescableTimer((PKTIMER)(a1 + 928), (LARGE_INTEGER)(-10000 * v7), v7, v6 + 300, (PKDPC)(a1 + 992));
    *(_DWORD *)(*(_QWORD *)(a1 + 504) + 4LL) = v5;
    *(_BYTE *)(a1 + 449) &= ~0x20u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

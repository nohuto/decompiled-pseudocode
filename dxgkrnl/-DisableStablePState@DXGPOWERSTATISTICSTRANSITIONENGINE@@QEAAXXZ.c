/*
 * XREFs of ?DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C00545C4
 * Callers:
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C02B1E5C (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::DisableStablePState(KSPIN_LOCK *this)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  *((_BYTE *)this + 89) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

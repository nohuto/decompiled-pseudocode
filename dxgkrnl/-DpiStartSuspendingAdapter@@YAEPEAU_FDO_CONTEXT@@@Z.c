/*
 * XREFs of ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C001AA78
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiSetDevicePowerTransitionState @ 0x1C001AFB8 (DpiSetDevicePowerTransitionState.c)
 */

char __fastcall DpiStartSuspendingAdapter(KSPIN_LOCK *a1)
{
  char v2; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  KeAcquireInStackQueuedSpinLock(a1 + 512, &LockHandle);
  if ( *((_DWORD *)a1 + 1040) == 1 )
  {
    DpiSetDevicePowerTransitionState(a1, 2LL);
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}

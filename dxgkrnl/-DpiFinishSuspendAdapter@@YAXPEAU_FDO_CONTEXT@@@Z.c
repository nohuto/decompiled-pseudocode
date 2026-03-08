/*
 * XREFs of ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C001AAEC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiSetDevicePowerTransitionState @ 0x1C001AFB8 (DpiSetDevicePowerTransitionState.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C001B010 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C001B144 (DpiRequestDevicePowerIrp.c)
 */

void __fastcall DpiFinishSuspendAdapter(struct _FDO_CONTEXT *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 512, &LockHandle);
  if ( *((_DWORD *)a1 + 1040) == 2 )
  {
    WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
    *((_DWORD *)a1 + 1000) = 1;
    KeResetEvent((PRKEVENT)((char *)a1 + 4112));
    if ( *((_DWORD *)a1 + 1041) )
    {
      WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
      DpiRequestDevicePowerIrp(a1, 4LL);
      DpiSetDevicePowerTransitionState(a1, 4LL);
      DpiCancelSuspendAdapterTimer(a1);
    }
    else
    {
      DpiSetDevicePowerTransitionState(a1, 3LL);
    }
  }
  else
  {
    WdLogSingleEntry3(9LL, a1, 1LL, 0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

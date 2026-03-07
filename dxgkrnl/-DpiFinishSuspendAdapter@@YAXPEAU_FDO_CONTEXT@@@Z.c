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

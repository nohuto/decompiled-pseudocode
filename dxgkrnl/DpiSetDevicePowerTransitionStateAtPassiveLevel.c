void __fastcall DpiSetDevicePowerTransitionStateAtPassiveLevel(__int64 a1, int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4096), &LockHandle);
  if ( (_DWORD)v3 != 5 || *(_DWORD *)(a1 + 4160) == 4 )
  {
    v6 = v3;
    WdLogSingleEntry3(9LL, a1, v3, 0LL);
    *(_DWORD *)(a1 + 4160) = v3;
  }
  else
  {
    v6 = v3;
  }
  if ( a3 && !*(_DWORD *)(a1 + 4164) )
  {
    WdLogSingleEntry3(9LL, a1, v6, 1LL);
    DxgkReportDevicePoweredOn(*(_QWORD *)(a1 + 3912));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

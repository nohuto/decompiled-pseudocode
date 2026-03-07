void __fastcall DpiCancelSuspendAdapterTimer(__int64 a1)
{
  char v2; // di
  __int64 v3; // r8
  BOOLEAN v4; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4096), &LockHandle);
    v2 = 1;
  }
  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      &DxgkControlGuid_Context,
      &Dxgk_DevicePowerRequiredTimer,
      v3,
      *(_QWORD *)(a1 + 3912),
      0);
  v4 = KeCancelTimer((PKTIMER)(a1 + 4176));
  if ( v2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v4 )
      KeFlushQueuedDpcs();
  }
}

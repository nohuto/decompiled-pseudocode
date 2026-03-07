char __fastcall DpiIsNeedWakeUpAdapter(__int64 a1)
{
  __int64 v1; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 4096), &LockHandle);
  LOBYTE(v1) = *(_DWORD *)(v1 + 4160) != 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v1;
}

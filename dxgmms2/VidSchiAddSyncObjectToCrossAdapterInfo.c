void __fastcall VidSchiAddSyncObjectToCrossAdapterInfo(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 208) + 8LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  _InterlockedIncrement(*(volatile signed __int32 **)(a1 + 208));
  v3 = (_QWORD *)(a1 + 144);
  v4 = *(_QWORD *)(a1 + 208) + 16LL;
  v5 = *(_QWORD *)v4;
  if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 )
    __fastfail(3u);
  *(_QWORD *)(a1 + 152) = v4;
  *v3 = v5;
  *(_QWORD *)(v5 + 8) = v3;
  *(_QWORD *)v4 = v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

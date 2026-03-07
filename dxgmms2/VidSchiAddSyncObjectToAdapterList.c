void __fastcall VidSchiAddSyncObjectToAdapterList(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3184), &LockHandle);
  v4 = (__int64 *)(a1 + 1704);
  v5 = (_QWORD *)(a2 + 192);
  v6 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    __fastfail(3u);
  *v5 = v6;
  v5[1] = v4;
  *(_QWORD *)(v6 + 8) = v5;
  *v4 = (__int64)v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

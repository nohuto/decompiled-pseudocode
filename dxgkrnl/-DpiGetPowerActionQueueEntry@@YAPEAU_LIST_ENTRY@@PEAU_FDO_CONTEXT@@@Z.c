struct _LIST_ENTRY *__fastcall DpiGetPowerActionQueueEntry(KSPIN_LOCK *a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 512, &LockHandle);
  v2 = (__int64 **)(a1 + 498);
  v3 = 0LL;
  v4 = *v2;
  if ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    if ( (__int64 **)v4[1] != v2 || (v5 = *v4, *(__int64 **)(v5 + 8) != v3) )
      __fastfail(3u);
    *v2 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v2;
    *v3 = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (struct _LIST_ENTRY *)v3;
}

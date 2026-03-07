struct DXGPROCESS *__fastcall DXGGLOBAL::SearchDxgThreadList(KSPIN_LOCK *this, struct _ETHREAD *a2)
{
  __int64 *v4; // rdi
  __int64 ***v5; // rbx
  __int64 **i; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(this + 223, &LockHandle);
  v5 = (__int64 ***)(this + 65);
  for ( i = *v5; i != (__int64 **)v5; i = (__int64 **)*i )
  {
    if ( i[2] == (__int64 *)a2 )
    {
      v4 = i[3];
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (struct DXGPROCESS *)v4;
}

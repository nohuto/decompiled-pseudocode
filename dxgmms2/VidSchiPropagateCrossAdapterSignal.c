void __fastcall VidSchiPropagateCrossAdapterSignal(_QWORD *a1)
{
  KSPIN_LOCK *v2; // rcx
  _QWORD **v3; // rdi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)(a1[26] + 8LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v2, &LockHandle);
  v3 = (_QWORD **)(a1[26] + 16LL);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
  {
    if ( i - 18 != a1 )
      ((void (*)(void))i[9])();
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}

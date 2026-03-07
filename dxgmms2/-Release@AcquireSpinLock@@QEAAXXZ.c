void __fastcall AcquireSpinLock::Release(AcquireSpinLock *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rcx

  if ( *((_BYTE *)this + 32) )
  {
    v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
    if ( *((_BYTE *)this + 33) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v2);
    else
      KeReleaseInStackQueuedSpinLock(v2);
    *((_BYTE *)this + 32) = 0;
  }
}

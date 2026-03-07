void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePStateCeiling(KSPIN_LOCK *this, unsigned int a2)
{
  bool v4; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 < *(_DWORD *)this[2] || a2 == -1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
    if ( a2 == -1 )
    {
      *((_DWORD *)this + 23) = 0;
    }
    else
    {
      v4 = *((_BYTE *)this + 88) == 1;
      *((_DWORD *)this + 23) = 2;
      *((_DWORD *)this + 24) = a2;
      if ( !v4 && *((_DWORD *)this + 15) < a2 )
        DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, a2);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}

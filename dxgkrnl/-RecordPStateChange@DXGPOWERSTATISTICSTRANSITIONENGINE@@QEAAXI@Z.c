void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordPStateChange(LARGE_INTEGER *this, DWORD a2)
{
  bool v4; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v6; // rcx
  LARGE_INTEGER v7; // r9
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&this[3].QuadPart, &LockHandle);
  v4 = this[7].HighPart == -1;
  this[7].LowPart = a2;
  if ( v4 )
    this[7].HighPart = a2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = this[6];
  this[6] = PerformanceCounter;
  if ( v6.QuadPart )
  {
    v7 = this[4];
    if ( v7.QuadPart > this[5].QuadPart )
    {
      v8 = *(unsigned int *)(this[2].QuadPart + 4LL * this[7].LowPart + 4);
      this[4] = PerformanceCounter;
      this[9].QuadPart += (PerformanceCounter.QuadPart - v7.QuadPart) * v8;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

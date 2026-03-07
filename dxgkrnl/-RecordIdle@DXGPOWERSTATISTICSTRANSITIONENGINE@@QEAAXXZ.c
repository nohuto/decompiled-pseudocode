void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordIdle(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v3; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&this[8], 0xFFFFFFFF) == 1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&this[3].QuadPart, &LockHandle);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3 = this[4];
    this[5] = PerformanceCounter;
    if ( v3.QuadPart )
      this[9].QuadPart += (PerformanceCounter.QuadPart - v3.QuadPart)
                        * *(unsigned int *)(this[2].QuadPart + 4LL * this[7].LowPart + 4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}

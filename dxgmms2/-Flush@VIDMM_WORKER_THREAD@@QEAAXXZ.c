void __fastcall VIDMM_WORKER_THREAD::Flush(VIDMM_WORKER_THREAD *this)
{
  __int64 v2; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  *((_QWORD *)this + 5) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 6) == 1 )
  {
    VIDMM_WORKER_THREAD::TransitionToState((__int64)this, 6);
    VIDMM_WORKER_THREAD::TransitionToState((__int64)this, 1);
  }
  else
  {
    WdLogSingleEntry1(1LL, *((int *)this + 6));
    DxgkLogInternalTriageEvent(v2, 0x40000LL);
  }
  *((_QWORD *)this + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
  KeLeaveCriticalRegion();
}

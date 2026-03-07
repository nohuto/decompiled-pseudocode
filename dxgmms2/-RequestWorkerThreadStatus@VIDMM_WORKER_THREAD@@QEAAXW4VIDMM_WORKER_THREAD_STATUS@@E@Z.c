void __fastcall VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(__int64 a1, int a2, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx

  v4 = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 32, 0LL);
  *(_QWORD *)(a1 + 40) = KeGetCurrentThread();
  if ( *(_DWORD *)(a1 + 24) != 5 || a3 || (_DWORD)v4 == 3 )
  {
    if ( *(_DWORD *)(a1 + 28) != (_DWORD)v4 )
      VIDMM_WORKER_THREAD::TransitionToState(a1, (unsigned int)v4);
  }
  else
  {
    WdLogSingleEntry1(1LL, v4);
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 32, 0LL);
  KeLeaveCriticalRegion();
}

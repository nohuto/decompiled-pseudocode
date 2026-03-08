/*
 * XREFs of ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ED11C
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00E2184 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C00B40F0 (-TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 */

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

/*
 * XREFs of ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C00B4048
 * Callers:
 *     ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXE@Z @ 0x1C00B3FEC (-ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXE@Z.c)
 *     ?SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z @ 0x1C00B400C (-SuspendWorkerThread@VIDMM_GLOBAL@@QEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@@Z.c)
 *     ?Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z @ 0x1C00BC7C4 (-Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C00B40F0 (-TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z.c)
 */

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

/*
 * XREFs of ?ResumeWorkerThread@VIDMM_GLOBAL@@QEAAXE@Z @ 0x1C00B3FEC
 * Callers:
 *     VidMmResumeWorkerThread @ 0x1C0017A20 (VidMmResumeWorkerThread.c)
 * Callees:
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C00B4048 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ResumeWorkerThread(VIDMM_GLOBAL *this, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(*(_QWORD *)this, 1LL, a3);
}

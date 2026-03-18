/*
 * XREFs of ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C00B5710
 * Callers:
 *     <none>
 * Callees:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B5730 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 */

void __fastcall VidMmWorkerThreadProc(VIDMM_WORKER_THREAD *StartContext)
{
  VIDMM_WORKER_THREAD::Run(StartContext);
}

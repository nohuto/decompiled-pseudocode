/*
 * XREFs of ?TransitionToState@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@@Z @ 0x1C00B40F0
 * Callers:
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C00B4048 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 *     ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ED11C (-Flush@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall VIDMM_WORKER_THREAD::TransitionToState(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 28) = a2;
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 176) + 24LL), 0, 0);
  return KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 176) + 48LL), Executive, 0, 0, 0LL);
}

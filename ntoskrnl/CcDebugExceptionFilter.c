/*
 * XREFs of CcDebugExceptionFilter @ 0x140409EA0
 * Callers:
 *     CcWorkerThread @ 0x140215D70 (CcWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x14053741C (CcAsyncLazywriteWorker.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CcDebugExceptionFilter(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x5155BuLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}

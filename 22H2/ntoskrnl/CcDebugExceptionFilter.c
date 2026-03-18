/*
 * XREFs of CcDebugExceptionFilter @ 0x14040F448
 * Callers:
 *     CcWorkerThread @ 0x140298820 (CcWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x1405398EC (CcAsyncLazywriteWorker.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CcDebugExceptionFilter(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x51558uLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}

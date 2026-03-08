/*
 * XREFs of ExQueueDebuggerWorker @ 0x14036B1C0
 * Callers:
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140B6383C (ExpWorkerInitialization.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 */

__int64 ExQueueDebuggerWorker()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&ExpDebuggerDpc, 0LL, 0LL, 0LL, 0);
  return result;
}

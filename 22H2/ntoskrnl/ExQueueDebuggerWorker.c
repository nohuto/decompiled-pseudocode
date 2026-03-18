/*
 * XREFs of ExQueueDebuggerWorker @ 0x14029381C
 * Callers:
 *     KdExitDebugger @ 0x140AB1008 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140B674AC (ExpWorkerInitialization.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 */

__int64 ExQueueDebuggerWorker()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&ExpDebuggerDpc, 0LL, 0LL, 0LL, 0);
  return result;
}

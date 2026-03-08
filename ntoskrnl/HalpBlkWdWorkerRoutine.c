/*
 * XREFs of HalpBlkWdWorkerRoutine @ 0x140528D20
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkWdFatalExceptionCheck @ 0x140528C94 (HalpBlkWdFatalExceptionCheck.c)
 */

ULONG_PTR HalpBlkWdWorkerRoutine()
{
  unsigned int i; // edi
  ULONG_PTR result; // rax

  for ( i = 0; i < (unsigned int)HalpBlkNumberProcessors; ++i )
    result = HalpBlkWdFatalExceptionCheck(i);
  _InterlockedExchange(&HalpBlkWdPollingInProgress, 0);
  return result;
}

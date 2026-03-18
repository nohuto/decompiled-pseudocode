/*
 * XREFs of PopIrpWorkerControl @ 0x1403B0E50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PopCreateDynamicIrpWorker @ 0x1403418B8 (PopCreateDynamicIrpWorker.c)
 */

void __noreturn PopIrpWorkerControl()
{
  char v0; // bl

  while ( 1 )
  {
    v0 = 0;
    KeWaitForSingleObject(&PopIrpWorkerControlEvent, Executive, 0, 0, 0LL);
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    PopIrpWorkerRequested = 0;
    if ( PopCreateIrpWorkerAllowed )
    {
      ++PopIrpWorkerPendingCount;
      v0 = 1;
    }
    ExReleaseFastMutex(&PopIrpWorkerMutex);
    if ( v0 )
      PopCreateDynamicIrpWorker(0LL);
  }
}

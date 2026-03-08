/*
 * XREFs of PopIrpWorkerControl @ 0x1403AC100
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PopCreateDynamicIrpWorker @ 0x140300A40 (PopCreateDynamicIrpWorker.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
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

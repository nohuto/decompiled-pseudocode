/*
 * XREFs of PopAcquireIrpWorkerLock @ 0x140577B10
 * Callers:
 *     PopIrpWorker @ 0x14039F770 (PopIrpWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 */

void PopAcquireIrpWorkerLock()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
}

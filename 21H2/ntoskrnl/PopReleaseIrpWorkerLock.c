/*
 * XREFs of PopReleaseIrpWorkerLock @ 0x140577BEC
 * Callers:
 *     PopIrpWorker @ 0x14039FE70 (PopIrpWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 */

void PopReleaseIrpWorkerLock()
{
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}

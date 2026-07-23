/*
 * XREFs of PopReleaseIrpWorkerLock @ 0x140577E2C
 * Callers:
 *     PopIrpWorker @ 0x14039FFC0 (PopIrpWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 */

void PopReleaseIrpWorkerLock()
{
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}

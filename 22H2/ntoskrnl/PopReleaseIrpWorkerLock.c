/*
 * XREFs of PopReleaseIrpWorkerLock @ 0x140577B2C
 * Callers:
 *     PopIrpWorker @ 0x14039F770 (PopIrpWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 */

void PopReleaseIrpWorkerLock()
{
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}

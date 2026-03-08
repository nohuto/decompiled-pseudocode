/*
 * XREFs of PopRunNormalIrpWorkers @ 0x14059671C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA37E0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

void PopRunNormalIrpWorkers()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 1;
  ExReleaseFastMutex(&PopIrpWorkerMutex);
}

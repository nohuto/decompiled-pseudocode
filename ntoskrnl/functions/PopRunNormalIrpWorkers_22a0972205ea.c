void PopRunNormalIrpWorkers()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 1;
  ExReleaseFastMutex(&PopIrpWorkerMutex);
}

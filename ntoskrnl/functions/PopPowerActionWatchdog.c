void PopPowerActionWatchdog()
{
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  PopStateTransitionTimeoutWorker.Parameter = 0LL;
  PopStateTransitionTimeoutWorker.List.Flink = 0LL;
  PopStateTransitionTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopStateTransitionTimeoutDispatch;
  ExQueueWorkItem(&PopStateTransitionTimeoutWorker, HyperCriticalWorkQueue);
}

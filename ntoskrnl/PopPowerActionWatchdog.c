/*
 * XREFs of PopPowerActionWatchdog @ 0x14058CF90
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x14058D058 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     PopInternalAddToDumpFile @ 0x140580CC0 (PopInternalAddToDumpFile.c)
 */

void PopPowerActionWatchdog()
{
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  PopStateTransitionTimeoutWorker.Parameter = 0LL;
  PopStateTransitionTimeoutWorker.List.Flink = 0LL;
  PopStateTransitionTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopStateTransitionTimeoutDispatch;
  ExQueueWorkItem(&PopStateTransitionTimeoutWorker, HyperCriticalWorkQueue);
}

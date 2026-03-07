void CmpDelayFreeRMDpcRoutine()
{
  ExQueueWorkItem(&CmpDelayFreeRMWorkItem, DelayedWorkQueue);
}

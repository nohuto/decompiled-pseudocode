void WdipTimeoutTimerRoutine()
{
  ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
}

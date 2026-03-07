void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140C2B5C0, DelayedWorkQueue);
}

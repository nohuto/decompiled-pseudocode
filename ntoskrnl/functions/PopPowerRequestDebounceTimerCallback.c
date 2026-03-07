char PopPowerRequestDebounceTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140C3F048, DelayedWorkQueue);
}

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140C42108, 0LL, 0LL, 0LL, 0);
}

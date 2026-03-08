/*
 * XREFs of FsRtlInitializeTunnelCache @ 0x14086FFC0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 */

void __stdcall FsRtlInitializeTunnelCache(TUNNEL *Cache)
{
  Cache->Mutex.Count = 1;
  Cache->Mutex.Owner = 0LL;
  Cache->Mutex.Contention = 0;
  KeInitializeEvent(&Cache->Mutex.Event, SynchronizationEvent, 0);
  Cache->Cache = 0LL;
  Cache->NumEntries = 0;
  Cache->TimerQueue.Blink = &Cache->TimerQueue;
  Cache->TimerQueue.Flink = &Cache->TimerQueue;
}

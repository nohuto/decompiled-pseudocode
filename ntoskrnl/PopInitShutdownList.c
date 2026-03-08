/*
 * XREFs of PopInitShutdownList @ 0x140B43FE0
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopInitShutdownList()
{
  __int64 result; // rax

  PopShutdownEvent.Header.Size = 6;
  LOWORD(PopShutdownEvent.Header.Lock) = 0;
  PopShutdownEvent.Header.WaitListHead.Blink = &PopShutdownEvent.Header.WaitListHead;
  PopShutdownEvent.Header.WaitListHead.Flink = &PopShutdownEvent.Header.WaitListHead;
  qword_140C3E5C8 = (__int64)&PopShutdownQueue;
  PopShutdownQueue = (__int64)&PopShutdownQueue;
  PopShutdownListMutex.Event.Header.WaitListHead.Blink = &PopShutdownListMutex.Event.Header.WaitListHead;
  PopShutdownListMutex.Event.Header.WaitListHead.Flink = &PopShutdownListMutex.Event.Header.WaitListHead;
  result = 0LL;
  PopShutdownEvent.Header.SignalState = 0;
  PopShutdownThreadList = 0LL;
  PopShutdownListMutex.Count = 1;
  PopShutdownListMutex.Owner = 0LL;
  PopShutdownListMutex.Contention = 0;
  LOWORD(PopShutdownListMutex.Event.Header.Lock) = 1;
  PopShutdownListMutex.Event.Header.Size = 6;
  PopShutdownListMutex.Event.Header.SignalState = 0;
  PopShutdownListAvailable = 1;
  return result;
}

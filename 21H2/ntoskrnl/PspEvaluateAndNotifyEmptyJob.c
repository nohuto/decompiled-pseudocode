/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x140604FA0
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x140604F54 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406B5B68 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020098C (PspHardDereferenceSiloWorker.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     PspUnlockJob @ 0x140618730 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140618774 (PspLockJobExclusive.c)
 *     PspSendReliableJobNotification @ 0x14068163C (PspSendReliableJobNotification.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile LONG Lock; // eax

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(Event, CurrentThread);
  Lock = Event[51].Header.Lock;
  if ( a2 )
    Event[51].Header.LockNV = --Lock;
  if ( !Lock )
  {
    if ( _interlockedbittestandreset(&Event[55].Header.Lock, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset(&Event[55].Header.Lock, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[19].Header.Lock && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 0x10) != 0 )
        PspSendReliableJobNotification(Event);
      if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset(&Event[55].Header.Lock, 0x1Du)
        && (Event[55].Header.LockNV & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Event);
      }
    }
  }
  return PspUnlockJob(Event, CurrentThread);
}

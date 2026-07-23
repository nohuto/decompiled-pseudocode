/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x1406F46D0
 * Callers:
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140615028 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x1406F4684 (PspNotifyEmptyJobsInJobChain.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020098C (PspHardDereferenceSiloWorker.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     PspSendReliableJobNotification @ 0x1405DC67C (PspSendReliableJobNotification.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406823D4 (PspLockJobExclusive.c)
 */

void __fastcall PspEvaluateAndNotifyEmptyJob(struct _KEVENT *Object, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile LONG Lock; // eax

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
  Lock = Object[51].Header.Lock;
  if ( a2 )
    Object[51].Header.LockNV = --Lock;
  if ( !Lock )
  {
    if ( _interlockedbittestandreset(&Object[55].Header.Lock, 7u) )
      KeSetEvent(Object, 0, 0);
    if ( !_interlockedbittestandset(&Object[55].Header.Lock, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Object[19].Header.Lock && (HIDWORD(Object[36].Header.WaitListHead.Flink) & 0x10) != 0 )
        PspSendReliableJobNotification(Object, 4u);
      if ( ((__int64)Object[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset(&Object[55].Header.Lock, 0x1Du)
        && (Object[55].Header.LockNV & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Object);
      }
    }
  }
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
}

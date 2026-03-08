/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x1406F8844
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x1406F870C (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140791E78 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x14029432C (PspHardDereferenceSiloWorker.c)
 *     PspSendReliableJobNotification @ 0x1406F4D9C (PspSendReliableJobNotification.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406FC178 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(struct _KEVENT *Object, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  LONG *p_LockNV; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(Object, CurrentThread);
  p_LockNV = &Object[60].Header.LockNV;
  if ( a2 )
    --*p_LockNV;
  if ( !*p_LockNV )
  {
    if ( _interlockedbittestandreset(&Object[64].Header.Lock, 7u) )
      KeSetEvent(Object, 0, 0);
    if ( !_interlockedbittestandset(&Object[64].Header.Lock, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Object[23].Header.Lock && ((__int64)Object[45].Header.WaitListHead.Flink & 0x10) != 0 )
        PspSendReliableJobNotification(Object, 4u);
      if ( ((__int64)Object[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset(&Object[64].Header.Lock, 0x1Du)
        && (Object[64].Header.LockNV & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Object);
      }
    }
  }
  return PspUnlockJob(Object, CurrentThread);
}

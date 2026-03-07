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

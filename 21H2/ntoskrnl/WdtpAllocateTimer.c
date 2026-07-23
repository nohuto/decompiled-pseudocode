/*
 * XREFs of WdtpAllocateTimer @ 0x14066AE00
 * Callers:
 *     PnpWatchdogTimerAllocate @ 0x14066AD70 (PnpWatchdogTimerAllocate.c)
 * Callees:
 *     ExAllocateTimer @ 0x14026E650 (ExAllocateTimer.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *WdtpAllocateTimer()
{
  char *PoolWithTag; // rax
  char *v1; // rbx
  __int64 Timer; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x54645750u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag + 1, 0, 0x7FuLL);
    *v1 = 119;
    Timer = ExAllocateTimer((__int64)WdtpTimerCallback, (__int64)v1, 0);
    *((_QWORD *)v1 + 7) = Timer;
    if ( Timer )
    {
      KeInitializeEvent((PRKEVENT)(v1 + 104), NotificationEvent, 0);
    }
    else
    {
      ExFreePoolWithTag(v1, 0x54645750u);
      return 0LL;
    }
  }
  return v1;
}

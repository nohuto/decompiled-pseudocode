/*
 * XREFs of WdtpAllocateTimer @ 0x14068A6E0
 * Callers:
 *     PnpWatchdogTimerAllocate @ 0x14068A648 (PnpWatchdogTimerAllocate.c)
 * Callees:
 *     ExAllocateTimer @ 0x140203BE0 (ExAllocateTimer.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

struct _KEVENT *__fastcall WdtpAllocateTimer(__int64 a1)
{
  struct _KEVENT *Pool2; // rax
  struct _KEVENT *v2; // rbx
  __int64 Timer; // rax

  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, a1 + 141, 1415862096LL);
  v2 = Pool2;
  if ( Pool2 )
  {
    Pool2->Header.Type = 119;
    Timer = ExAllocateTimer((__int64)WdtpTimerCallback, (__int64)Pool2, 0);
    *(_QWORD *)&v2[2].Header.Lock = Timer;
    if ( Timer )
    {
      KeInitializeEvent(v2 + 4, NotificationEvent, 0);
    }
    else
    {
      ExFreePoolWithTag(v2, 0x54645750u);
      return 0LL;
    }
  }
  return v2;
}

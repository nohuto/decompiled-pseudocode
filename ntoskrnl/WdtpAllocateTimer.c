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

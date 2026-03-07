__int64 __fastcall RtlpCtInitializeNotificationEvent(struct _KEVENT **a1)
{
  struct _KEVENT *Pool2; // rax

  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1735672676LL);
  *a1 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  KeInitializeEvent(Pool2, NotificationEvent, 0);
  return 0LL;
}

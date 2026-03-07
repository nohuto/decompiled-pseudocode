struct _KEVENT *NSInstrumentation::CPlatformSignal::Create(void)
{
  struct _KEVENT *Pool2; // rax
  struct _KEVENT *v1; // rbx

  Pool2 = (struct _KEVENT *)ExAllocatePool2(70LL, 24LL, 894006101LL);
  v1 = Pool2;
  if ( Pool2 )
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
  return v1;
}

__int64 Simulator_PauseInterpreter()
{
  struct _KEVENT *Pool2; // rax
  struct _KEVENT *v1; // rbx
  unsigned int Lock; // edi

  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 64LL, 1145131841LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    KeInitializeEvent(Pool2, NotificationEvent, 0);
    v1[2].Header.WaitListHead.Flink = (_LIST_ENTRY *)v1;
    v1[1].Header.WaitListHead.Blink = &v1[1].Header.WaitListHead;
    *(_QWORD *)&v1[2].Header.Lock = Simulator_PauseInterpreterCallback;
    v1[1].Header.WaitListHead.Flink = &v1[1].Header.WaitListHead;
    Lock = AMLIPauseInterpreter(&v1[1].Header.WaitListHead.Flink);
    if ( Lock == 259 )
    {
      if ( KeWaitForSingleObject(v1, Executive, 0, 0, 0LL) )
        Lock = -1073741823;
      else
        Lock = v1[1].Header.Lock;
    }
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return Lock;
}

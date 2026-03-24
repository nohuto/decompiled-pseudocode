/*
 * XREFs of Simulator_PauseInterpreter @ 0x1C0063E5C
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0063910 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIPauseInterpreter @ 0x1C006355C (AMLIPauseInterpreter.c)
 */

__int64 Simulator_PauseInterpreter()
{
  struct _KEVENT *PoolWithTag; // rax
  struct _KEVENT *v1; // rbx
  unsigned int Lock; // edi

  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x44415341u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeEvent(PoolWithTag, NotificationEvent, 0);
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

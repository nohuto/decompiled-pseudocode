/*
 * XREFs of WheaHighIrqlLogSelEventHandlerRegister @ 0x1405BD590
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1405BD740 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

char __fastcall WheaHighIrqlLogSelEventHandlerRegister(void *a1)
{
  void *v1; // rbx
  __int32 v2; // r9d
  int v3; // r10d
  __int64 v4; // r11

  v1 = a1;
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) == v2 )
    {
      WheapDispatchPtr.Queue.Wcb.DeviceContext = v1;
      *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = v4;
      LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine + 1, v2);
  }
  return v3;
}

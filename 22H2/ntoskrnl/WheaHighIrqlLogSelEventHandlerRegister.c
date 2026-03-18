/*
 * XREFs of WheaHighIrqlLogSelEventHandlerRegister @ 0x1406130C0
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140613388 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

char __fastcall WheaHighIrqlLogSelEventHandlerRegister(__int64 a1)
{
  __int64 v1; // rbx
  __int32 v2; // r9d
  int v3; // r10d
  DRIVER_CONTROL *v4; // r11

  v1 = a1;
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) == v2 )
    {
      *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels = v1;
      WheapDispatchPtr.Queue.Wcb.DeviceRoutine = v4;
      LODWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink + 1, v2);
  }
  return v3;
}

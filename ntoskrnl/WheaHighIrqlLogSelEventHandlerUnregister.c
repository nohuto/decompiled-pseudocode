/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x140610D10
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140610F68 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  void *v2; // r9

  if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(a1) = 1;
    result = WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    WheapDispatchPtr.Queue.Wcb.DeviceObject = v2;
    WheapDispatchPtr.Queue.Wcb.CurrentIrp = v2;
    WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = (unsigned int)v2;
    _InterlockedExchange((volatile __int32 *)(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1), (__int32)v2);
  }
  return result;
}

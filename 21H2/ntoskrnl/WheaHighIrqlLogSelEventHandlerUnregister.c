/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x1405BD600
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1405BD740 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  void *v2; // r9

  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) )
  {
    LOBYTE(a1) = 1;
    result = WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    WheapDispatchPtr.Queue.Wcb.DeviceContext = v2;
    *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = v2;
    LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) = (_DWORD)v2;
    _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine + 1, (__int32)v2);
  }
  return result;
}

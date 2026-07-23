/*
 * XREFs of WheapLogIpmiSELEventHighIrql @ 0x1405BD808
 * Callers:
 *     WheapLogIpmiSELEvent @ 0x1405BD768 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1405BD740 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

void WheapLogIpmiSELEventHighIrql()
{
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) && WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
  {
    if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) )
      ((void (__fastcall *)(_QWORD, PVOID *))WheapDispatchPtr.Queue.Wcb.DeviceContext)(
        *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters,
        &WheapDispatchPtr.Queue.Wcb.CurrentIrp);
    _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine + 1, 0);
  }
}

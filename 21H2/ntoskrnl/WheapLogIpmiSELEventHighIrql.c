/*
 * XREFs of WheapLogIpmiSELEventHighIrql @ 0x140646180
 * Callers:
 *     WheapLogIpmiSELEvent @ 0x1406460E0 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1406460B8 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

void WheapLogIpmiSELEventHighIrql()
{
  if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters && WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
  {
    if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
      ((void (__fastcall *)(PVOID, ULONG *))WheapDispatchPtr.Queue.Wcb.DeviceObject)(
        WheapDispatchPtr.Queue.Wcb.CurrentIrp,
        &WheapDispatchPtr.AlignmentRequirement);
    _InterlockedExchange((volatile __int32 *)(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1), 0);
  }
}

void WheapLogIpmiSELEventHighIrql()
{
  if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters && WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
  {
    if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
      ((void (__fastcall *)(PVOID, KSPIN_LOCK *))WheapDispatchPtr.Queue.Wcb.DeviceObject)(
        WheapDispatchPtr.Queue.Wcb.CurrentIrp,
        &WheapDispatchPtr.DeviceQueue.Lock);
    _InterlockedExchange((volatile __int32 *)(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1), 0);
  }
}

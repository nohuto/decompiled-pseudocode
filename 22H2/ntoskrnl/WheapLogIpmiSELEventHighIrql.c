/*
 * XREFs of WheapLogIpmiSELEventHighIrql @ 0x140613450
 * Callers:
 *     WheapLogIpmiSELEvent @ 0x1406133B0 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140613388 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

void WheapLogIpmiSELEventHighIrql()
{
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) && WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
  {
    if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) )
      (*(void (__fastcall **)(PDRIVER_CONTROL, ULONG *))&WheapDispatchPtr.Queue.Wcb.NumberOfChannels)(
        WheapDispatchPtr.Queue.Wcb.DeviceRoutine,
        &WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
    _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink + 1, 0);
  }
}

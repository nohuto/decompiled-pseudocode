/*
 * XREFs of WheapLogIpmiSELEventHighIrql @ 0x1405BD518
 * Callers:
 *     WheapLogIpmiSELEvent @ 0x1405BD478 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1405BD450 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

void WheapLogIpmiSELEventHighIrql()
{
  if ( (_DWORD)WheapHighIrqlLogSelHandler && WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
  {
    if ( (_DWORD)WheapHighIrqlLogSelHandler )
      (*((void (__fastcall **)(__int64, PDRIVER_CONTROL *))&WheapHighIrqlLogSelHandler + 1))(
        qword_140C14F70,
        &WheapDispatchPtr.Queue.Wcb.DeviceRoutine);
    _InterlockedExchange((_DWORD *)&WheapHighIrqlLogSelHandler + 1, 0);
  }
}

/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1405BD510
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x1405BD360 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x1405BD3D0 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x1405BD5D8 (WheapLogIpmiSELEventHighIrql.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine + 1, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}

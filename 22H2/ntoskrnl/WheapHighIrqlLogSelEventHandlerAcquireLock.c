/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1405BD450
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x1405BD2A0 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x1405BD310 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x1405BD518 (WheapLogIpmiSELEventHighIrql.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((_DWORD *)&WheapHighIrqlLogSelHandler + 1, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}

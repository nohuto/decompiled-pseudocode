/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140613388
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x1406130C0 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x140613130 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x140613450 (WheapLogIpmiSELEventHighIrql.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink + 1, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}

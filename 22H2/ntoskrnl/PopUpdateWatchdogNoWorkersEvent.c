/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x14036FDA0
 * Callers:
 *     PopSetWatchdog @ 0x14036FA5C (PopSetWatchdog.c)
 *     PopWatchdogWorker @ 0x1403D5C40 (PopWatchdogWorker.c)
 *     PopWatchdogDpc @ 0x1403D63B0 (PopWatchdogDpc.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}

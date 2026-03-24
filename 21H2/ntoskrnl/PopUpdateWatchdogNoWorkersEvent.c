/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x140280840
 * Callers:
 *     PopSetWatchdog @ 0x140280568 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140578D90 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x140578E70 (PopWatchdogWorker.c)
 * Callees:
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}

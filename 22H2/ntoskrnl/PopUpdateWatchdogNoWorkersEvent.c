/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x140349850
 * Callers:
 *     PopSetWatchdog @ 0x140349578 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140578CD0 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x140578DB0 (PopWatchdogWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}

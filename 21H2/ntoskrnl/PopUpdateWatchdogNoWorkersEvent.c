/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x14026EA80
 * Callers:
 *     PopSetWatchdog @ 0x14026E7A8 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140578FD0 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1405790B0 (PopWatchdogWorker.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}

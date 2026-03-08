/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x1402BE330
 * Callers:
 *     PopSetWatchdog @ 0x1402BDFEC (PopSetWatchdog.c)
 *     PopWatchdogWorker @ 0x1403D0490 (PopWatchdogWorker.c)
 *     PopWatchdogDpc @ 0x1403D0E90 (PopWatchdogDpc.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}

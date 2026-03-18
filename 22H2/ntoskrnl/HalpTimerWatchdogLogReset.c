/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x140866018
 * Callers:
 *     HalpTimerInitSystem @ 0x14037B080 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     DbgPrint @ 0x14032A510 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x140866040 (HalpTimerWatchdogGeneratedLastReset.c)
 */

ULONG HalpTimerWatchdogLogReset()
{
  ULONG result; // eax

  result = HalpTimerWatchdogGeneratedLastReset();
  if ( (_BYTE)result )
  {
    if ( HalpDiagnosticEventsRegistered )
    {
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_WATCHDOG_TRIGGERED, 0LL, 0, 0LL);
      return DbgPrint("System was rebooted due to system watchdog timeout.\n");
    }
  }
  return result;
}

/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x1407D5034
 * Callers:
 *     HalpTimerInitSystem @ 0x1403AF740 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
 *     DbgPrint @ 0x140364360 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x1407D5060 (HalpTimerWatchdogGeneratedLastReset.c)
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

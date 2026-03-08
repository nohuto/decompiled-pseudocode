/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x140861838
 * Callers:
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x140861860 (HalpTimerWatchdogGeneratedLastReset.c)
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

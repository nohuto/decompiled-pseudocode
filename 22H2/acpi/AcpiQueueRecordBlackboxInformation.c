/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x1C0062BF8
 * Callers:
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     AmliDisableWatchdog @ 0x1C0062EB8 (AmliDisableWatchdog.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0063064 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

char AcpiQueueRecordBlackboxInformation()
{
  char v0; // cl

  v0 = 0;
  if ( _InterlockedIncrement(&dword_1C0081920) == 1 )
  {
    ExQueueWorkItem(&AcpiRecordBlackboxWorkItem, DelayedWorkQueue);
    return 1;
  }
  return v0;
}

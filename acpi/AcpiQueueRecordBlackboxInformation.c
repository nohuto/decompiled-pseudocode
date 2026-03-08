/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x1C0046A90
 * Callers:
 *     AmliDisableWatchdog @ 0x1C0046D30 (AmliDisableWatchdog.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0046F84 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

char AcpiQueueRecordBlackboxInformation()
{
  char v0; // cl

  v0 = 0;
  if ( _InterlockedIncrement(&dword_1C006E9C0) == 1 )
  {
    ExQueueWorkItem(&AcpiRecordBlackboxWorkItem, DelayedWorkQueue);
    return 1;
  }
  return v0;
}

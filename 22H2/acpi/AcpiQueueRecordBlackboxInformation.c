/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x1C0046AB0
 * Callers:
 *     AmliDisableWatchdog @ 0x1C0046D50 (AmliDisableWatchdog.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0046FA4 (AmliWatchdogTimeoutAction.c)
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

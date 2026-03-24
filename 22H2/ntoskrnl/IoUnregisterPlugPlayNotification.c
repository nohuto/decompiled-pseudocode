/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x140771860
 * Callers:
 *     SbpWaitForVmbus @ 0x140A95BC4 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037F3E0 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}

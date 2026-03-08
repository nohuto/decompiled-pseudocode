/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x1406F43C0
 * Callers:
 *     <none>
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14028F5FC (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}

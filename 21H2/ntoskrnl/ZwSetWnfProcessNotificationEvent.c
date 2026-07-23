/*
 * XREFs of ZwSetWnfProcessNotificationEvent @ 0x1403FDC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NotificationEvent);
}

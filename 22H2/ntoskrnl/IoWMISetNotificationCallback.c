/*
 * XREFs of IoWMISetNotificationCallback @ 0x140862DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402AFF40 (KeReleaseMutex.c)
 */

NTSTATUS __stdcall IoWMISetNotificationCallback(PVOID Object, WMI_NOTIFICATION_CALLBACK Callback, PVOID Context)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  *((_QWORD *)Object + 9) = Callback;
  *((_QWORD *)Object + 10) = Context;
  KeReleaseMutex(&WmipSMMutex, 0);
  return 0;
}

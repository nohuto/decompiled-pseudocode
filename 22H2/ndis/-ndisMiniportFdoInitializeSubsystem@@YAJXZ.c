/*
 * XREFs of ?ndisMiniportFdoInitializeSubsystem@@YAJXZ @ 0x1C01469F4
 * Callers:
 *     DriverEntry @ 0x1C01448F0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 ndisMiniportFdoInitializeSubsystem(void)
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax

  v0 = 0;
  v1 = IoRegisterPlugPlayNotification(
         EventCategoryDeviceInterfaceChange,
         0,
         &GUID_DEVINTERFACE_NET,
         (PDRIVER_OBJECT)ndisDriverObject,
         (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)ndisMiniportDeviceReadyNotification,
         0LL,
         &NotificationEntry);
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v0;
}

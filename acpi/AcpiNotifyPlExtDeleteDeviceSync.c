/*
 * XREFs of AcpiNotifyPlExtDeleteDeviceSync @ 0x1C00379D8
 * Callers:
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C0010E04 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 * Callees:
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C00377F0 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 */

__int64 __fastcall AcpiNotifyPlExtDeleteDeviceSync(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v5 = AcpiNotifyPlExtDeleteDeviceAsync(a1, a2, v4, (__int64)&Event);
  if ( v5 == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return v5;
}

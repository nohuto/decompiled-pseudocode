/*
 * XREFs of ACPIUnregisterForDeviceNotifications @ 0x1C0039880
 * Callers:
 *     ACPIFanStopDevice @ 0x1C0027980 (ACPIFanStopDevice.c)
 *     ACPIUnregisterForDeviceNotifications2 @ 0x1C00398E0 (ACPIUnregisterForDeviceNotifications2.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0041F9C (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 */

void __fastcall ACPIUnregisterForDeviceNotifications(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  __int64 v2; // rbx
  KIRQL v3; // al

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension + 376;
  if ( DeviceExtension != -376 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    KeReleaseSpinLock(&NotifyHandlerLock, v3);
  }
}

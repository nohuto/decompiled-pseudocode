/*
 * XREFs of ACPIDevicePowerFlushQueue @ 0x1C001EABC
 * Callers:
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C000E254 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0013960 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0017830 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDetectFilterDevices @ 0x1C001AA10 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE34 (ACPIDetectPdoDevices.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C0028410 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPITableUnload @ 0x1C003F7F0 (ACPITableUnload.c)
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001D594 (ACPIDeviceInternalSynchronizeRequest.c)
 */

__int64 __fastcall ACPIDevicePowerFlushQueue(_QWORD *a1)
{
  unsigned int v2; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = ACPIDeviceInternalSynchronizeRequest(
         a1,
         (void (__fastcall *)(__int64, __int64, __int64))ACPIInitPowerRequestCompletion,
         (__int64)&Event);
  if ( v2 == 259 )
  {
    v2 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v2;
}

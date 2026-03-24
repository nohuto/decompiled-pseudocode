/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C0017F20
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C001622C (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateOperationRegion @ 0x1C00182E8 (OSNotifyCreateOperationRegion.c)
 *     ACPIDetectFilterDevices @ 0x1C0019004 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0019338 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C001ADF4 (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001AFA8 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGetCmosInterface @ 0x1C002C4B0 (ACPIGetCmosInterface.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CC90 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D790 (ACPIFilterIrpSetPower.c)
 *     DispatchNotification @ 0x1C002EF54 (DispatchNotification.c)
 *     OSNotifyCreateThermalZone @ 0x1C002F970 (OSNotifyCreateThermalZone.c)
 *     AcpiDeviceResetInterface @ 0x1C0031180 (AcpiDeviceResetInterface.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0031290 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056438 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIRootInitialize @ 0x1C0097FAC (ACPIRootInitialize.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C009A158 (ACPIBusReenumerateSelfInterface.c)
 *     ACPIDockIntfReference @ 0x1C00AB400 (ACPIDockIntfReference.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C00AE270 (ACPIInterfaceReferenceDeviceExtension.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00B0EE0 (ACPIPepInitializePlatformNotificationSupport.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 692) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
  return 1;
}

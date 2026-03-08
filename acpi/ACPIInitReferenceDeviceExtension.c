/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C002D594
 * Callers:
 *     DispatchNotification @ 0x1C0004C6E (DispatchNotification.c)
 *     ACPIGetCmosInterface @ 0x1C0019B00 (ACPIGetCmosInterface.c)
 *     ACPIDetectFilterDevices @ 0x1C001AA10 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE34 (ACPIDetectPdoDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C00237D0 (AcpiDeviceResetInterface.c)
 *     ACPIExtListTestElement @ 0x1C0026554 (ACPIExtListTestElement.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028840 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C0028B10 (ACPIFilterIrpSetPower.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C002CD08 (ACPIInitDeleteDeviceExtension.c)
 *     OSNotifyCreateOperationRegion @ 0x1C003285C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C0032ABC (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C0032BC0 (OSNotifyCreateThermalZone.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C003CBA8 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIDockIntfReference @ 0x1C007A970 (ACPIDockIntfReference.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0081AD4 (ACPIBusReenumerateSelfInterface.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C0081BF0 (ACPIInterfaceReferenceDeviceExtension.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C008A9B0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 732) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
  return 1;
}

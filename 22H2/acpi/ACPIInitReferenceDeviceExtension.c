/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C002D5B4
 * Callers:
 *     DispatchNotification @ 0x1C0004C6E (DispatchNotification.c)
 *     ACPIGetCmosInterface @ 0x1C0019B00 (ACPIGetCmosInterface.c)
 *     ACPIDetectFilterDevices @ 0x1C001AA30 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE54 (ACPIDetectPdoDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C00237F0 (AcpiDeviceResetInterface.c)
 *     ACPIExtListTestElement @ 0x1C0026574 (ACPIExtListTestElement.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028860 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C0028B30 (ACPIFilterIrpSetPower.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C002CD28 (ACPIInitDeleteDeviceExtension.c)
 *     OSNotifyCreateOperationRegion @ 0x1C003287C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateProcessor @ 0x1C0032ADC (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateThermalZone @ 0x1C0032BE0 (OSNotifyCreateThermalZone.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C003CBC8 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIDockIntfReference @ 0x1C007A980 (ACPIDockIntfReference.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0081AE4 (ACPIBusReenumerateSelfInterface.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C0081C00 (ACPIInterfaceReferenceDeviceExtension.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C008A9C0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIRootInitialize @ 0x1C0093778 (ACPIRootInitialize.c)
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

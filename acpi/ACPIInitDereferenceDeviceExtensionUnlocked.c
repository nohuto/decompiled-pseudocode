/*
 * XREFs of ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0
 * Callers:
 *     DispatchNotificationWorker @ 0x1C0004DA0 (DispatchNotificationWorker.c)
 *     ACPIDockIntfDereference @ 0x1C00093E0 (ACPIDockIntfDereference.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0009590 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000D9B4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIDetectFilterDevices @ 0x1C001AA10 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE34 (ACPIDetectPdoDevices.c)
 *     AcpiDeviceResetDereference @ 0x1C0023770 (AcpiDeviceResetDereference.c)
 *     ACPIExtListEnumNext @ 0x1C00263F4 (ACPIExtListEnumNext.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028840 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpSetPower @ 0x1C0028B10 (ACPIFilterIrpSetPower.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C00329C0 (OSNotifyCreateOperationRegionWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C003D280 (ACPIRootIrpRemoveDevice.c)
 *     ACPIInterfaceDereferenceDeviceExtension @ 0x1C0081BD0 (ACPIInterfaceDereferenceDeviceExtension.c)
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1C008A784 (ACPIPepCleanupPlatformNotificationSupport.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C002D060 (ACPIInitDereferenceDeviceExtensionLocked.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionUnlocked(ULONG_PTR BugCheckParameter4)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  LOBYTE(BugCheckParameter4) = ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  return BugCheckParameter4;
}

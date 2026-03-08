/*
 * XREFs of ACPIFanStopDevice @ 0x1C0027980
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0016C30 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0017400 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1C0081900 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIFanLoop @ 0x1C002759C (ACPIFanLoop.c)
 *     ACPIUnregisterForDeviceNotifications @ 0x1C0039880 (ACPIUnregisterForDeviceNotifications.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0041C30 (ACPIThermalReleaseCoolingInterfaces.c)
 */

NTSTATUS __fastcall ACPIFanStopDevice(__int64 a1)
{
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 768), ACPIFanEvent);
  ACPIThermalReleaseCoolingInterfaces(a1);
  ACPIFanLoop(a1, 0x20000000, 0);
  return KeWaitForSingleObject((PVOID)(a1 + 344), Executive, 0, 0, 0LL);
}

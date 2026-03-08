/*
 * XREFs of IsPciBus @ 0x1C008A744
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00165F0 (ACPIBusIrpQueryInterface.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0016C30 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0017400 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0028FE8 (ACPIFilterRemoveNonPresentDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     IsNsobjPciBus @ 0x1C008A678 (IsNsobjPciBus.c)
 */

char __fastcall IsPciBus(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  return IsNsobjPciBus(*(volatile signed __int32 **)(DeviceExtension + 760));
}

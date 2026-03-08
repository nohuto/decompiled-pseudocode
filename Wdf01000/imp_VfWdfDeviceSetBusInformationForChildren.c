/*
 * XREFs of imp_VfWdfDeviceSetBusInformationForChildren @ 0x1C00B4110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetBusInformationForChildren(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _PNP_BUS_INFORMATION *BusInformation)
{
  WdfVersion.Functions.pfnWdfDeviceSetBusInformationForChildren(DriverGlobals, Device, BusInformation);
}

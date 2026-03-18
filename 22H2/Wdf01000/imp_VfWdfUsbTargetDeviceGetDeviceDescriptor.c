/*
 * XREFs of imp_VfWdfUsbTargetDeviceGetDeviceDescriptor @ 0x1C00C34C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfUsbTargetDeviceGetDeviceDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _USB_DEVICE_DESCRIPTOR *UsbDeviceDescriptor)
{
  WdfVersion.Functions.pfnWdfUsbTargetDeviceGetDeviceDescriptor(DriverGlobals, UsbDevice, UsbDeviceDescriptor);
}

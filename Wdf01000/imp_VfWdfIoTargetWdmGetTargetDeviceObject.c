/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetDeviceObject @ 0x1C00B5DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfIoTargetWdmGetTargetDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetDeviceObject(DriverGlobals, IoTarget);
}

/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetPhysicalDevice @ 0x1C00B5E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfIoTargetWdmGetTargetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetPhysicalDevice(DriverGlobals, IoTarget);
}

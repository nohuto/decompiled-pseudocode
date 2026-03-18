/*
 * XREFs of imp_VfWdfIoTargetCreate @ 0x1C00C18F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *IoTargetAttributes,
        WDFIOTARGET__ **IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_OBJECT_ATTRIBUTES *, WDFIOTARGET__ **))WdfVersion.Functions.pfnWdfIoTargetCreate)(
           DriverGlobals,
           Device,
           IoTargetAttributes,
           IoTarget);
}

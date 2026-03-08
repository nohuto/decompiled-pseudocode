/*
 * XREFs of imp_VfWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00B4310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp,
        WDFQUEUE__ *Queue,
        unsigned int Flags)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _IRP *, WDFQUEUE__ *, unsigned int))WdfVersion.Functions.pfnWdfDeviceWdmDispatchIrpToIoQueue)(
           DriverGlobals,
           Device,
           Irp,
           Queue,
           Flags);
}

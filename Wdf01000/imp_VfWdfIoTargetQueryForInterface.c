/*
 * XREFs of imp_VfWdfIoTargetQueryForInterface @ 0x1C00B5B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetQueryForInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        void *InterfaceSpecificData)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, const _GUID *, _INTERFACE *, unsigned __int16, unsigned __int16, void *))WdfVersion.Functions.pfnWdfIoTargetQueryForInterface)(
           DriverGlobals,
           IoTarget,
           InterfaceType,
           Interface,
           Size,
           Version,
           InterfaceSpecificData);
}

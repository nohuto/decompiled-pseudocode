/*
 * XREFs of imp_VfWdfFileObjectGetInitiatorProcessId @ 0x1C00B4D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfFileObjectGetInitiatorProcessId(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFFILEOBJECT__ *))WdfVersion.Functions.pfnWdfFileObjectGetInitiatorProcessId)(
           DriverGlobals,
           FileObject);
}

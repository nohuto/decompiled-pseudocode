/*
 * XREFs of imp_VfWdfFileObjectGetFlags @ 0x1C00B4D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfFileObjectGetFlags(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFFILEOBJECT__ *FileObject)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFFILEOBJECT__ *))WdfVersion.Functions.pfnWdfFileObjectGetFlags)(
           DriverGlobals,
           FileObject);
}

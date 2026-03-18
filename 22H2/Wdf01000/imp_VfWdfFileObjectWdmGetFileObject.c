/*
 * XREFs of imp_VfWdfFileObjectWdmGetFileObject @ 0x1C00C0DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

_FILE_OBJECT *__fastcall imp_VfWdfFileObjectWdmGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  return WdfVersion.Functions.pfnWdfFileObjectWdmGetFileObject(DriverGlobals, FileObject);
}

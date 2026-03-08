/*
 * XREFs of imp_VfWdfObjectReferenceActual @ 0x1C00B60C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfObjectReferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Handle,
        void *Tag,
        __int64 Line,
        const char *File)
{
  WdfVersion.Functions.pfnWdfObjectReferenceActual(DriverGlobals, Handle, Tag, Line, File);
}

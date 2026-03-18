/*
 * XREFs of imp_VfWdfMemoryGetBuffer @ 0x1C00C1F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfMemoryGetBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *Memory,
        unsigned __int64 *BufferSize)
{
  return WdfVersion.Functions.pfnWdfMemoryGetBuffer(DriverGlobals, Memory, BufferSize);
}

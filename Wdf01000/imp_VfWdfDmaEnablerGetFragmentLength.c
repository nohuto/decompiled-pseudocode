/*
 * XREFs of imp_VfWdfDmaEnablerGetFragmentLength @ 0x1C00B4410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetFragmentLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        __int64 DmaDirection)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetFragmentLength(
           DriverGlobals,
           DmaEnabler,
           (_WDF_DMA_DIRECTION)DmaDirection);
}

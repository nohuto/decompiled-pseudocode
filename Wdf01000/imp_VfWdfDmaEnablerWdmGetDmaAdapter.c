/*
 * XREFs of imp_VfWdfDmaEnablerWdmGetDmaAdapter @ 0x1C00B4490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_DMA_ADAPTER *__fastcall imp_VfWdfDmaEnablerWdmGetDmaAdapter(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        __int64 DmaDirection)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerWdmGetDmaAdapter(DriverGlobals, DmaEnabler, DmaDirection);
}

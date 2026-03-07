unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetMaximumScatterGatherElements(DriverGlobals, DmaEnabler);
}

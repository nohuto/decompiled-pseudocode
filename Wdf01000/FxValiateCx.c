/*
 * XREFs of FxValiateCx @ 0x1C00360F4
 * Callers:
 *     imp_WdfCxDeviceInitAllocate @ 0x1C0036160 (imp_WdfCxDeviceInitAllocate.c)
 *     imp_WdfCxDeviceInitAllocateContext @ 0x1C00361F0 (imp_WdfCxDeviceInitAllocateContext.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0036270 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfCxDeviceInitGetTypedContextWorker @ 0x1C00364F0 (imp_WdfCxDeviceInitGetTypedContextWorker.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C0036570 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetIoInCallerContextCallback @ 0x1C0036740 (imp_WdfCxDeviceInitSetIoInCallerContextCallback.c)
 *     imp_WdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1C00367B0 (imp_WdfCxDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks @ 0x1C00369C0 (imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C0036B60 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxValiateCx(_FX_DRIVER_GLOBALS *FxDriverGlobals, _FX_DRIVER_GLOBALS *CxDriverGlobals)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( FxDriverGlobals == CxDriverGlobals )
  {
    v2 = -1073741808;
    WPP_IFR_SF_qd(
      FxDriverGlobals,
      2u,
      0x12u,
      0xAu,
      WPP_FxCxDeviceInitApi_cpp_Traceguids,
      CxDriverGlobals->Public.Driver,
      -1073741808);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v2;
}

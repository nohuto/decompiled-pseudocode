/*
 * XREFs of imp_WdfDeviceInitSetReleaseHardwareOrderOnFailure @ 0x1C002FB70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetReleaseHardwareOrderOnFailure(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int ReleaseHardwareOrderOnFailure)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( ReleaseHardwareOrderOnFailure && ReleaseHardwareOrderOnFailure <= 2 )
  {
    DeviceInit->ReleaseHardwareOrderOnFailure = ReleaseHardwareOrderOnFailure;
  }
  else
  {
    WPP_IFR_SF_D(
      DeviceInit->DriverGlobals,
      2u,
      0x12u,
      0x25u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      ReleaseHardwareOrderOnFailure);
    FxVerifierDbgBreakPoint(DeviceInit->DriverGlobals);
  }
}

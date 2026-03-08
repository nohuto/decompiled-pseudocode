/*
 * XREFs of imp_WdfPdoInitSetDefaultLocale @ 0x1C00312F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfPdoInitSetDefaultLocale(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned int LocaleId)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  if ( (int)FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0) >= 0 )
  {
    if ( DeviceInit->InitType == FxDeviceInitTypePdo )
    {
      DeviceInit->Pdo.DefaultLocale = LocaleId;
    }
    else
    {
      WPP_IFR_SF_(v5, 2u, 0x12u, 0x45u, WPP_FxDeviceInitApi_cpp_Traceguids);
      FxVerifierDbgBreakPoint(v5);
    }
  }
}

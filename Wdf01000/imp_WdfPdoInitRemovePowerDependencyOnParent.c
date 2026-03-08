/*
 * XREFs of imp_WdfPdoInitRemovePowerDependencyOnParent @ 0x1C0031260
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfPdoInitRemovePowerDependencyOnParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  signed int _a1; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v3 = DeviceInit->DriverGlobals;
  _a1 = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( _a1 >= 0 )
  {
    if ( DeviceInit->InitType == FxDeviceInitTypePdo )
    {
      DeviceInit->Pdo.NoPowerDependencyOnParent = 1;
    }
    else
    {
      WPP_IFR_SF_D(v3, 2u, 0x12u, 0x48u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(v3);
    }
  }
}

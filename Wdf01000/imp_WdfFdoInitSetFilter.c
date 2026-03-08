/*
 * XREFs of imp_WdfFdoInitSetFilter @ 0x1C0030600
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfFdoInitSetFilter(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( (int)FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0) >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      WPP_IFR_SF_(v3, 2u, 0x12u, 0x28u, WPP_FxDeviceInitApi_cpp_Traceguids);
      FxVerifierDbgBreakPoint(v3);
    }
    else
    {
      DeviceInit->Fdo.Filter = 1;
    }
  }
}

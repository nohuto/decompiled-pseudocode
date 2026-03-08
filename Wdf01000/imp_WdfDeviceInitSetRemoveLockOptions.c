/*
 * XREFs of imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C002FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C0018F98 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetRemoveLockOptions(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_REMOVE_LOCK_OPTIONS *RemoveLockOptions)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned int Flags; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( !RemoveLockOptions )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( RemoveLockOptions->Size != 8 )
  {
    WPP_IFR_SF_qdd(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
      2u,
      6u,
      0x22u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      RemoveLockOptions,
      8,
      RemoveLockOptions->Size);
LABEL_7:
    FxVerifierDbgBreakPoint(v3);
    return;
  }
  Flags = RemoveLockOptions->Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    WPP_IFR_SF_qDd(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
      (unsigned __int8)DeviceInit,
      6u,
      0x23u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      RemoveLockOptions,
      Flags,
      1u);
    goto LABEL_7;
  }
  if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
  {
    WPP_IFR_SF_((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], 2u, 6u, 0x24u, WPP_FxDeviceInitApi_cpp_Traceguids);
    goto LABEL_7;
  }
  DeviceInit->RemoveLockOptionFlags = Flags;
}

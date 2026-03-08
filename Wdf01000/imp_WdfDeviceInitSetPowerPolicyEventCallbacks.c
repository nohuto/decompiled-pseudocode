/*
 * XREFs of imp_WdfDeviceInitSetPowerPolicyEventCallbacks @ 0x1C002FA60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetPowerPolicyEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_POWER_POLICY_EVENT_CALLBACKS *PowerPolicyEventCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned int _a1; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !PowerPolicyEventCallbacks )
    FxVerifierNullBugCheck(v3, retaddr);
  _a1 = PowerPolicyEventCallbacks->Size;
  if ( PowerPolicyEventCallbacks->Size == 64 )
  {
    if ( PowerPolicyEventCallbacks->EvtDeviceArmWakeFromSx
      && PowerPolicyEventCallbacks->EvtDeviceArmWakeFromSxWithReason )
    {
      WPP_IFR_SF_(v3, 2u, 0x12u, 0x14u, WPP_FxDeviceInitApi_cpp_Traceguids);
      goto LABEL_8;
    }
  }
  else if ( _a1 != 56 )
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0x13u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 64);
LABEL_8:
    FxVerifierDbgBreakPoint(v3);
    return;
  }
  memmove(&DeviceInit->PnpPower.PolicyEventCallbacks, PowerPolicyEventCallbacks, PowerPolicyEventCallbacks->Size);
}

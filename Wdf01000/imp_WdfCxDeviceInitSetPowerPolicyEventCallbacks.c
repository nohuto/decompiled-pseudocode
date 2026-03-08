/*
 * XREFs of imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks @ 0x1C00369C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     FxValiateCx @ 0x1C00360F4 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_POWER_POLICY_EVENT_CALLBACKS *CxPowerPolicyCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rdi
  unsigned __int16 v7; // r9
  int (__fastcall *EvtCxDevicePreArmWakeFromSx)(WDFDEVICE__ *); // rax
  int (__fastcall *EvtCxDevicePreArmWakeFromSxWithReason)(WDFDEVICE__ *, unsigned __int8, unsigned __int8); // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v3, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( (int)FxValiateCx(ClientDriverGlobals, v3) >= 0 )
  {
    if ( !CxPowerPolicyCallbacks )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( CxPowerPolicyCallbacks->Size == 144 )
    {
      if ( CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromS0
        || !CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromS0FailedCleanup )
      {
        EvtCxDevicePreArmWakeFromSx = CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromSx;
        if ( EvtCxDevicePreArmWakeFromSx || !CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromSxFailedCleanup )
        {
          EvtCxDevicePreArmWakeFromSxWithReason = CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromSxWithReason;
          if ( EvtCxDevicePreArmWakeFromSxWithReason
            || !CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup )
          {
            if ( !EvtCxDevicePreArmWakeFromSx
              && !CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromSxFailedCleanup
              && !CxPowerPolicyCallbacks->EvtCxDevicePostArmWakeFromSx
              || !EvtCxDevicePreArmWakeFromSxWithReason
              && !CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup
              && !CxPowerPolicyCallbacks->EvtCxDevicePostArmWakeFromSxWithReason )
            {
              CxDeviceInit->PnpPowerCallbacks.Set = 1;
              *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.PowerPolicyCallbacks.Size = *(_OWORD *)&CxPowerPolicyCallbacks->Size;
              *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromS0FailedCleanup = *(_OWORD *)&CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromS0FailedCleanup;
              *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromS0 = *(_OWORD *)&CxPowerPolicyCallbacks->EvtCxDevicePreDisarmWakeFromS0;
              *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromS0Triggered = *(_OWORD *)&CxPowerPolicyCallbacks->EvtCxDevicePreWakeFromS0Triggered;
              *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSx = *(_OWORD *)&CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromSx;
              *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePostArmWakeFromSx = *(_OWORD *)&CxPowerPolicyCallbacks->EvtCxDevicePostArmWakeFromSx;
              *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup = *(_OWORD *)&CxPowerPolicyCallbacks->EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup;
              *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreDisarmWakeFromSx = *(_OWORD *)&CxPowerPolicyCallbacks->EvtCxDevicePreDisarmWakeFromSx;
              *(_OWORD *)&CxDeviceInit->PnpPowerCallbacks.PowerPolicyCallbacks.EvtCxDevicePreWakeFromSxTriggered = *(_OWORD *)&CxPowerPolicyCallbacks->EvtCxDevicePreWakeFromSxTriggered;
              return;
            }
            v7 = 32;
          }
          else
          {
            v7 = 31;
          }
        }
        else
        {
          v7 = 30;
        }
      }
      else
      {
        v7 = 29;
      }
      WPP_IFR_SF_(ClientDriverGlobals, 2u, 0x12u, v7, WPP_FxCxDeviceInitApi_cpp_Traceguids);
    }
    else
    {
      WPP_IFR_SF_dd(
        ClientDriverGlobals,
        2u,
        0x12u,
        0x1Cu,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        CxPowerPolicyCallbacks->Size,
        144);
    }
    FxVerifierDbgBreakPoint(ClientDriverGlobals);
  }
}

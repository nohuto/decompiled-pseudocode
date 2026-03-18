/*
 * XREFs of imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C0044910
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState,
        void (__fastcall *EvtDevicePowerPolicyStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  _FX_DRIVER_GLOBALS *v8; // rcx
  unsigned __int32 v9; // ebx
  __int64 result; // rax
  unsigned __int32 v11; // r14d
  FxPowerPolicyStateCallback *PowerPolicyStateCallbacks; // rbx
  FX_POOL **v13; // rax
  unsigned __int16 v14; // r9
  __int64 v15; // rax
  void *Caller; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Caller);
  v7 = DeviceInit->DriverGlobals;
  v8 = DeviceInit->DriverGlobals;
  if ( !EvtDevicePowerPolicyStateChange )
    FxVerifierNullBugCheck(v8, Caller);
  v9 = PowerPolicyState & 0xFFFF7FFF;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    v11 = v9 - 1280;
    if ( v9 - 1280 > 0xBF )
    {
      v14 = 27;
    }
    else if ( (CallbackTypes & 0xFFFFFFF8) != 0 || !CallbackTypes )
    {
      v14 = 28;
    }
    else
    {
      PowerPolicyStateCallbacks = DeviceInit->PnpPower.PowerPolicyStateCallbacks;
      if ( PowerPolicyStateCallbacks )
        goto LABEL_15;
      v13 = FxPoolAllocator(v7, &v7->FxPoolFrameworks, ExDefaultNonPagedPoolType, 0xC00uLL, v7->Tag, Caller);
      PowerPolicyStateCallbacks = (FxPowerPolicyStateCallback *)v13;
      if ( v13 )
        memset(v13, 0, 0xC00uLL);
      else
        PowerPolicyStateCallbacks = 0LL;
      DeviceInit->PnpPower.PowerPolicyStateCallbacks = PowerPolicyStateCallbacks;
      if ( PowerPolicyStateCallbacks )
      {
LABEL_15:
        v15 = v11;
        PowerPolicyStateCallbacks->m_Methods[v15].Callback = EvtDevicePowerPolicyStateChange;
        PowerPolicyStateCallbacks->m_Methods[v15].Types = CallbackTypes;
        return 0LL;
      }
      v14 = 29;
    }
    WPP_IFR_SF_d(v7, 2u, 0x12u, v14, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}

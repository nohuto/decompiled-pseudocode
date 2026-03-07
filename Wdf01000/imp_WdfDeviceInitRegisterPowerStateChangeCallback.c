__int64 __fastcall imp_WdfDeviceInitRegisterPowerStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_POWER_STATE PowerState,
        void (__fastcall *EvtDevicePowerStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  _FX_DRIVER_GLOBALS *v8; // rcx
  unsigned __int32 v9; // edi
  __int64 result; // rax
  unsigned __int32 v11; // r14d
  FxPowerStateCallback *PowerStateCallbacks; // rdi
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rax
  __int64 v16; // rax
  unsigned __int16 v17; // r9
  __m128i v18; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v7 = DeviceInit->DriverGlobals;
  v8 = DeviceInit->DriverGlobals;
  if ( !EvtDevicePowerStateChange )
    FxVerifierNullBugCheck(v8, retaddr);
  v9 = PowerState & 0xFFFF7FFF;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    v11 = v9 - 768;
    if ( v9 - 768 > 0x68 )
    {
      v17 = 24;
    }
    else if ( (CallbackTypes & 0xFFFFFFF8) != 0 || !CallbackTypes )
    {
      v17 = 25;
    }
    else
    {
      PowerStateCallbacks = DeviceInit->PnpPower.PowerStateCallbacks;
      if ( PowerStateCallbacks )
      {
LABEL_15:
        v16 = v11;
        PowerStateCallbacks->m_Methods[v16].Callback = EvtDevicePowerStateChange;
        PowerStateCallbacks->m_Methods[v16].Types = CallbackTypes;
        return 0LL;
      }
      Tag = v7->Tag;
      v18.m128i_i64[0] = 0LL;
      v18.m128i_i64[1] = 64LL;
      if ( v7->FxPoolTrackingOn )
        v14 = retaddr;
      else
        v14 = 0LL;
      v15 = FxPoolAllocator(v7, &v7->FxPoolFrameworks, &v18, 0x690uLL, Tag, v14);
      PowerStateCallbacks = (FxPowerStateCallback *)v15;
      if ( v15 )
      {
        memset(v15, 0, 0x690uLL);
        DeviceInit->PnpPower.PowerStateCallbacks = PowerStateCallbacks;
        goto LABEL_15;
      }
      DeviceInit->PnpPower.PowerStateCallbacks = 0LL;
      v17 = 26;
    }
    WPP_IFR_SF_D(v7, 2u, 0x12u, v17, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC000000D);
    return 3221225485LL;
  }
  return result;
}

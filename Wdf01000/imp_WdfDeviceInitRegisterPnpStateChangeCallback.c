/*
 * XREFs of imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C002F010
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitRegisterPnpStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PNP_STATE PnpState,
        void (__fastcall *EvtDevicePnpStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_PNP_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  _FX_DRIVER_GLOBALS *v8; // rcx
  unsigned __int32 v9; // edi
  __int64 result; // rax
  unsigned __int32 v11; // r14d
  FxPnpStateCallback *PnpStateCallbacks; // rdi
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
  if ( !EvtDevicePnpStateChange )
    FxVerifierNullBugCheck(v8, retaddr);
  v9 = PnpState & 0xFFFF7FFF;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    v11 = v9 - 256;
    if ( v9 - 256 > 0x39 )
    {
      v17 = 21;
    }
    else if ( (CallbackTypes & 0xFFFFFFF8) != 0 || !CallbackTypes )
    {
      v17 = 22;
    }
    else
    {
      PnpStateCallbacks = DeviceInit->PnpPower.PnpStateCallbacks;
      if ( PnpStateCallbacks )
      {
LABEL_15:
        v16 = v11;
        PnpStateCallbacks->m_Methods[v16].Callback = EvtDevicePnpStateChange;
        PnpStateCallbacks->m_Methods[v16].Types = CallbackTypes;
        return 0LL;
      }
      Tag = v7->Tag;
      v18.m128i_i64[0] = 0LL;
      v18.m128i_i64[1] = 64LL;
      if ( v7->FxPoolTrackingOn )
        v14 = retaddr;
      else
        v14 = 0LL;
      v15 = FxPoolAllocator(v7, &v7->FxPoolFrameworks, &v18, 0x3A0uLL, Tag, v14);
      PnpStateCallbacks = (FxPnpStateCallback *)v15;
      if ( v15 )
      {
        memset(v15, 0, 0x3A0uLL);
        DeviceInit->PnpPower.PnpStateCallbacks = PnpStateCallbacks;
        goto LABEL_15;
      }
      DeviceInit->PnpPower.PnpStateCallbacks = 0LL;
      v17 = 23;
    }
    WPP_IFR_SF_D(v7, 2u, 0x12u, v17, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC000000D);
    return 3221225485LL;
  }
  return result;
}

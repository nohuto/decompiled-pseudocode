__int64 __fastcall FxWmiProvider::_Create(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        WDFWMIPROVIDER__ **WmiProvider,
        FxWmiProvider **Provider)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  unsigned int _a2; // ecx
  unsigned int v13; // ebx
  unsigned int Flags; // edx
  unsigned __int16 v15; // r9
  FxWmiProvider *v16; // rax
  FxWmiProvider *v17; // rax
  FxWmiProvider *v18; // rbx
  int v19; // edi
  const _GUID *_a1; // [rsp+20h] [rbp-69h]
  int _a3; // [rsp+30h] [rbp-59h]
  int globals; // [rsp+38h] [rbp-51h]
  int v23; // [rsp+40h] [rbp-49h]
  unsigned __int8 update[8]; // [rsp+50h] [rbp-39h] BYREF
  FxDevice *pDevice; // [rsp+58h] [rbp-31h] BYREF
  void *hProvider; // [rsp+60h] [rbp-29h] BYREF
  FxPoolTypeOrPoolFlags v27; // [rsp+70h] [rbp-19h] BYREF
  _GUID zeroGuid; // [rsp+80h] [rbp-9h] BYREF

  pDevice = 0LL;
  hProvider = 0LL;
  FxObjectHandleGetPtr(CallersGlobals, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  update[0] = 0;
  m_Globals = pDevice->m_Globals;
  *Provider = 0LL;
  *WmiProvider = 0LL;
  result = FxValidateObjectAttributes(m_Globals, ProviderAttributes, 1);
  if ( (int)result >= 0 )
  {
    _a2 = WmiProviderConfig->Size;
    if ( WmiProviderConfig->Size != 40 )
    {
      v13 = -1073741820;
      WPP_IFR_SF_DDd(
        m_Globals,
        (unsigned __int8)WPP_FxWmiProvider_cpp_Traceguids,
        0xCu,
        0xAu,
        WPP_FxWmiProvider_cpp_Traceguids,
        _a2,
        40,
        -1073741820);
      return v13;
    }
    Flags = WmiProviderConfig->Flags;
    if ( (Flags & 0xFFFFFFF8) != 0 )
    {
      v13 = -1073741811;
      WPP_IFR_SF_DDd(
        m_Globals,
        (unsigned __int8)WPP_FxWmiProvider_cpp_Traceguids,
        0xCu,
        0xBu,
        WPP_FxWmiProvider_cpp_Traceguids,
        Flags,
        7,
        -1073741811);
      return v13;
    }
    if ( (Flags & 0xFFFFFFFB) != 0 && (Flags & 4) != 0 )
    {
      v15 = 12;
      v13 = -1073741811;
LABEL_25:
      WPP_IFR_SF_D(m_Globals, 2u, 0xCu, v15, WPP_FxWmiProvider_cpp_Traceguids, v13);
      return v13;
    }
    if ( WmiProviderConfig->EvtWmiProviderFunctionControl && (Flags & 6) == 0 )
    {
      WPP_IFR_SF_Dddd(m_Globals, Flags, v10, v11, _a1, WmiProviderConfig->Flags, _a3, globals, v23);
      return 3221225485LL;
    }
    zeroGuid = 0LL;
    if ( RtlCompareMemory(&WmiProviderConfig->Guid, &zeroGuid, 0x10uLL) == 16 )
    {
      v13 = -1073741811;
      v15 = 14;
      goto LABEL_25;
    }
    *(_QWORD *)&v27.UsePoolType = 0LL;
    v27.u.PoolFlags = 64LL;
    v16 = (FxWmiProvider *)FxObjectHandleAllocCommon(
                             m_Globals,
                             &v27,
                             0xD8uLL,
                             0,
                             ProviderAttributes,
                             0,
                             FxObjectTypeExternal);
    if ( !v16 || (FxWmiProvider::FxWmiProvider(v16, m_Globals, WmiProviderConfig, pDevice), (v18 = v17) == 0LL) )
    {
      v13 = -1073741670;
      v15 = 15;
      goto LABEL_25;
    }
    v19 = FxWmiIrpHandler::AddProvider(pDevice->m_PkgWmi, v17, update);
    if ( v19 >= 0 )
    {
      v19 = FxObject::Commit(v18, ProviderAttributes, &hProvider, (_FX_DRIVER_GLOBALS *)pDevice, 1u);
      if ( v19 >= 0 )
      {
        *WmiProvider = (WDFWMIPROVIDER__ *)hProvider;
        *Provider = v18;
        if ( update[0] )
          FxWmiIrpHandler::UpdateGuids(pDevice->m_PkgWmi);
        return (unsigned int)v19;
      }
      FxWmiIrpHandler::RemoveProvider(pDevice->m_PkgWmi, v18);
    }
    if ( update[0] )
      FxWmiIrpHandler::DecrementUpdateCount(pDevice->m_PkgWmi);
    FxObject::ClearEvtCallbacks(v18);
    ((void (*)(void))v18->DeleteObject)();
    return (unsigned int)v19;
  }
  return result;
}

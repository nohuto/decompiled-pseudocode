__int64 __fastcall imp_WdfDmaEnablerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DMA_ENABLER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMAENABLER__ **DmaEnablerHandle)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  WDFDMAENABLER__ **v11; // r12
  void *ParentObject; // rdx
  unsigned int v13; // edx
  FxDeviceBase *v14; // rax
  unsigned int _a1; // esi
  const void *_a2; // rax
  bool IsVersionGreaterThanOrEqualTo; // al
  __int16 v18; // r8
  size_t Size; // rdx
  int v20; // ecx
  unsigned __int16 v21; // r9
  FxDmaEnabler *v22; // rax
  FxObject *v23; // rax
  FxDmaEnabler *v24; // rsi
  int v25; // ebx
  FxObject *pParent; // [rsp+50h] [rbp-51h] BYREF
  WDFDMAENABLER__ *handle; // [rsp+58h] [rbp-49h] BYREF
  FxPoolTypeOrPoolFlags v28; // [rsp+60h] [rbp-41h] BYREF
  _WDF_DMA_ENABLER_CONFIG dmaConfig; // [rsp+70h] [rbp-31h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]
  FxDeviceBase *pDevice; // [rsp+100h] [rbp+5Fh] BYREF
  __int64 _a3; // [rsp+108h] [rbp+67h]

  _a3 = (__int64)Device;
  pDevice = 0LL;
  handle = 0LL;
  pParent = 0LL;
  memset(&dmaConfig, 0, sizeof(dmaConfig));
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1030u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result < 0 )
    return result;
  v11 = DmaEnablerHandle;
  if ( !DmaEnablerHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DmaEnablerHandle = 0LL;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( (int)result < 0 )
    return result;
  if ( Attributes )
  {
    ParentObject = Attributes->ParentObject;
    if ( ParentObject )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v13, 0xBu) )
      {
        v14 = FxDeviceBase::_SearchForDevice(pParent, 0LL);
        if ( !v14 )
        {
          _a1 = -1071644151;
          WPP_IFR_SF_qd(
            m_Globals,
            2u,
            0xFu,
            0xAu,
            WPP_FxDmaEnablerAPI_cpp_Traceguids,
            Attributes->ParentObject,
            -1071644151);
          return _a1;
        }
        if ( v14 != pDevice )
        {
          _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v14);
          _a1 = -1071644151;
          WPP_IFR_SF_qqqd(
            m_Globals,
            2u,
            0xFu,
            0xBu,
            WPP_FxDmaEnablerAPI_cpp_Traceguids,
            Attributes->ParentObject,
            _a2,
            _a3,
            -1071644151);
          return _a1;
        }
        goto LABEL_18;
      }
      if ( pParent != pDevice )
      {
        WPP_IFR_SF_qq(m_Globals, 3u, 0xFu, 0xCu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Attributes->ParentObject, Device);
        if ( m_Globals->FxVerifyDownlevel )
          FxVerifierDbgBreakPoint(m_Globals);
      }
    }
  }
  pParent = pDevice;
LABEL_18:
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    m_Globals,
                                    (unsigned int)ParentObject,
                                    0xBu);
  Size = Config->Size;
  v20 = IsVersionGreaterThanOrEqualTo ? 80 : 64;
  if ( (_DWORD)Size != v20 )
  {
    _a1 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, Size, 0xFu, v18 + 2, WPP_FxDmaEnablerAPI_cpp_Traceguids, Size, v20, -1073741820);
    return _a1;
  }
  if ( (unsigned int)Size < 0x50 )
  {
    dmaConfig.Profile = Config->Profile;
    dmaConfig.MaximumLength = Config->MaximumLength;
    memmove(&dmaConfig, Config, Size);
    dmaConfig.Size = 80;
    Config = &dmaConfig;
  }
  if ( Config->Profile != WdfDmaProfilePacket
    && Config->Profile != WdfDmaProfileScatterGather
    && Config->Profile != WdfDmaProfilePacket64
    && Config->Profile != WdfDmaProfileScatterGather64
    && Config->Profile != WdfDmaProfileScatterGatherDuplex
    && Config->Profile != WdfDmaProfileScatterGather64Duplex
    && (unsigned int)(Config->Profile - 7) >= 2 )
  {
    _a1 = -1073741811;
    WPP_IFR_SF_dd(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaEnablerAPI_cpp_Traceguids, Config->Profile, -1073741811);
    return _a1;
  }
  if ( !Config->MaximumLength )
  {
    v21 = 15;
    _a1 = -1073741811;
LABEL_40:
    WPP_IFR_SF_D(m_Globals, 2u, 0xFu, v21, WPP_FxDmaEnablerAPI_cpp_Traceguids, _a1);
    return _a1;
  }
  *(_QWORD *)&v28.UsePoolType = 0LL;
  v28.u.PoolFlags = 64LL;
  v22 = (FxDmaEnabler *)FxObjectHandleAllocCommon(m_Globals, &v28, 0x2C0uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( !v22 || (FxDmaEnabler::FxDmaEnabler(v22, m_Globals), (v24 = (FxDmaEnabler *)v23) == 0LL) )
  {
    _a1 = -1073741670;
    v21 = 16;
    goto LABEL_40;
  }
  v25 = FxObject::Commit(v23, Attributes, (void **)&handle, (_FX_DRIVER_GLOBALS *)pParent, 1u);
  if ( v25 < 0 || (v25 = FxDmaEnabler::Initialize(v24, Config, pDevice), v25 < 0) )
  {
    FxObject::ClearEvtCallbacks(v24);
    v24->DeleteObject(v24);
  }
  else
  {
    *v11 = handle;
  }
  return (unsigned int)v25;
}

/*
 * XREFs of imp_WdfDmaEnablerCreate @ 0x1C0018680
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00183B0 (WPP_IFR_SF_qqqd.c)
 *     ??0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001A93C (--0FxDmaEnabler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C001B2B0 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0039624 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

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

__int64 __fastcall imp_WdfCommonBufferCreateWithConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  unsigned __int8 v8; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int v10; // edi
  WDFCOMMONBUFFER__ **v11; // rsi
  _FX_DRIVER_GLOBALS *v12; // rcx
  __int64 result; // rax
  unsigned __int16 v14; // r9
  _WDF_OBJECT_ATTRIBUTES *v15; // r15
  FxCommonBuffer *v16; // rax
  FxObject *v17; // rax
  FxCommonBuffer *v18; // rdi
  int CommonBuffer; // ebx
  FxPoolTypeOrPoolFlags v20; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  FxDmaEnabler *pDmaEnabler; // [rsp+90h] [rbp+40h] BYREF
  void *handle; // [rsp+A8h] [rbp+58h] BYREF

  pDmaEnabler = 0LL;
  handle = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  m_Globals = pDmaEnabler->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(pDmaEnabler->m_Globals, retaddr);
  if ( Config->Size != 8 )
  {
    v10 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v8, 0xFu, 0xCu, WPP_FxCommonBufferAPI_cpp_Traceguids, Config->Size, 8, -1073741820);
    return v10;
  }
  v11 = CommonBufferHandle;
  v12 = pDmaEnabler->m_Globals;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(v12, retaddr);
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(v12, 0);
  if ( (int)result >= 0 )
  {
    if ( !Length )
    {
      v10 = -1073741811;
      v14 = 13;
LABEL_19:
      WPP_IFR_SF_D(m_Globals, 2u, 0xFu, v14, WPP_FxCommonBufferAPI_cpp_Traceguids, v10);
      return v10;
    }
    v15 = Attributes;
    result = FxValidateObjectAttributes(m_Globals, Attributes, 1);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)&v20.UsePoolType = 0LL;
    v20.u.PoolFlags = 64LL;
    v16 = (FxCommonBuffer *)FxObjectHandleAllocCommon(m_Globals, &v20, 0xB8uLL, 0, v15, 0, FxObjectTypeExternal);
    if ( !v16 || (FxCommonBuffer::FxCommonBuffer(v16, m_Globals, pDmaEnabler), (v18 = (FxCommonBuffer *)v17) == 0LL) )
    {
      v10 = -1073741670;
      v14 = 14;
      goto LABEL_19;
    }
    CommonBuffer = FxObject::Commit(v17, v15, &handle, (_FX_DRIVER_GLOBALS *)pDmaEnabler, 1u);
    if ( CommonBuffer < 0
      || (v18->m_Alignment = Config->AlignmentRequirement,
          CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v18, Length),
          CommonBuffer < 0) )
    {
      FxObject::ClearEvtCallbacks(v18);
      v18->DeleteObject(v18);
    }
    else
    {
      *v11 = (WDFCOMMONBUFFER__ *)handle;
    }
    return (unsigned int)CommonBuffer;
  }
  return result;
}

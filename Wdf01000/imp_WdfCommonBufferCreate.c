__int64 __fastcall imp_WdfCommonBufferCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  WDFCOMMONBUFFER__ **v7; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned int _a1; // edi
  unsigned __int16 v11; // r9
  FxCommonBuffer *v12; // rax
  FxObject *v13; // rax
  FxCommonBuffer *v14; // rdi
  int CommonBuffer; // ebx
  void *handle; // [rsp+40h] [rbp-20h] BYREF
  FxPoolTypeOrPoolFlags v17; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxDmaEnabler *pDmaEnabler; // [rsp+90h] [rbp+30h] BYREF

  pDmaEnabler = 0LL;
  handle = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  v7 = CommonBufferHandle;
  m_Globals = pDmaEnabler->m_Globals;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !Length )
    {
      _a1 = -1073741811;
      v11 = 10;
LABEL_15:
      WPP_IFR_SF_D(m_Globals, 2u, 0xFu, v11, WPP_FxCommonBufferAPI_cpp_Traceguids, _a1);
      return _a1;
    }
    result = FxValidateObjectAttributes(m_Globals, Attributes, 1);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)&v17.UsePoolType = 0LL;
    v17.u.PoolFlags = 64LL;
    v12 = (FxCommonBuffer *)FxObjectHandleAllocCommon(m_Globals, &v17, 0xB8uLL, 0, Attributes, 0, FxObjectTypeExternal);
    if ( !v12 || (FxCommonBuffer::FxCommonBuffer(v12, m_Globals, pDmaEnabler), (v14 = (FxCommonBuffer *)v13) == 0LL) )
    {
      _a1 = -1073741670;
      v11 = 11;
      goto LABEL_15;
    }
    CommonBuffer = FxObject::Commit(v13, Attributes, &handle, (_FX_DRIVER_GLOBALS *)pDmaEnabler, 1u);
    if ( CommonBuffer < 0 || (CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v14, Length), CommonBuffer < 0) )
    {
      FxObject::ClearEvtCallbacks(v14);
      v14->DeleteObject(v14);
    }
    else
    {
      *v7 = (WDFCOMMONBUFFER__ *)handle;
    }
    return (unsigned int)CommonBuffer;
  }
  return result;
}

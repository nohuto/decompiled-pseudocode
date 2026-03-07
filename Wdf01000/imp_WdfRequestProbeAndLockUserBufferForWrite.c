__int64 __fastcall imp_WdfRequestProbeAndLockUserBufferForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void *Buffer,
        unsigned __int64 Length,
        WDFMEMORY__ **MemoryObject)
{
  unsigned int v5; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ **v8; // rsi
  __int64 result; // rax
  unsigned int v10; // edx
  FxRequest *v11; // r10
  _FX_DRIVER_GLOBALS *v12; // rcx
  __int64 v13; // rcx
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  int IsDriverOwned; // edi
  signed int _a1; // eax
  FxRequestMemory *pMemory; // [rsp+30h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]
  unsigned __int8 irql; // [rsp+70h] [rbp+30h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp+40h] BYREF

  pRequest = 0LL;
  v5 = Length;
  pMemory = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v8 = MemoryObject;
  if ( !MemoryObject )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    v11 = pRequest;
    v12 = pRequest->m_Globals;
    if ( v12->FxVerifierOn && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v12, v10, 9u) || *(_BYTE *)(v13 + 325)) )
    {
      irql = 0;
      FxNonPagedObject::Lock(v11, &irql, v14);
      if ( m_Globals->FxVerifierOn )
        IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
      else
        IsDriverOwned = 0;
      FxNonPagedObject::Unlock(pRequest, irql, v15);
      if ( IsDriverOwned < 0 )
        return (unsigned int)IsDriverOwned;
      v11 = pRequest;
    }
    _a1 = FxRequest::ProbeAndLockForWrite(v11, Buffer, v5, &pMemory);
    IsDriverOwned = _a1;
    if ( _a1 >= 0 )
      *v8 = (WDFMEMORY__ *)FxObject::GetObjectHandleUnchecked(pMemory);
    else
      WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x43u, WPP_FxRequestApi_cpp_Traceguids, _a1);
    return (unsigned int)IsDriverOwned;
  }
  return result;
}

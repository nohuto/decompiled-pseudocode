__int64 __fastcall FxIoTargetFormatIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  unsigned int globals; // r14d
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFMEMORY__ *v16; // r15
  WDFMEMORY__ *v17; // r12
  unsigned __int8 v18; // r13
  _WDFMEMORY_OFFSET *v19; // rsi
  _WDFMEMORY_OFFSET *v20; // rbx
  int v21; // r14d
  __int64 v22; // rdx
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int16 v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r14
  FxRequestBuffer *v29; // [rsp+28h] [rbp-A1h]
  FxIoTarget *pTarget; // [rsp+68h] [rbp-61h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp-59h] BYREF
  FxRequestBuffer outputBuf; // [rsp+78h] [rbp-51h] BYREF
  FxRequestBuffer inputBuf; // [rsp+98h] [rbp-31h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-11h]
  IFxMemory *pInputMemory; // [rsp+118h] [rbp+4Fh] BYREF
  void *_a1; // [rsp+120h] [rbp+57h]
  __int64 _a2; // [rsp+128h] [rbp+5Fh]
  unsigned int v38; // [rsp+130h] [rbp+67h]

  v38 = Ioctl;
  _a2 = (__int64)Request;
  _a1 = IoTarget;
  pRequest = 0LL;
  globals = Ioctl;
  *(_QWORD *)&outputBuf.DataType = 0LL;
  pInputMemory = 0LL;
  pTarget = 0LL;
  LODWORD(inputBuf.u.Memory.Memory) = 0;
  LODWORD(outputBuf.u.Memory.Memory) = 0;
  *(_OWORD *)&inputBuf.u.RefMdl.Offsets = 0LL;
  v34 = 0LL;
  *(_OWORD *)&outputBuf.u.RefMdl.Offsets = 0LL;
  *(_QWORD *)&inputBuf.DataType = 0LL;
  FxObjectHandleGetPtr(FxDriverGlobals, IoTarget, 0x1200u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  v16 = OutputBuffer;
  v17 = InputBuffer;
  v18 = Internal;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDdqq(
      m_Globals,
      v12,
      v13,
      v14,
      (const _GUID *)v29,
      IoTarget,
      Request,
      globals,
      Internal,
      InputBuffer,
      OutputBuffer);
  FxObjectHandleGetPtr(m_Globals, Request, 0x1008u, (void **)&outputBuf);
  v19 = InputBufferOffsets;
  if ( v17 )
  {
    FxObjectHandleGetPtr(m_Globals, v17, 0x100Au, (void **)&pInputMemory);
    if ( v19 )
    {
      BufferLength = v19->BufferLength;
      v25 = BufferLength + v19->BufferOffset;
      if ( v25 < BufferLength || v25 > pInputMemory->GetBufferSize(pInputMemory) )
      {
        v26 = 44;
LABEL_19:
        WPP_IFR_SF_D(m_Globals, 2u, 0xEu, v26, WPP_FxIoTargetAPI_cpp_Traceguids, 0xC0000095);
        return 3221225621LL;
      }
    }
    FxRequestBuffer::SetMemory((FxRequestBuffer *)&inputBuf.u, pInputMemory, v19);
  }
  v20 = OutputBufferOffsets;
  if ( v16 )
  {
    FxObjectHandleGetPtr(m_Globals, v16, 0x100Au, (void **)&pTarget);
    if ( v20 )
    {
      v27 = v20->BufferLength;
      v28 = v27 + v20->BufferOffset;
      if ( v28 < v27 || v28 > ((__int64 (__fastcall *)(FxIoTarget *))pTarget->~FxObject)(pTarget) )
      {
        v26 = 45;
        goto LABEL_19;
      }
      globals = v38;
    }
    FxRequestBuffer::SetMemory((FxRequestBuffer *)&outputBuf.u, (IFxMemory *)pTarget, v20);
  }
  v21 = FxIoTarget::FormatIoctlRequest(
          (FxIoTarget *)pRequest,
          *(FxRequestBase **)&outputBuf.DataType,
          globals,
          v18,
          (FxRequestBuffer *)&inputBuf.u,
          (FxRequestBuffer *)&outputBuf.u);
  if ( v21 >= 0 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)&outputBuf.DataType + 168LL);
    *(_DWORD *)(v22 + 32) = v38;
    *(_DWORD *)(v22 + 12) = (v18 != 0) + 14;
    *(_QWORD *)(v22 + 40) = v17;
    if ( v19 )
      *(_QWORD *)(v22 + 48) = v19->BufferOffset;
    *(_QWORD *)(v22 + 56) = v16;
    if ( v20 )
      *(_QWORD *)(v22 + 64) = v20->BufferOffset;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTargetAPI_cpp_Traceguids, _a1, _a2, v21);
  return (unsigned int)v21;
}

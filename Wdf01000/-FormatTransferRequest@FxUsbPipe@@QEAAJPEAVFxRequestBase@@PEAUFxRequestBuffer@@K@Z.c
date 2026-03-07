int __fastcall FxUsbPipe::FormatTransferRequest(
        FxUsbPipe *this,
        FxRequestBase *Request,
        FxRequestBuffer *Buffer,
        unsigned int TransferFlags)
{
  const void *_a1; // rax
  int v9; // edx
  int result; // eax
  signed __int8 EndpointAddress; // al
  unsigned __int16 v12; // r9
  unsigned int MaxPacketSize; // eax
  unsigned __int64 v14; // r8
  int _a3; // eax
  int v16; // edi
  FxRequestContext *m_RequestContext; // rdi
  bool FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_URB_TYPE v20; // bp
  void *v21; // r8
  FX_POOL **v22; // rax
  __int64 v23; // rax
  int v24; // ebp
  USBD_HANDLE__ *m_USBDHandle; // r14
  unsigned int v26; // ecx
  _FX_DRIVER_GLOBALS *v27; // rdx
  void *PipeHandle; // rcx
  __m128i pMdl; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( !FxUsbPipe::IsType(this, WdfUsbPipeTypeBulk) && !FxUsbPipe::IsType(this, WdfUsbPipeTypeInterrupt) )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, v9 + 10, v9 + 8, WPP_FxUsbPipeKm_cpp_Traceguids, _a1, -1073741808);
    return -1073741808;
  }
  FxRequestBuffer::GetBufferLength(Buffer);
  EndpointAddress = this->m_PipeInformation.EndpointAddress;
  if ( (TransferFlags & 1) != 0 )
  {
    if ( EndpointAddress >= 0 )
    {
      v12 = 14;
LABEL_8:
      WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, v12, WPP_FxUsbPipeKm_cpp_Traceguids, this);
      return -1073741808;
    }
    if ( this->m_CheckPacketSize )
    {
      MaxPacketSize = FxUsbPipe::GetMaxPacketSize(this);
      if ( v14 % MaxPacketSize )
        return -1073741306;
    }
  }
  else if ( EndpointAddress < 0 )
  {
    v12 = 15;
    goto LABEL_8;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, this);
  v16 = _a3;
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxUsbPipeKm_cpp_Traceguids, this, (__int64)Request, _a3);
    return v16;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 16 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this->m_UsbDevice, Request);
    m_Globals = this->m_Globals;
    v20 = FxUrbTypeForRequest;
    pMdl.m128i_i64[0] = 0LL;
    pMdl.m128i_i64[1] = 64LL;
    if ( m_Globals->FxPoolTrackingOn )
      v21 = retaddr;
    else
      v21 = 0LL;
    v22 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &pMdl, 0x120uLL, m_Globals->Tag, v21);
    if ( !v22 )
      return -1073741670;
    FxUsbPipeTransferContext::FxUsbPipeTransferContext((FxUsbPipeTransferContext *)v22, v20);
    m_RequestContext = (FxRequestContext *)v23;
    if ( !v23 )
      return -1073741670;
    if ( v20 == FxUrbTypeUsbdAllocated )
    {
      if ( *(_QWORD *)(v23 + 264) )
      {
        v24 = -1073741436;
LABEL_26:
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return v24;
      }
      m_USBDHandle = this->m_USBDHandle;
      v24 = USBD_UrbAllocate(m_USBDHandle, (_URB **)(v23 + 264));
      if ( v24 < 0 )
        goto LABEL_26;
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  if ( ((Buffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (v26 = this->m_PipeInformation.EndpointAddress,
        v27 = this->m_Globals,
        pMdl.m128i_i64[0] = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   Buffer,
                   v27,
                   (_MDL **)&pMdl,
                   (_MDL **)&m_RequestContext[2].m_RequestMemory,
                   &m_RequestContext[2].m_RequestType,
                   (_LOCK_OPERATION)(v26 >> 7),
                   0,
                   0LL),
        result >= 0) )
  {
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, Buffer);
    PipeHandle = this->m_PipeInformation.PipeHandle;
    *(_DWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 32) = TransferFlags;
    *(_QWORD *)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length + 24) = PipeHandle;
    FxFormatUsbRequest(
      Request,
      (_FILE_OBJECT *)m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length,
      (_FX_URB_TYPE)(m_RequestContext[2].m_CompletionParams.Parameters.Ioctl.Output.Length != (_QWORD)m_RequestContext
                                                                                            + 136),
      this->m_USBDHandle);
    return 0;
  }
  return result;
}

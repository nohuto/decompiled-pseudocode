int __fastcall FxUsbDevice::FormatControlRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        FxRequestBuffer *RequestBuffer)
{
  unsigned int BufferLength; // eax
  unsigned __int8 v9; // dl
  int result; // eax
  int _a3; // ebx
  const void *ObjectHandleUnchecked; // rax
  FxRequestContext *m_RequestContext; // rbx
  bool FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_URB_TYPE v16; // bp
  void *v17; // r8
  FX_POOL **v18; // rax
  __int64 v19; // rax
  USBD_HANDLE__ *m_USBDHandle; // rbp
  signed int v21; // r15d
  _FX_DRIVER_GLOBALS *v22; // rdx
  __m128i pMdl; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  BufferLength = FxRequestBuffer::GetBufferLength(RequestBuffer);
  if ( BufferLength > 0xFFFFuLL )
  {
    WPP_IFR_SF_i(this->m_Globals, v9, 0xEu, 0x16u, WPP_FxusbDeviceKm_cpp_Traceguids, BufferLength);
    return -1073741811;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, this);
  if ( _a3 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xEu,
      0x17u,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      ObjectHandleUnchecked,
      (__int64)Request,
      _a3);
    return _a3;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 19 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
    m_Globals = this->m_Globals;
    v16 = FxUrbTypeForRequest;
    pMdl.m128i_i64[0] = 0LL;
    pMdl.m128i_i64[1] = 64LL;
    if ( m_Globals->FxPoolTrackingOn )
      v17 = retaddr;
    else
      v17 = 0LL;
    v18 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &pMdl, 0x128uLL, m_Globals->Tag, v17);
    if ( !v18 )
      return -1073741670;
    FxUsbDeviceControlContext::FxUsbDeviceControlContext((FxUsbDeviceControlContext *)v18, v16);
    m_RequestContext = (FxRequestContext *)v19;
    if ( !v19 )
      return -1073741670;
    if ( v16 == FxUrbTypeUsbdAllocated )
    {
      m_USBDHandle = this->m_USBDHandle;
      v21 = USBD_UrbAllocate(m_USBDHandle, (_URB **)(v19 + 272));
      if ( v21 < 0 )
      {
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x18u, WPP_FxusbDeviceKm_cpp_Traceguids, v21);
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return v21;
      }
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  if ( ((RequestBuffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (v22 = this->m_Globals,
        pMdl.m128i_i64[0] = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   RequestBuffer,
                   v22,
                   (_MDL **)&pMdl,
                   (_MDL **)&m_RequestContext[2].m_RequestType,
                   (unsigned __int8 *)&m_RequestContext[3],
                   IoModifyAccess,
                   0,
                   0LL),
        result >= 0) )
  {
    FxUsbDeviceControlContext::StoreAndReferenceMemory(
      (FxUsbDeviceControlContext *)m_RequestContext,
      this,
      RequestBuffer,
      SetupPacket);
    FxFormatUsbRequest(
      Request,
      (_FILE_OBJECT *)m_RequestContext[2].m_RequestMemory,
      (_FX_URB_TYPE)(m_RequestContext[2].m_RequestMemory != (IFxMemory *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb
                                                          + 1),
      this->m_USBDHandle);
    return 0;
  }
  return result;
}

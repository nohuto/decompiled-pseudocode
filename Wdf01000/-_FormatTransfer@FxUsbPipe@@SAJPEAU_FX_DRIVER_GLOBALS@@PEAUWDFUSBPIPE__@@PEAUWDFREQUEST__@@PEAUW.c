__int64 __fastcall FxUsbPipe::_FormatTransfer(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *TransferMemory,
        _WDFMEMORY_OFFSET *TransferOffsets,
        unsigned int Flags)
{
  WDFUSBPIPE__ *_a1; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _WDFMEMORY_OFFSET *v10; // rsi
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v12; // rbx
  int _a4; // ebx
  char v14; // r14
  FxRequestContext *m_RequestContext; // rdi
  unsigned __int64 BufferOffset; // rax
  FxRequest *pRequest; // [rsp+50h] [rbp-30h] BYREF
  FxRequestBuffer buf; // [rsp+58h] [rbp-28h] BYREF
  IFxMemory *pMemory; // [rsp+C0h] [rbp+40h] BYREF
  WDFUSBPIPE__ *v21; // [rsp+C8h] [rbp+48h]
  FxUsbPipe *pUsbPipe; // [rsp+D8h] [rbp+58h] BYREF

  v21 = Pipe;
  buf.DataType = FxRequestBufferUnspecified;
  pMemory = 0LL;
  pUsbPipe = 0LL;
  pRequest = 0LL;
  memset(&buf.u, 0, sizeof(buf.u));
  _a1 = Pipe;
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v10 = TransferOffsets;
  if ( TransferMemory )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)TransferMemory, 0x100Au, (void **)&pMemory);
    if ( v10 )
    {
      BufferLength = v10->BufferLength;
      v12 = BufferLength + v10->BufferOffset;
      if ( v12 < BufferLength || v12 > pMemory->GetBufferSize(pMemory) )
      {
        _a4 = -1073741675;
        goto $Done_49;
      }
    }
    FxRequestBuffer::SetMemory(&buf, pMemory, v10);
  }
  v14 = Flags;
  _a4 = FxUsbPipe::FormatTransferRequest(pUsbPipe, pRequest, &buf, Flags);
  if ( _a4 >= 0 )
  {
    m_RequestContext = pRequest->m_RequestContext;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = TransferMemory;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = (void *)(unsigned int)FxRequestBuffer::GetBufferLength(&buf);
    if ( v10 )
      BufferOffset = v10->BufferOffset;
    else
      BufferOffset = 0LL;
    m_RequestContext[1].m_CompletionParams.IoStatus.Information = BufferOffset;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
    HIDWORD(m_RequestContext[1].__vftable) = (v14 & 1) + 5;
    _a1 = v21;
  }
$Done_49:
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqqd(
      m_Globals,
      5u,
      0xEu,
      0x1Du,
      (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      _a1,
      Request,
      (__int64)TransferMemory,
      _a4);
  return (unsigned int)_a4;
}

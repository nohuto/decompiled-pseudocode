__int64 __fastcall imp_WdfUsbTargetDeviceFormatRequestForString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *Memory,
        _WDFMEMORY_OFFSET *Offset,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  WDFUSBDEVICE__ *_a5; // r12
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 v14; // r14
  unsigned __int8 v15; // r15
  _WDFMEMORY_OFFSET *v16; // rdi
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v18; // r12
  unsigned int v20; // eax
  unsigned int v21; // edi
  int v22; // eax
  FxRequestContext *m_RequestContext; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  FxUsbDevice *pUsbDevice; // [rsp+50h] [rbp-30h] BYREF
  FxRequest *pRequest; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer buf; // [rsp+60h] [rbp-20h] BYREF
  IFxMemory *pMemory; // [rsp+C0h] [rbp+40h] BYREF
  WDFUSBDEVICE__ *v29; // [rsp+C8h] [rbp+48h]

  v29 = UsbDevice;
  pMemory = 0LL;
  pUsbDevice = 0LL;
  buf.DataType = FxRequestBufferUnspecified;
  pRequest = 0LL;
  _a5 = UsbDevice;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  v14 = LangID;
  v15 = StringIndex;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqqdD(m_Globals, v10, v11, v12, traceGuid, _a5, Request, Memory, StringIndex, LangID);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Memory, 0x100Au, (void **)&pMemory);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v16 = Offset;
  if ( Offset )
  {
    BufferLength = Offset->BufferLength;
    v18 = BufferLength + Offset->BufferOffset;
    if ( v18 < BufferLength || v18 > pMemory->GetBufferSize(pMemory) )
      return 3221225621LL;
    _a5 = v29;
  }
  FxRequestBuffer::SetMemory(&buf, pMemory, v16);
  v20 = FxRequestBuffer::GetBufferLength(&buf);
  if ( (v20 & 1) != 0 )
  {
    v21 = -1073741811;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0xDu, WPP_FxUsbDeviceAPI_cpp_Traceguids, Memory, v20, -1073741811);
  }
  else
  {
    v22 = FxUsbDevice::FormatStringRequest(pUsbDevice, pRequest, &buf, v15, v14);
    v21 = v22;
    if ( v22 >= 0 )
    {
      m_RequestContext = pRequest->m_RequestContext;
      *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Memory;
      BYTE2(m_RequestContext[1].m_CompletionParams.IoStatus.Pointer) = v15;
      LOWORD(m_RequestContext[1].m_CompletionParams.IoStatus.Status) = v14;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qqqd(m_Globals, 5u, 0xEu, 0xEu, WPP_FxUsbDeviceAPI_cpp_Traceguids, _a5, Request, (__int64)Memory, v22);
  }
  return v21;
}

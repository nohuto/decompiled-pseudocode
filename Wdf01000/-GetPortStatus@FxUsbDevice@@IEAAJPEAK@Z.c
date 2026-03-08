/*
 * XREFs of ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C005D5FC
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C005A2D8 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1C005D770 (-IsConnected@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0016B54 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0052BC8 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0053CA8 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0089A70 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0089B74 (--1FxSyncRequest@@UEAA@XZ.c)
 */

__int64 __fastcall FxUsbDevice::GetPortStatus(FxUsbDevice *this, IFxMemory *PortStatus)
{
  FxRequestBase *m_TrueRequest; // rdx
  int v5; // ebx
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+20h] [rbp-E0h] BYREF
  FxInternalIoctlOthersContext context; // [rsp+30h] [rbp-D0h] BYREF
  FxSyncRequest syncRequest; // [rsp+A0h] [rbp-60h] BYREF
  FxRequestBuffer args[3]; // [rsp+1D0h] [rbp+D0h] BYREF

  context.m_RequestType = 2;
  memset(&context.m_CompletionParams, 0, 80);
  context.m_CompletionParams.Size = 72;
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  context.__vftable = (FxInternalIoctlOthersContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
  *(_OWORD *)context.m_MemoryObjects = 0LL;
  `vector constructor iterator'(
    (char *)args,
    0x20uLL,
    3uLL,
    (void *(__fastcall *)(void *))FxRequestBuffer::FxRequestBuffer);
  FxSyncRequest::FxSyncRequest(&syncRequest, this->m_Globals, &context, 0LL);
  m_TrueRequest = syncRequest.m_TrueRequest;
  LODWORD(PortStatus->__vftable) = 0;
  args[0].u.Mdl.Length = 0;
  args[1].u.Memory.Memory = 0LL;
  args[1].u.Mdl.Length = 0;
  args[2].u.Memory.Memory = 0LL;
  args[2].u.Mdl.Length = 0;
  args[0].DataType = FxRequestBufferBuffer;
  args[0].u.Memory.Memory = PortStatus;
  args[1].DataType = FxRequestBufferBuffer;
  args[2].DataType = FxRequestBufferBuffer;
  v5 = FxIoTarget::FormatInternalIoctlOthersRequest(this, m_TrueRequest, 0x220013u, args);
  if ( v5 >= 0 )
  {
    options.Timeout = 0LL;
    options.Size = 16;
    options.Flags = 4;
    v5 = FxIoTarget::SubmitSync(this, syncRequest.m_TrueRequest, &options, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&syncRequest);
  return (unsigned int)v5;
}

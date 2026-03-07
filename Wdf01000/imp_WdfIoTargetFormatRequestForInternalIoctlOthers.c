__int64 __fastcall imp_WdfIoTargetFormatRequestForInternalIoctlOthers(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        WDFMEMORY__ *OtherArg1,
        _WDFMEMORY_OFFSET *OtherArg1Offsets,
        WDFMEMORY__ *OtherArg2,
        _WDFMEMORY_OFFSET *OtherArg2Offsets,
        WDFMEMORY__ *OtherArg4,
        _WDFMEMORY_OFFSET *OtherArg4Offsets)
{
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbx
  WDFMEMORY__ *v19; // rdx
  _WDFMEMORY_OFFSET *v20; // r14
  IFxMemory *v21; // rcx
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v23; // rax
  FxRequestContext *m_RequestContext; // rdx
  int id; // ebx
  unsigned int v26; // r8d
  unsigned __int16 v27; // r9
  void *flags; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  FxIoTarget *pTarget; // [rsp+68h] [rbp-98h] BYREF
  FxRequest *pRequest; // [rsp+70h] [rbp-90h] BYREF
  void *v34; // [rsp+78h] [rbp-88h]
  void *_a4; // [rsp+80h] [rbp-80h]
  unsigned __int64 v36; // [rsp+88h] [rbp-78h]
  void *v37; // [rsp+90h] [rbp-70h]
  IFxMemory *pMemory[3]; // [rsp+98h] [rbp-68h] BYREF
  WDFMEMORY__ *memoryHandles[3]; // [rsp+B0h] [rbp-50h]
  _WDFMEMORY_OFFSET *offsets[3]; // [rsp+C8h] [rbp-38h]
  FxRequestBuffer args[3]; // [rsp+E0h] [rbp-20h] BYREF

  pTarget = 0LL;
  pRequest = 0LL;
  v37 = Request;
  _a4 = IoTarget;
  v34 = OtherArg4;
  memset(pMemory, 0, sizeof(pMemory));
  `vector constructor iterator'(
    (char *)args,
    0x20uLL,
    3uLL,
    (void *(__fastcall *)(void *))FxRequestBuffer::FxRequestBuffer);
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(m_Globals, v14, v15, 0x37u, traceGuid, _a4, Request, Ioctl, OtherArg1, OtherArg2, OtherArg4);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  offsets[0] = OtherArg1Offsets;
  offsets[1] = OtherArg2Offsets;
  memoryHandles[2] = OtherArg4;
  v17 = 0LL;
  offsets[2] = OtherArg4Offsets;
  v18 = 0LL;
  memoryHandles[0] = OtherArg1;
  memoryHandles[1] = OtherArg2;
  do
  {
    v19 = memoryHandles[v18];
    if ( v19 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v19, 0x100Au, (void **)&pMemory[v17]);
      v20 = offsets[v18];
      v21 = pMemory[v18];
      if ( v20 )
      {
        BufferLength = v20->BufferLength;
        v36 = BufferLength + v20->BufferOffset;
        if ( v36 < BufferLength || (v23 = v21->GetBufferSize(v21), v36 > v23) )
        {
          id = -1073741675;
          WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x38u, WPP_FxIoTargetAPI_cpp_Traceguids, v17 + 1, -1073741675);
          return (unsigned int)id;
        }
      }
      FxRequestBuffer::SetMemory(&args[(unsigned int)v17], pMemory[v18], v20);
    }
    v17 = (unsigned int)(v17 + 1);
    ++v18;
  }
  while ( (unsigned int)v17 < 3 );
  id = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, pRequest, Ioctl, args);
  flags = v34;
  if ( id >= 0 )
  {
    m_RequestContext = pRequest->m_RequestContext;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeOther;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)OtherArg1;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = (unsigned __int64)OtherArg2;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = (unsigned __int64)flags;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqqd(
      m_Globals,
      (unsigned __int8)m_RequestContext,
      v26,
      v27,
      traceGuid,
      _a4,
      v37,
      Ioctl,
      OtherArg1,
      OtherArg2,
      flags,
      id);
  return (unsigned int)id;
}

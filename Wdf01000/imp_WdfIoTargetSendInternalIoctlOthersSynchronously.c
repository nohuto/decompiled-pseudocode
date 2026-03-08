/*
 * XREFs of imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0051A00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C0006540 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0016B54 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0050DAC (WPP_IFR_SF_qqDqqq.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0052BC8 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0053CA8 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0089A70 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0089B74 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C008A19C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 */

__int64 __fastcall imp_WdfIoTargetSendInternalIoctlOthersSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        _WDF_MEMORY_DESCRIPTOR *OtherArg1,
        _WDF_MEMORY_DESCRIPTOR *OtherArg2,
        _WDF_MEMORY_DESCRIPTOR *OtherArg4,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFREQUEST__ *_a5; // rbx
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  int v16; // ebx
  FxRequestBase *v17; // r8
  signed int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *v24; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-E0h]
  FxIoTarget *pTarget; // [rsp+60h] [rbp-A0h] BYREF
  void *_a1; // [rsp+68h] [rbp-98h]
  _WDF_REQUEST_SEND_OPTIONS *Options; // [rsp+70h] [rbp-90h]
  WDFREQUEST__ *v30; // [rsp+78h] [rbp-88h]
  FxInternalIoctlOthersContext context; // [rsp+80h] [rbp-80h] BYREF
  FxSyncRequest v32; // [rsp+F0h] [rbp-10h] BYREF
  FxRequestBuffer args[3]; // [rsp+220h] [rbp+120h] BYREF

  pTarget = 0LL;
  _a1 = IoTarget;
  v30 = Request;
  Options = RequestOptions;
  `vector constructor iterator'(
    (char *)args,
    0x20uLL,
    3uLL,
    (void *(__fastcall *)(void *))FxRequestBuffer::FxRequestBuffer);
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  context.m_RequestType = 2;
  memset(&context.m_CompletionParams, 0, 80);
  context.m_CompletionParams.Size = 72;
  _a5 = v30;
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  context.__vftable = (FxInternalIoctlOthersContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
  *(_OWORD *)context.m_MemoryObjects = 0LL;
  FxSyncRequest::FxSyncRequest(&v32, m_Globals, &context, v30);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDqqq(m_Globals, v14, v15, 0x30u, traceGuid, _a1, _a5, Ioctl, OtherArg1, OtherArg2, OtherArg4);
  v16 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v16 >= 0 )
  {
    v18 = FxValidateRequestOptions(m_Globals, Options, v17);
    v16 = v18;
    if ( v18 >= 0 )
    {
      if ( OtherArg1
        && (v19 = FxRequestBuffer::ValidateMemoryDescriptor(args, m_Globals, OtherArg1, 0), v16 = v19, v19 < 0) )
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x32u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg1, v19);
      }
      else if ( OtherArg2
             && (v20 = FxRequestBuffer::ValidateMemoryDescriptor(&args[1], m_Globals, OtherArg2, 0), v16 = v20, v20 < 0) )
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x33u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg2, v20);
      }
      else if ( OtherArg4
             && (v21 = FxRequestBuffer::ValidateMemoryDescriptor(&args[2], m_Globals, OtherArg4, 0), v16 = v21, v21 < 0) )
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x34u, WPP_FxIoTargetAPI_cpp_Traceguids, OtherArg4, v21);
      }
      else
      {
        v22 = FxIoTarget::FormatInternalIoctlOthersRequest(pTarget, v32.m_TrueRequest, Ioctl, args);
        v16 = v22;
        if ( v22 < 0 )
        {
          WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x36u, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v22);
        }
        else
        {
          if ( m_Globals->FxVerboseOn )
          {
            ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v32.m_TrueRequest);
            if ( ObjectHandleUnchecked )
              v24 = (const void *)ObjectHandleUnchecked;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x35u, WPP_FxIoTargetAPI_cpp_Traceguids, _a1, v24);
          }
          v16 = FxIoTarget::SubmitSync(pTarget, v32.m_TrueRequest, Options, 0LL);
          if ( BytesReturned )
            *BytesReturned = v32.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
        }
      }
    }
    else
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x31u, WPP_FxIoTargetAPI_cpp_Traceguids, v18);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v32);
  return (unsigned int)v16;
}

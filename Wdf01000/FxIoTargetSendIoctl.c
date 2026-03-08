/*
 * XREFs of FxIoTargetSendIoctl @ 0x1C00505DC
 * Callers:
 *     imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x1C0051D50 (imp_WdfIoTargetSendInternalIoctlSynchronously.c)
 *     imp_WdfIoTargetSendIoctlSynchronously @ 0x1C0051DB0 (imp_WdfIoTargetSendIoctlSynchronously.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00022E8 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0002A08 (--0FxIoContext@@QEAA@XZ.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C0002AA0 (--1FxIoContext@@UEAA@XZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C0006540 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0053CA8 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0089A70 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0089B74 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C008A19C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 */

__int64 __fastcall FxIoTargetSendIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v13; // ebx
  FxRequestBase *v14; // r8
  signed int v15; // eax
  _WDF_MEMORY_DESCRIPTOR *v16; // rsi
  int v17; // eax
  unsigned __int16 v18; // r9
  int v19; // eax
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *v21; // r10
  FxRequestBuffer outputBuf; // [rsp+50h] [rbp-B0h] BYREF
  FxRequestBuffer inputBuf; // [rsp+70h] [rbp-90h] BYREF
  FxSyncRequest v25; // [rsp+90h] [rbp-70h] BYREF
  FxIoContext context; // [rsp+1C0h] [rbp+C0h] BYREF
  FxIoTarget *pTarget; // [rsp+2A0h] [rbp+1A0h] BYREF

  pTarget = 0LL;
  outputBuf.DataType = FxRequestBufferUnspecified;
  inputBuf.DataType = FxRequestBufferUnspecified;
  memset(&inputBuf.u, 0, sizeof(inputBuf.u));
  memset(&outputBuf.u, 0, sizeof(outputBuf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  FxIoContext::FxIoContext(&context);
  FxSyncRequest::FxSyncRequest(&v25, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqdd(m_Globals, 5u, 0xEu, 0x25u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, Request, Ioctl, Internal);
  v13 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v13 >= 0 )
  {
    v15 = FxValidateRequestOptions(m_Globals, RequestOptions, v14);
    v13 = v15;
    if ( v15 < 0 )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x26u, WPP_FxIoTargetAPI_cpp_Traceguids, v15);
      goto LABEL_21;
    }
    v16 = InputBuffer;
    if ( InputBuffer )
    {
      v17 = FxRequestBuffer::ValidateMemoryDescriptor(&inputBuf, m_Globals, InputBuffer, 0);
      v13 = v17;
      if ( v17 < 0 )
      {
        v18 = 39;
LABEL_12:
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, v18, WPP_FxIoTargetAPI_cpp_Traceguids, v16, v17);
        goto LABEL_21;
      }
    }
    v16 = OutputBuffer;
    if ( OutputBuffer )
    {
      v17 = FxRequestBuffer::ValidateMemoryDescriptor(&outputBuf, m_Globals, OutputBuffer, 0);
      v13 = v17;
      if ( v17 < 0 )
      {
        v18 = 40;
        goto LABEL_12;
      }
    }
    v19 = FxIoTarget::FormatIoctlRequest(pTarget, v25.m_TrueRequest, Ioctl, Internal, &inputBuf, &outputBuf);
    v13 = v19;
    if ( v19 < 0 )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v19);
    }
    else
    {
      if ( m_Globals->FxVerboseOn )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v25.m_TrueRequest);
        if ( ObjectHandleUnchecked )
          v21 = (const void *)ObjectHandleUnchecked;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, v21);
      }
      v13 = FxIoTarget::SubmitSync(pTarget, v25.m_TrueRequest, RequestOptions, 0LL);
      if ( BytesReturned )
        *BytesReturned = v25.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
    }
  }
LABEL_21:
  FxSyncRequest::~FxSyncRequest(&v25);
  FxIoContext::~FxIoContext(&context);
  return (unsigned int)v13;
}

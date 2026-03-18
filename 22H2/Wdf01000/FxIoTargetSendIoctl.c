/*
 * XREFs of FxIoTargetSendIoctl @ 0x1C0017974
 * Callers:
 *     imp_WdfIoTargetSendIoctlSynchronously @ 0x1C0017920 (imp_WdfIoTargetSendIoctlSynchronously.c)
 *     imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x1C0063E50 (imp_WdfIoTargetSendInternalIoctlSynchronously.c)
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C00051F4 (--0FxIoContext@@QEAA@XZ.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C000528C (--1FxIoContext@@UEAA@XZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000AD0C (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0017B54 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0017BC0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0017C64 (--1FxSyncRequest@@UEAA@XZ.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qDd @ 0x1C002F728 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C002FC10 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C938 (WPP_IFR_SF_qdd.c)
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
  _WDF_REQUEST_SEND_OPTIONS *v14; // rsi
  _WDF_MEMORY_DESCRIPTOR *v15; // r14
  signed int v16; // eax
  int v17; // eax
  unsigned int Flags; // edx
  unsigned __int16 v20; // r9
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *v22; // r10
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
    WPP_IFR_SF_qqDd(m_Globals, 5u, 0xEu, 0x25u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, Request, Ioctl, Internal);
  v13 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v13 >= 0 )
  {
    v14 = RequestOptions;
    if ( !RequestOptions )
    {
LABEL_5:
      v15 = InputBuffer;
      if ( InputBuffer
        && (v16 = FxRequestBuffer::ValidateMemoryDescriptor(&inputBuf, m_Globals, InputBuffer, 0), v13 = v16, v16 < 0) )
      {
        v20 = 39;
      }
      else
      {
        v15 = OutputBuffer;
        if ( !OutputBuffer
          || (v16 = FxRequestBuffer::ValidateMemoryDescriptor(&outputBuf, m_Globals, OutputBuffer, 0),
              v13 = v16,
              v16 >= 0) )
        {
          v17 = FxIoTarget::FormatIoctlRequest(pTarget, v25.m_TrueRequest, Ioctl, Internal, &inputBuf, &outputBuf);
          v13 = v17;
          if ( v17 < 0 )
          {
            WPP_IFR_SF_dd(m_Globals, 2u, 0xEu, 0x2Au, WPP_FxIoTargetAPI_cpp_Traceguids, Ioctl, v17);
          }
          else
          {
            if ( m_Globals->FxVerboseOn )
            {
              ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v25.m_TrueRequest);
              if ( ObjectHandleUnchecked )
                v22 = (const void *)ObjectHandleUnchecked;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, v22);
            }
            v13 = FxIoTarget::SubmitSync(pTarget, v25.m_TrueRequest, v14, 0LL);
            if ( BytesReturned )
              *BytesReturned = v25.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
          }
          goto LABEL_13;
        }
        v20 = 40;
      }
      WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, v20, WPP_FxIoTargetAPI_cpp_Traceguids, v15, v16);
      goto LABEL_13;
    }
    if ( RequestOptions->Size == 16 )
    {
      Flags = RequestOptions->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          Flags,
          0xFu);
      }
      else
      {
        if ( (Flags & 0xFFFFFFF7) == 0 || (Flags & 8) == 0 )
          goto LABEL_5;
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
      }
      v13 = -1073741811;
    }
    else
    {
      WPP_IFR_SF_qdd(
        m_Globals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        RequestOptions,
        16,
        RequestOptions->Size);
      v13 = -1073741820;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x26u, WPP_FxIoTargetAPI_cpp_Traceguids, v13);
  }
LABEL_13:
  FxSyncRequest::~FxSyncRequest(&v25);
  FxIoContext::~FxIoContext(&context);
  return (unsigned int)v13;
}

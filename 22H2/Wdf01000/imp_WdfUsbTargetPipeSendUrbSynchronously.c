/*
 * XREFs of imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C00694A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0017BC0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0017C64 (--1FxSyncRequest@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     WPP_IFR_SF_qDd @ 0x1C002F728 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C938 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006C748 (--0FxUsbUrbContext@@QEAA@XZ.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006EAA0 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeSendUrbSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        IFxMemory *Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a3; // ebx
  unsigned int Flags; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxUsbPipe *pUsbPipe; // [rsp+40h] [rbp-C0h] BYREF
  FxRequestBuffer buf; // [rsp+48h] [rbp-B8h] BYREF
  FxSyncRequest v16; // [rsp+70h] [rbp-90h] BYREF
  FxUsbUrbContext context; // [rsp+1A0h] [rbp+A0h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+178h]

  pUsbPipe = 0LL;
  memset(&buf.u, 0, sizeof(buf.u));
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  FxUsbUrbContext::FxUsbUrbContext(&context);
  FxSyncRequest::FxSyncRequest(&v16, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x26u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, Urb);
  if ( !Urb )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a3 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( _a3 >= 0 )
  {
    if ( RequestOptions )
    {
      if ( RequestOptions->Size != 16 )
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
        _a3 = -1073741820;
        goto LABEL_22;
      }
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
LABEL_13:
        _a3 = -1073741811;
        goto LABEL_22;
      }
      if ( (Flags & 0xFFFFFFF7) != 0 && (Flags & 8) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
        goto LABEL_13;
      }
    }
    buf.u.Mdl.Length = 0;
    buf.DataType = FxRequestBufferBuffer;
    buf.u.Memory.Memory = Urb;
    _a3 = FxFormatUrbRequest(m_Globals, pUsbPipe, v16.m_TrueRequest, &buf, pUsbPipe->m_UrbType, pUsbPipe->m_USBDHandle);
    if ( _a3 >= 0 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v16.m_TrueRequest);
        if ( ObjectHandleUnchecked )
          _a2 = (const void *)ObjectHandleUnchecked;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x27u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a2);
      }
      _a3 = FxIoTarget::SubmitSync(pUsbPipe, v16.m_TrueRequest, RequestOptions, 0LL);
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x28u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, (__int64)Urb, _a3);
  }
LABEL_22:
  FxSyncRequest::~FxSyncRequest(&v16);
  return (unsigned int)_a3;
}

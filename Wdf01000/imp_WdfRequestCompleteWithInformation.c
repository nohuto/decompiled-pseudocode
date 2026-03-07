void __fastcall imp_WdfRequestCompleteWithInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        int RequestStatus,
        unsigned __int64 Information)
{
  __int64 Offset; // rcx
  unsigned __int64 v7; // rbx
  _FX_DRIVER_GLOBALS *v8; // rcx
  FxDeviceBase *v9; // rdi
  _FX_DRIVER_GLOBALS *v10; // rcx
  char m_Globals_high; // al
  const void *_a1; // rdx
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v7 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v7;
    v7 -= Offset;
  }
  if ( *(_WORD *)(v7 + 8) == 4104 )
  {
    pRequest = (FxRequest *)v7;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v7, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v7 = (unsigned __int64)pRequest;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v7 + 16);
  if ( v8->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(v8, (FxRequest *)v7) < 0 )
      return;
    v7 = (unsigned __int64)pRequest;
  }
  *(_QWORD *)(*(_QWORD *)(v7 + 152) + 56LL) = Information;
  v9 = *(FxDeviceBase **)(v7 + 96);
  v10 = *(_FX_DRIVER_GLOBALS **)(v7 + 16);
  if ( v10->FxVerboseOn )
  {
    _a1 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v7 + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qqqd(
      v10,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      *(const void **)(v7 + 152),
      *(_QWORD *)(*(_QWORD *)(v7 + 152) + 56LL),
      RequestStatus);
  }
  if ( v9 )
    m_Globals_high = HIBYTE(v9[1].m_Globals);
  else
    m_Globals_high = 0;
  *(_BYTE *)(v7 + 236) = m_Globals_high;
  FxRequest::CompleteInternal((FxRequest *)v7, RequestStatus);
}

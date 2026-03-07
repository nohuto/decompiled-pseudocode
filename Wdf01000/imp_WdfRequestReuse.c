int __fastcall imp_WdfRequestReuse(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  unsigned int v4; // edx
  bool IsVersionGreaterThanOrEqualTo; // cf
  unsigned __int8 v7; // dl
  int v8; // r8d
  FxRequest *v9; // r9
  _FX_DRIVER_GLOBALS *v10; // r10
  unsigned int _a2; // eax
  int _a3; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  if ( !ReuseParams )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  if ( ReuseParams->Size != 24 )
  {
    WPP_IFR_SF_DDd(
      pRequest->m_Globals,
      v4,
      0x10u,
      0xCu,
      WPP_FxRequestApi_cpp_Traceguids,
      ReuseParams->Size,
      24,
      -1073741811);
    return -1073741811;
  }
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(pRequest->m_Globals, v4, 0xBu);
  _a2 = ReuseParams->Flags;
  _a3 = ~(IsVersionGreaterThanOrEqualTo ? 3 : 1);
  if ( (_a3 & _a2) != 0 )
  {
    WPP_IFR_SF_DDd(v10, v7, v8 + 5, v8 + 2, WPP_FxRequestApi_cpp_Traceguids, _a2, _a3, -1073741811);
    return -1073741811;
  }
  return FxRequest::Reuse(v9, ReuseParams);
}

void __fastcall InputCoreProviderCallback(const struct _GUID *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 MouseProcessor; // rax
  __int64 v6; // r9
  _BYTE v7[208]; // [rsp+20h] [rbp-E8h] BYREF

  BYTE2(WPP_MAIN_CB.Dpc.SystemArgument1) = InputTraceLogging::Enabled(0x2000);
  if ( gProtocolType != -1 )
  {
    CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v7);
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig();
    CCursorClip::TraceCurrentState();
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v2, v1, v3, v4);
    if ( MouseProcessor )
      InputTraceLogging::Mouse::ButtonState(*(_DWORD *)(MouseProcessor + 3572));
    RIMSyncWalkRimObjList(
      1LL,
      0LL,
      (void (__fastcall *)(_QWORD *, __int64))lambda_7c683ce7e834e820b1e487ff164319c2_::_lambda_invoker_cdecl_,
      v6);
    if ( (unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage() )
      TraceRawMouseThrottlingThresholds();
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v7);
  }
}

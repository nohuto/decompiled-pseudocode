/*
 * XREFs of ?CortanaExperienceManager_OnClientWindowReadyForPresentationChanged@CortanaProactiveTelemetry@@SAXXZ @ 0x180020EAC
 * Callers:
 *     ?_OnClientWindowReadyForPresentationChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800215F0 (-_OnClientWindowReadyForPresentationChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIClientW.c)
 *     ?_OnClientWindowReadyForPresentationChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18022BEB0 (-_OnClientWindowReadyForPresentationChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUICli.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

void CortanaProactiveTelemetry::CortanaExperienceManager_OnClientWindowReadyForPresentationChanged(void)
{
  _DWORD *v0; // rcx
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+70h] [rbp-10h]
  int v8; // [rsp+74h] [rbp-Ch]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1806506B8;
    qword_1806506B8[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506D0 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806506B8, qword_1806506D0, v1);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1806506B8);
  }
  v0 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v0 > 4u )
  {
    v8 = 0;
    v6 = &v4;
    v4 = 0x1000000LL;
    v7 = 8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v0, (unsigned __int8 *)dword_1805771F1, 0LL, 0LL, 3u, &v5);
  }
}

/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VTaskFlowDataEngineTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1802AA8C8
 * Callers:
 *     ?StartActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXI@Z @ 0x1802A9B88 (-StartActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

char __fastcall _TlgActivityBase<wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskFlowDataEngineTelemetry,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::zInternalStart(
        __int64 a1)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char result; // al
  _DWORD *v4; // rcx
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = qword_180650CB0;
    qword_180650CB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650CC8 = (struct _tlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650CB0, qword_180650CC8, v2);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_180650CB0);
  }
  result = (char)v6;
  v4 = (_DWORD *)v6[1];
  if ( *v4 > 5u && (result = tlgKeywordOn((__int64)v4, 0x400000000000LL)) != 0 )
    result = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  else
    *(_OWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 1;
  return result;
}

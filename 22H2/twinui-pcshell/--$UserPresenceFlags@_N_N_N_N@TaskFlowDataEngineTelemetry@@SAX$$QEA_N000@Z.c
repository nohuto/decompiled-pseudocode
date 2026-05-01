/*
 * XREFs of ??$UserPresenceFlags@_N_N_N_N@TaskFlowDataEngineTelemetry@@SAX$$QEA_N000@Z @ 0x1802AAAF8
 * Callers:
 *     ?OnIdleStateFlagsChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1802AB210 (-OnIdleStateFlagsChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJW.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1802303CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

ULONG __fastcall TaskFlowDataEngineTelemetry::UserPresenceFlags<bool,bool,bool,bool>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  __int64 v8; // r9
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v11; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+44h] [rbp-1Ch] BYREF
  int v14; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+4Ch] [rbp-14h] BYREF
  int v16; // [rsp+50h] [rbp-10h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-8h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_180650CA8;
    qword_180650CA8 = &ShellScreenClippingLogging::`vftable';
    qword_180650CC0 = (struct _tlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180650CA8, qword_180650CC0, v9);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &qword_180650CA8);
  }
  result = (unsigned int)Context;
  v11 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v11 > 5u )
  {
    v13 = *a4;
    v14 = *a3;
    v15 = *a2;
    v16 = *a1;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             (__int64)v11,
             byte_180581B21,
             0LL,
             v8,
             (__int64)&v16,
             (__int64)&v15,
             (__int64)&v14,
             (__int64)&v13);
  }
  return result;
}

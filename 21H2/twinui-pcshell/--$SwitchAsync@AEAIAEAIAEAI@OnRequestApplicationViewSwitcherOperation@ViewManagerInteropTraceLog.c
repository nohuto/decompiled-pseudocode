/*
 * XREFs of ??$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI00@Z @ 0x18032B664
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180330268 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180087E58 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::SwitchAsync<unsigned int &,unsigned int &,unsigned int &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4)
{
  __int64 v8; // r9
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+44h] [rbp-1Ch] BYREF
  int v15; // [rsp+48h] [rbp-18h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-10h] BYREF
  WINBOOL fPending; // [rsp+80h] [rbp+20h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180650D68;
    qword_180650D68 = &ShellScreenClippingLogging::`vftable';
    qword_180650D80 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180650D68, qword_180650D80, v9);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_180650D68);
  }
  result = (unsigned int)Context;
  v11 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v11 > 5u )
  {
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *a4;
    v14 = *a3;
    v15 = *a2;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             (__int64)v11,
             byte_18058A1A0,
             (const GUID *)(v12 + 8),
             v8,
             (__int64)&v15,
             (__int64)&v14,
             (__int64)&v13);
  }
  return result;
}

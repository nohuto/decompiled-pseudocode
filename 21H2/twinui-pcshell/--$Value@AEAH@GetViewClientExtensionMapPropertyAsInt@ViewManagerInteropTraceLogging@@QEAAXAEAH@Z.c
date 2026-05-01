/*
 * XREFs of ??$Value@AEAH@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXAEAH@Z @ 0x18032BB4C
 * Callers:
 *     ?GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAH@Z @ 0x18032E660 (-GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::Value<int &>(
        __int64 a1,
        int *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v10; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-40h] BYREF
  int *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180650D68;
    qword_180650D68 = &ShellScreenClippingLogging::`vftable';
    qword_180650D80 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180650D68, qword_180650D80, v4);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_180650D68);
  }
  result = (unsigned int)Context;
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v6 > 5u )
  {
    v7 = *a2;
    v8 = *(_QWORD *)(a1 + 48);
    v15 = 0;
    v10 = v7;
    v13 = &v10;
    v14 = 4;
    return tlgWriteTransfer_EventWriteTransfer(
             (__int64)v6,
             (unsigned __int8 *)dword_18058A018,
             (const GUID *)(v8 + 8),
             0LL,
             3u,
             &v12);
  }
  return result;
}

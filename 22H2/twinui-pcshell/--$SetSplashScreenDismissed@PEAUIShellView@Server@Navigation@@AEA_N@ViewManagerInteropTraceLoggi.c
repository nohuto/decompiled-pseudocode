/*
 * XREFs of ??$SetSplashScreenDismissed@PEAUIShellView@Server@Navigation@@AEA_N@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEA_N@Z @ 0x18032B2AC
 * Callers:
 *     ?SetSplashScreenDismissed@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x180331DD0 (-SetSplashScreenDismissed@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::SetSplashScreenDismissed<Navigation::Server::IShellView *,bool &>(
        __int64 *a1,
        char *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  _DWORD *v6; // rcx
  char v7; // al
  char v8; // [rsp+38h] [rbp-19h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-15h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  __int64 v11; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+58h] [rbp+7h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  char *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180650D60;
    qword_180650D60[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650D78 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650D60, qword_180650D78, v4);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180650D60);
  }
  result = (unsigned int)Context;
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v6 > 5u )
  {
    v7 = *a2;
    v18 = 0;
    v15 = 0;
    v8 = v7;
    v11 = *a1;
    v16 = &v8;
    v13 = &v11;
    v17 = 1;
    v14 = 8;
    return tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_18058A2DF, 0LL, 0LL, 4u, &v12);
  }
  return result;
}

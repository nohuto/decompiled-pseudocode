/*
 * XREFs of ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x1800978A0
 * Callers:
 *     ??$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA?AV01@AEA_KAEAPEAUHWND__@@@Z @ 0x180096B4C (--$Start@AEA_KAEAPEAUHWND__@@@OnShellHookMessage@IamTraceLogging@@SA-AV01@AEA_KAEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180013D78 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008EE20 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::StartActivity(
        IamTraceLogging::OnShellHookMessage *this,
        __int64 a2,
        HWND a3)
{
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  __int64 v10; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-59h] BYREF
  DWORD v12; // [rsp+34h] [rbp-55h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-51h] BYREF
  HWND v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h] BYREF
  __int64 v16; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  DWORD *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  __int64 *v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+ACh] [rbp+23h]
  HWND *v27; // [rsp+B0h] [rbp+27h]
  int v28; // [rsp+B8h] [rbp+2Fh]
  int v29; // [rsp+BCh] [rbp+33h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1806504F0;
    qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v6);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
  }
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v7 > 5u )
  {
    v14 = a3;
    v15 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0LL;
    v12 = CurrentThreadId;
    v9 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v10 = *((_QWORD *)this + 6);
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v27 = &v14;
    v24 = &v15;
    v21 = &v12;
    v18 = &v16;
    v28 = 8;
    v25 = 8;
    v19 = 8;
    v22 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v7,
      (unsigned __int8 *)dword_18056FABF,
      (const GUID *)(v10 + 8),
      v9,
      6u,
      &v17);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((IamTraceLogging::OnShellHookMessage *)((char *)this + 8));
}

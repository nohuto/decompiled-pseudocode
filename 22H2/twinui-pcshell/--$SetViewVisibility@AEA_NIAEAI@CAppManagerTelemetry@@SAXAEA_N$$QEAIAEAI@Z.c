/*
 * XREFs of ??$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z @ 0x1801F577C
 * Callers:
 *     ?_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z @ 0x1801F6304 (-_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

char __fastcall CAppManagerTelemetry::SetViewVisibility<bool &,unsigned int,unsigned int &>(char *a1, int *a2, int *a3)
{
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char result; // al
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  char v11; // [rsp+38h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-25h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  int v14; // [rsp+44h] [rbp-1Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-9h] BYREF
  char *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  int *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  int *v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]

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
  result = (char)Context;
  v8 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v8 > 5u )
  {
    result = tlgKeywordOn((__int64)v8, 0x200000000000LL);
    if ( result )
    {
      v10 = *a3;
      v25 = 0;
      v22 = 0;
      v19 = 0;
      v13 = v10;
      v14 = *a2;
      v11 = *a1;
      v23 = &v13;
      v20 = &v14;
      v17 = &v11;
      v24 = 4;
      v21 = 4;
      v18 = 1;
      return tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1805739BB, 0LL, 0LL, 5u, &v16);
    }
  }
  return result;
}

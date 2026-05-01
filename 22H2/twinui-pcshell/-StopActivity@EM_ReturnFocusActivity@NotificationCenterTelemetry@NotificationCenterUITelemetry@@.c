/*
 * XREFs of ?StopActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x1800893E0
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180019588 (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18001DE3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1801B4A74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801B4A74.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity::StopActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  _DWORD *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // eax
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v14; // [rsp+C0h] [rbp-80h] BYREF
  int v15; // [rsp+C4h] [rbp-7Ch] BYREF
  int v16; // [rsp+C8h] [rbp-78h] BYREF
  int v17; // [rsp+CCh] [rbp-74h] BYREF
  int v18; // [rsp+D0h] [rbp-70h] BYREF
  LPVOID v19; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+100h] [rbp-40h] BYREF
  __int64 v25; // [rsp+108h] [rbp-38h] BYREF
  __int64 v26; // [rsp+110h] [rbp-30h] BYREF
  __int64 v27; // [rsp+118h] [rbp-28h] BYREF
  __int64 v28; // [rsp+120h] [rbp-20h] BYREF
  __int64 v29; // [rsp+128h] [rbp-18h] BYREF
  __int64 v30[6]; // [rsp+130h] [rbp-10h] BYREF
  WINBOOL fPending; // [rsp+170h] [rbp+30h] BYREF
  __int64 v32; // [rsp+178h] [rbp+38h] BYREF
  __int64 v33; // [rsp+180h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+188h] [rbp+48h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    v19 = 0LL;
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &v19) && fPending )
    {
      v19 = &qword_180650668;
      qword_180650668 = &ShellScreenClippingLogging::`vftable';
      qword_180650680 = (struct _tlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180650668, qword_180650680, v9);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &qword_180650668);
    }
    v10 = (_DWORD *)*((_QWORD *)v19 + 1);
    if ( *v10 > 5u )
    {
      v21 = *((_QWORD *)v4 + 5);
      LODWORD(v32) = v4[15];
      LODWORD(v33) = v4[2];
      v22 = *((_QWORD *)v4 + 14);
      v23 = *((_QWORD *)v4 + 13);
      v11 = *((_QWORD *)this + 6);
      LODWORD(Context) = v4[24];
      v12 = *((_QWORD *)v4 + 11);
      v20 = 0LL;
      v24 = v12;
      v25 = *((_QWORD *)v4 + 10);
      v14 = v4[18];
      v26 = *((_QWORD *)v4 + 8);
      v15 = v4[6];
      v27 = *((_QWORD *)v4 + 2);
      v16 = *v4;
      v28 = *((_QWORD *)v4 + 15);
      v17 = v4[14];
      v29 = *((_QWORD *)v4 + 6);
      v18 = v4[1];
      v30[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v10,
        (int)&dword_180576087,
        v11 + 8,
        (__int64)&v20,
        (__int64)v30,
        (__int64)&v18,
        (__int64)&v29,
        (__int64)&v17,
        (__int64)&v28,
        (__int64)&v16,
        (__int64)&v27,
        (__int64)&v15,
        (__int64)&v26,
        (__int64)&v14,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&Context,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v21);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_180650668;
      qword_180650668 = &ShellScreenClippingLogging::`vftable';
      qword_180650680 = (struct _tlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180650668, qword_180650680, v13);
      InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &qword_180650668);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      LODWORD(v32) = CurrentThreadId;
      v8 = *(_DWORD *)(v7 + 76);
      v20 = 0LL;
      LODWORD(v33) = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        byte_1805761D8,
        (const GUID *)(v7 + 8),
        0LL,
        (__int64)&v20,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ReturnFocusActivity *)((char *)this + 8));
}

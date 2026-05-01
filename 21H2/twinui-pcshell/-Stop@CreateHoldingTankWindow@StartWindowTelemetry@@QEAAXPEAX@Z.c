/*
 * XREFs of ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x1803A7860
 * Callers:
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x1803A7178 (--0FocusHoldingTank@@QEAA@XZ.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800177CC (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1801F7F50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564453@Z @ 0x1803A6E38 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1803A6E38.c)
 */

void __fastcall StartWindowTelemetry::CreateHoldingTankWindow::Stop(
        StartWindowTelemetry::CreateHoldingTankWindow *this,
        __int64 a2)
{
  int *v2; // rsi
  int v5; // eax
  int *v6; // rsi
  BOOL inited; // eax
  __int64 v8; // r9
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // eax
  LPVOID Context; // [rsp+C0h] [rbp-80h] BYREF
  int v19; // [rsp+C8h] [rbp-78h] BYREF
  int v20; // [rsp+CCh] [rbp-74h] BYREF
  int v21; // [rsp+D0h] [rbp-70h] BYREF
  int v22; // [rsp+D4h] [rbp-6Ch] BYREF
  int v23; // [rsp+D8h] [rbp-68h] BYREF
  int v24; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+100h] [rbp-40h] BYREF
  __int64 v30; // [rsp+108h] [rbp-38h] BYREF
  __int64 v31; // [rsp+110h] [rbp-30h] BYREF
  __int64 v32; // [rsp+118h] [rbp-28h] BYREF
  __int64 v33; // [rsp+120h] [rbp-20h] BYREF
  __int64 v34; // [rsp+128h] [rbp-18h] BYREF
  __int64 v35; // [rsp+130h] [rbp-10h] BYREF
  __int64 v36; // [rsp+138h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+170h] [rbp+30h] BYREF
  __int64 v38; // [rsp+180h] [rbp+40h] BYREF
  __int64 v39; // [rsp+188h] [rbp+48h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( v6 )
  {
    if ( inited && fPending )
    {
      Context = qword_180650E20;
      qword_180650E20[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650E38 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650E20, qword_180650E38, v9);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, qword_180650E20);
    }
    v10 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v10 > 5u )
    {
      v28 = *((_QWORD *)v6 + 5);
      LODWORD(v38) = v6[15];
      LODWORD(v39) = v6[2];
      v29 = *((_QWORD *)v6 + 14);
      v30 = *((_QWORD *)v6 + 13);
      v19 = v6[24];
      v11 = *((_QWORD *)this + 6);
      v31 = *((_QWORD *)v6 + 11);
      v12 = *((_QWORD *)v6 + 10);
      v26 = 0LL;
      v32 = v12;
      v20 = v6[18];
      v33 = *((_QWORD *)v6 + 8);
      v21 = v6[6];
      v34 = *((_QWORD *)v6 + 2);
      v22 = *v6;
      v35 = *((_QWORD *)v6 + 15);
      v23 = v6[14];
      v36 = *((_QWORD *)v6 + 6);
      v24 = v6[1];
      v27 = a2;
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
        (__int64)v10,
        (unsigned __int8 *)dword_18059194B,
        (const GUID *)(v11 + 8),
        v8,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (const wchar_t **)&v36,
        (__int64)&v23,
        (const wchar_t **)&v35,
        (__int64)&v22,
        (const WCHAR **)&v34,
        (__int64)&v21,
        (const wchar_t **)&v33,
        (__int64)&v20,
        (const wchar_t **)&v32,
        (const WCHAR **)&v31,
        (__int64)&v19,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v39,
        (__int64)&v38,
        (const wchar_t **)&v28,
        (__int64)&v27);
    }
  }
  else
  {
    if ( inited && fPending )
    {
      Context = qword_180650E20;
      qword_180650E20[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650E38 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650E20, qword_180650E38, v13);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, qword_180650E20);
    }
    v14 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v14 > 5u )
    {
      v26 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      LODWORD(v38) = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 76);
      v25 = 0LL;
      LODWORD(v39) = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)v14,
        byte_1805918ED,
        (const GUID *)(v16 + 8),
        0LL,
        (__int64)&v25,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v26);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((StartWindowTelemetry::CreateHoldingTankWindow *)((char *)this + 8));
}

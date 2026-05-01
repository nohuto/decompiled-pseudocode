/*
 * XREFs of ?StopActivity@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@MEAAXXZ @ 0x1804ACDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18001DE3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1801B47AC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801B47AC.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801E2E58 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::StopActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity *this)
{
  int *v2; // rdi
  int v3; // eax
  int *v4; // rdi
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rdi
  __int64 v11; // r8
  int v12; // [rsp+A0h] [rbp-80h] BYREF
  int v13; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v14; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v19; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v25[6]; // [rsp+100h] [rbp-20h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v27; // [rsp+148h] [rbp+28h] BYREF
  __int64 v28; // [rsp+150h] [rbp+30h] BYREF
  LPVOID v29; // [rsp+158h] [rbp+38h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v3 = v2[19];
  if ( v3 < 0 && v3 == v2[21] )
    v4 = v2 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v5);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    {
      v17 = *((_QWORD *)v4 + 14);
      v18 = *((_QWORD *)v4 + 13);
      LODWORD(v27) = v4[24];
      v19 = *((_QWORD *)v4 + 11);
      v20 = *((_QWORD *)v4 + 10);
      LODWORD(v28) = v4[18];
      v21 = *((_QWORD *)v4 + 8);
      LODWORD(v29) = v4[6];
      v22 = *((_QWORD *)v4 + 2);
      v12 = *v4;
      v23 = *((_QWORD *)v4 + 15);
      v13 = v4[14];
      v24 = *((_QWORD *)v4 + 6);
      LODWORD(v14) = v4[1];
      v25[0] = 0x1000000LL;
      v16 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v7,
        (unsigned __int8 *)dword_18059D01C,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v8,
        (__int64)&v16,
        (__int64)v25,
        (__int64)&v14,
        (const wchar_t **)&v24,
        (__int64)&v13,
        (const wchar_t **)&v23,
        (__int64)&v12,
        (const WCHAR **)&v22,
        (__int64)&v29,
        (const wchar_t **)&v21,
        (__int64)&v28,
        (const wchar_t **)&v20,
        (const WCHAR **)&v19,
        (__int64)&v27,
        (const wchar_t **)&v18,
        (const WCHAR **)&v17);
    }
  }
  else
  {
    v29 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &v29) && fPending )
    {
      v29 = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v9);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    v10 = (_DWORD *)*((_QWORD *)v29 + 1);
    if ( *v10 > 5u && tlgKeywordOn(*((_QWORD *)v29 + 1), 0x400000000000LL) )
    {
      LODWORD(v27) = GetCurrentThreadId();
      v11 = *((_QWORD *)this + 6);
      LODWORD(v28) = *(_DWORD *)(v11 + 76);
      v16 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        byte_18059D151,
        (const GUID *)(v11 + 8),
        0LL,
        (__int64)&v16,
        (__int64)&v28,
        (__int64)&v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity *)((char *)this + 8));
}

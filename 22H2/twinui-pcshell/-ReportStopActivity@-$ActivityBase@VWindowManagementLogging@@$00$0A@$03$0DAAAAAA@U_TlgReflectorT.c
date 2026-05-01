/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18045185C
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002B7F0 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ??1VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18044EC30 (--1VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18044FD78 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0Is.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180452FC8 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1801A85E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U_ea_1801A85E8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x1801B4D9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rdi
  int v5; // eax
  int *v6; // rdi
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r9
  int v16; // [rsp+A0h] [rbp-29h] BYREF
  int v17; // [rsp+A4h] [rbp-25h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+F0h] [rbp+27h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+2Fh] BYREF
  __int64 v29; // [rsp+130h] [rbp+67h] BYREF
  WINBOOL fPending; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 v31; // [rsp+140h] [rbp+77h] BYREF
  LPVOID v32; // [rsp+148h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = (int *)a1[6];
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    if ( v6 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_180650618;
        qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
        qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v7);
        InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
      }
      v8 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( *v8 > 2u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
      {
        v23 = *((_QWORD *)v6 + 14);
        v24 = *((_QWORD *)v6 + 13);
        LODWORD(v29) = v6[24];
        v25 = *((_QWORD *)v6 + 11);
        v26 = *((_QWORD *)v6 + 10);
        LODWORD(v31) = v6[18];
        v27 = *((_QWORD *)v6 + 8);
        LODWORD(v32) = v6[6];
        v28 = *((_QWORD *)v6 + 2);
        v16 = *v6;
        v20 = *((_QWORD *)v6 + 15);
        v17 = v6[14];
        v21 = *((_QWORD *)v6 + 6);
        LODWORD(v18) = v6[1];
        v22 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v9,
          (unsigned __int8 *)dword_180574AF3,
          (const GUID *)(a1[6] + 8LL),
          v10,
          (__int64)&v22,
          (__int64)&v18,
          (const wchar_t **)&v21,
          (__int64)&v17,
          (const wchar_t **)&v20,
          (__int64)&v16,
          (const WCHAR **)&v28,
          (__int64)&v32,
          (const wchar_t **)&v27,
          (__int64)&v31,
          (const wchar_t **)&v26,
          (const WCHAR **)&v25,
          (__int64)&v29,
          (const wchar_t **)&v24,
          (const WCHAR **)&v23);
      }
    }
    else
    {
      v32 = 0LL;
      if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &v32) && fPending )
      {
        v32 = qword_180650618;
        qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
        qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v11);
        InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
      }
      v12 = (_DWORD *)*((_QWORD *)v32 + 1);
      if ( *v12 > 2u && tlgKeywordOn(*((_QWORD *)v32 + 1), 0x200000000000LL) )
      {
        v13 = a1[6];
        v22 = *(_QWORD *)(v13 + 56);
        v21 = *(_QWORD *)(v13 + 48);
        LODWORD(v29) = GetCurrentThreadId();
        LODWORD(v31) = a2;
        v20 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          (__int64)v12,
          (unsigned __int8 *)dword_180574A78,
          (const GUID *)(a1[6] + 8LL),
          v14,
          (__int64)&v20,
          (__int64)&v31,
          (__int64)&v29,
          (const wchar_t **)&v21,
          (const WCHAR **)&v22);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}

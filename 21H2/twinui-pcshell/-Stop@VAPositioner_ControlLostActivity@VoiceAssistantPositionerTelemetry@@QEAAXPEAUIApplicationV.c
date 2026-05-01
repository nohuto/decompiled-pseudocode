/*
 * XREFs of ?Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804537D8
 * Callers:
 *     ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x18044F720 (-ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIU.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x1800837AC (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801E3008 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566@Z @ 0x18044DC50 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18044DC50.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x18044E1B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity *this,
        struct IApplicationView *a2)
{
  int *v4; // rsi
  int v5; // eax
  int *v6; // rsi
  BOOL inited; // eax
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rdi
  __int64 v10; // r9
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  LPVOID Context; // [rsp+B0h] [rbp-80h] BYREF
  int v16; // [rsp+B8h] [rbp-78h] BYREF
  int v17; // [rsp+BCh] [rbp-74h] BYREF
  int v18; // [rsp+C0h] [rbp-70h] BYREF
  int v19; // [rsp+C4h] [rbp-6Ch] BYREF
  __int64 v20; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-60h] BYREF
  __int64 CensoredAumidFromView; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+100h] [rbp-30h] BYREF
  __int64 v28; // [rsp+108h] [rbp-28h] BYREF
  __int64 v29; // [rsp+110h] [rbp-20h] BYREF
  __int64 v30; // [rsp+118h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+150h] [rbp+20h] BYREF
  __int64 v32; // [rsp+160h] [rbp+30h] BYREF
  __int64 v33; // [rsp+168h] [rbp+38h] BYREF

  v4 = (int *)*((_QWORD *)this + 6);
  v5 = v4[19];
  if ( v5 < 0 && v5 == v4[21] )
    v6 = v4 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( v6 )
  {
    if ( inited && fPending )
    {
      Context = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v8);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    v9 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v9 > 4u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      CensoredAumidFromView = (__int64)VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
      v23 = *((_QWORD *)v6 + 14);
      v24 = *((_QWORD *)v6 + 13);
      LODWORD(v32) = v6[24];
      v25 = *((_QWORD *)v6 + 11);
      v26 = *((_QWORD *)v6 + 10);
      LODWORD(v33) = v6[18];
      v27 = *((_QWORD *)v6 + 8);
      v16 = v6[6];
      v28 = *((_QWORD *)v6 + 2);
      v17 = *v6;
      v29 = *((_QWORD *)v6 + 15);
      v18 = v6[14];
      v30 = *((_QWORD *)v6 + 6);
      v19 = v6[1];
      v20 = 0x1000000LL;
      v21 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (__int64)v9,
        (unsigned __int8 *)dword_180599258,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v10,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (const wchar_t **)&v30,
        (__int64)&v18,
        (const wchar_t **)&v29,
        (__int64)&v17,
        (const WCHAR **)&v28,
        (__int64)&v16,
        (const wchar_t **)&v27,
        (__int64)&v33,
        (const wchar_t **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v32,
        (const wchar_t **)&v24,
        (const WCHAR **)&v23,
        (const WCHAR **)&CensoredAumidFromView);
    }
  }
  else
  {
    if ( inited && fPending )
    {
      Context = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v11);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    v12 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v12 > 4u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      v21 = (__int64)VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
      LODWORD(v32) = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      LODWORD(v33) = *(_DWORD *)(v13 + 76);
      v20 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (__int64)v12,
        (unsigned __int8 *)dword_1805991F0,
        (const GUID *)(v13 + 8),
        v14,
        (__int64)&v20,
        (__int64)&v33,
        (__int64)&v32,
        (const WCHAR **)&v21);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity *)((char *)this + 8));
}

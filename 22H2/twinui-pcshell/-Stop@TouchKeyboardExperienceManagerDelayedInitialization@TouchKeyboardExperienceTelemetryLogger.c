/*
 * XREFs of ?Stop@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1803C08E8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE670 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801E2E58 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644544@Z @ 0x18030EDF8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18030EDF8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18030F150 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1803C6530 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::Stop(
        TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *this,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  int *v3; // rdi
  int v5; // esi
  int v6; // r14d
  int v7; // eax
  int *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  _DWORD *v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // [rsp+D0h] [rbp-80h] BYREF
  DWORD v18; // [rsp+D4h] [rbp-7Ch] BYREF
  int v19; // [rsp+D8h] [rbp-78h] BYREF
  int v20; // [rsp+DCh] [rbp-74h] BYREF
  int v21; // [rsp+E0h] [rbp-70h] BYREF
  int v22; // [rsp+E4h] [rbp-6Ch] BYREF
  int v23; // [rsp+E8h] [rbp-68h] BYREF
  int v24; // [rsp+ECh] [rbp-64h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+100h] [rbp-50h] BYREF
  __int64 v28; // [rsp+108h] [rbp-48h] BYREF
  __int64 v29; // [rsp+110h] [rbp-40h] BYREF
  __int64 v30; // [rsp+118h] [rbp-38h] BYREF
  __int64 v31; // [rsp+120h] [rbp-30h] BYREF
  __int64 v32; // [rsp+128h] [rbp-28h] BYREF
  __int64 v33; // [rsp+130h] [rbp-20h] BYREF
  __int64 v34; // [rsp+138h] [rbp-18h] BYREF
  __int64 v35; // [rsp+140h] [rbp-10h] BYREF
  __int64 v36; // [rsp+170h] [rbp+20h] BYREF
  __int64 v37; // [rsp+188h] [rbp+38h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v5 = a3;
  v6 = a2;
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v10 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          v9,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( v8 )
  {
    v12 = *(_DWORD **)(v10 + 8);
    if ( *v12 > 5u )
    {
      v26 = *((_QWORD *)v8 + 5);
      v19 = v8[15];
      v20 = v8[2];
      v27 = *((_QWORD *)v8 + 14);
      v28 = *((_QWORD *)v8 + 13);
      v21 = v8[24];
      v29 = *((_QWORD *)v8 + 11);
      v13 = *((_QWORD *)this + 6);
      v30 = *((_QWORD *)v8 + 10);
      v22 = v8[18];
      v31 = *((_QWORD *)v8 + 8);
      v23 = v8[6];
      v32 = *((_QWORD *)v8 + 2);
      v24 = *v8;
      v33 = *((_QWORD *)v8 + 15);
      v17 = v8[14];
      v34 = *((_QWORD *)v8 + 6);
      v18 = v8[1];
      v35 = 0x1000000LL;
      v25 = 0x1000000LL;
      LODWORD(v36) = v5;
      LODWORD(v37) = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        (unsigned __int8 *)dword_180592610,
        (const GUID *)(v13 + 8),
        v11,
        (__int64)&v25,
        (__int64)&v35,
        (__int64)&v18,
        (const wchar_t **)&v34,
        (__int64)&v17,
        (const wchar_t **)&v33,
        (__int64)&v24,
        (const WCHAR **)&v32,
        (__int64)&v23,
        (const wchar_t **)&v31,
        (__int64)&v22,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v21,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        (__int64)&v20,
        (__int64)&v19,
        (const wchar_t **)&v26,
        (__int64)&v37,
        (__int64)&v36);
    }
  }
  else
  {
    v14 = *(_DWORD **)(v10 + 8);
    if ( *v14 > 5u )
    {
      LODWORD(v36) = v5;
      LODWORD(v37) = v6;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      v18 = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 76);
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v14,
        byte_18059255A,
        (const GUID *)(v16 + 8),
        0LL,
        (__int64)&v25,
        (__int64)&v17,
        (__int64)&v18,
        (__int64)&v37,
        (__int64)&v36);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *)((char *)this + 8));
}

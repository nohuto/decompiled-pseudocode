/*
 * XREFs of ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x18002BE80
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002B7F0 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801E3008 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18028D544 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18028D544.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::Stop(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this,
        char a2)
{
  int *v4; // rsi
  int v5; // eax
  int *v6; // rsi
  RTL_SRWLOCK *v7; // rsi
  PSRWLOCK *p_SRWLock; // rax
  char v9; // di
  RTL_SRWLOCK *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r8
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v14; // rcx
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v16; // [rsp+C8h] [rbp-80h] BYREF
  char v17; // [rsp+C9h] [rbp-7Fh] BYREF
  unsigned int v18; // [rsp+CCh] [rbp-7Ch] BYREF
  int v19; // [rsp+D0h] [rbp-78h] BYREF
  WINBOOL v20; // [rsp+D4h] [rbp-74h] BYREF
  int v21; // [rsp+D8h] [rbp-70h] BYREF
  int v22; // [rsp+DCh] [rbp-6Ch] BYREF
  int v23; // [rsp+E0h] [rbp-68h] BYREF
  int v24; // [rsp+E4h] [rbp-64h] BYREF
  int v25; // [rsp+E8h] [rbp-60h] BYREF
  int v26; // [rsp+ECh] [rbp-5Ch] BYREF
  int v27; // [rsp+F0h] [rbp-58h] BYREF
  WINBOOL v28; // [rsp+F4h] [rbp-54h] BYREF
  DWORD CurrentThreadId; // [rsp+F8h] [rbp-50h] BYREF
  LPVOID v30; // [rsp+100h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+108h] [rbp-40h] BYREF
  __int64 v32; // [rsp+110h] [rbp-38h] BYREF
  __int64 v33; // [rsp+118h] [rbp-30h] BYREF
  __int64 v34; // [rsp+120h] [rbp-28h] BYREF
  __int64 v35; // [rsp+128h] [rbp-20h] BYREF
  __int64 v36; // [rsp+130h] [rbp-18h] BYREF
  __int64 v37; // [rsp+138h] [rbp-10h] BYREF
  __int64 v38; // [rsp+140h] [rbp-8h] BYREF
  __int64 v39; // [rsp+148h] [rbp+0h] BYREF
  __int64 v40; // [rsp+150h] [rbp+8h] BYREF
  __int64 v41; // [rsp+158h] [rbp+10h] BYREF
  __int64 v42; // [rsp+160h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+168h] [rbp+20h] BYREF
  PSRWLOCK v44; // [rsp+170h] [rbp+28h] BYREF
  __int64 v45; // [rsp+178h] [rbp+30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+180h] [rbp+38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+198h] [rbp+50h] BYREF
  void *v48; // [rsp+1A8h] [rbp+60h]
  int v49; // [rsp+1B0h] [rbp+68h]
  int v50; // [rsp+1B4h] [rbp+6Ch]
  __int64 *v51; // [rsp+1B8h] [rbp+70h]
  __int64 v52; // [rsp+1C0h] [rbp+78h]
  int *v53; // [rsp+1C8h] [rbp+80h]
  __int64 v54; // [rsp+1D0h] [rbp+88h]
  DWORD *p_CurrentThreadId; // [rsp+1D8h] [rbp+90h]
  __int64 v56; // [rsp+1E0h] [rbp+98h]
  char *v57; // [rsp+1E8h] [rbp+A0h]
  __int64 v58; // [rsp+1F0h] [rbp+A8h]

  v19 = 0;
  v4 = (int *)*((_QWORD *)this + 6);
  v5 = v4[19];
  if ( v5 < 0 && v5 == v4[21] )
    v6 = v4 + 20;
  else
    v6 = 0LL;
  if ( v6 )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
    v30 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v20, &v30) && v20 )
    {
      v30 = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v13);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    v14 = (_DWORD *)*((_QWORD *)v30 + 1);
    if ( *v14 > 5u )
    {
      v16 = a2;
      v32 = *((_QWORD *)v6 + 5);
      v21 = v6[15];
      v22 = v6[2];
      v33 = *((_QWORD *)v6 + 14);
      v34 = *((_QWORD *)v6 + 13);
      v23 = v6[24];
      v35 = *((_QWORD *)v6 + 11);
      v36 = *((_QWORD *)v6 + 10);
      v24 = v6[18];
      v37 = *((_QWORD *)v6 + 8);
      v25 = v6[6];
      v38 = *((_QWORD *)v6 + 2);
      v26 = *v6;
      v39 = *((_QWORD *)v6 + 15);
      v27 = v6[14];
      v40 = *((_QWORD *)v6 + 6);
      v18 = v6[1];
      v41 = 0x1000000LL;
      v42 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        (int)v14,
        (int)&dword_1805995C1,
        *((_QWORD *)this + 6) + 8,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v18,
        (__int64)&v40,
        (__int64)&v27,
        (__int64)&v39,
        (__int64)&v26,
        (__int64)&v38,
        (__int64)&v25,
        (__int64)&v37,
        (__int64)&v24,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v23,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v16);
    }
  }
  else
  {
    v7 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
    if ( v7 )
    {
      v10 = v7 + 31;
      AcquireSRWLockExclusive(v10);
      p_SRWLock = &v44;
      v9 = 1;
    }
    else
    {
      p_SRWLock = &SRWLock;
      v9 = 2;
      v10 = 0LL;
    }
    *p_SRWLock = 0LL;
    if ( (v9 & 2) != 0 )
    {
      v9 &= ~2u;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    if ( (v9 & 1) != 0 && v44 )
      ReleaseSRWLockExclusive(v44);
    **((_DWORD **)this + 6) = 2;
    if ( v10 )
      ReleaseSRWLockExclusive(v10);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v28, &Context) && v28 )
    {
      Context = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v15);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    v11 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v11 > 5u )
    {
      v17 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v12 = *((_QWORD *)this + 6);
      v19 = *(_DWORD *)(v12 + 76);
      v45 = 50331648LL;
      v57 = &v17;
      v58 = 1LL;
      p_CurrentThreadId = &CurrentThreadId;
      v56 = 4LL;
      v53 = &v19;
      v54 = 4LL;
      v51 = &v45;
      v52 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 517;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v11 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v48 = &unk_18059954C;
      v49 = 116;
      v50 = 1;
      v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, (LPCGUID)(v12 + 8), 0LL, 6u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)((char *)this + 8));
}

/*
 * XREFs of ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x1800190B8
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180019588 (-zInternalStop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444@Z @ 0x180275B5C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180275B5C.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Stop(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  int *v5; // rsi
  int v10; // eax
  int *v11; // rsi
  __int64 v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  REGHANDLE v15; // rcx
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v17; // rcx
  __int64 v18; // r8
  void (*v19)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  unsigned int v20; // [rsp+E8h] [rbp-80h] BYREF
  WINBOOL v21; // [rsp+ECh] [rbp-7Ch] BYREF
  int v22; // [rsp+F0h] [rbp-78h] BYREF
  int v23; // [rsp+F4h] [rbp-74h] BYREF
  int v24; // [rsp+F8h] [rbp-70h] BYREF
  int v25; // [rsp+FCh] [rbp-6Ch] BYREF
  int v26; // [rsp+100h] [rbp-68h] BYREF
  int v27; // [rsp+104h] [rbp-64h] BYREF
  int v28; // [rsp+108h] [rbp-60h] BYREF
  int v29; // [rsp+10Ch] [rbp-5Ch] BYREF
  int v30; // [rsp+110h] [rbp-58h] BYREF
  int v31; // [rsp+114h] [rbp-54h] BYREF
  int v32; // [rsp+118h] [rbp-50h] BYREF
  WINBOOL v33; // [rsp+11Ch] [rbp-4Ch] BYREF
  int v34; // [rsp+120h] [rbp-48h] BYREF
  int v35; // [rsp+124h] [rbp-44h] BYREF
  int v36; // [rsp+128h] [rbp-40h] BYREF
  int v37; // [rsp+12Ch] [rbp-3Ch] BYREF
  DWORD v38; // [rsp+130h] [rbp-38h] BYREF
  int v39; // [rsp+134h] [rbp-34h] BYREF
  LPVOID v40; // [rsp+138h] [rbp-30h] BYREF
  LPVOID Context; // [rsp+140h] [rbp-28h] BYREF
  __int64 v42; // [rsp+148h] [rbp-20h] BYREF
  __int64 v43; // [rsp+150h] [rbp-18h] BYREF
  __int64 v44; // [rsp+158h] [rbp-10h] BYREF
  __int64 v45; // [rsp+160h] [rbp-8h] BYREF
  __int64 v46; // [rsp+168h] [rbp+0h] BYREF
  __int64 v47; // [rsp+170h] [rbp+8h] BYREF
  __int64 v48; // [rsp+178h] [rbp+10h] BYREF
  __int64 v49; // [rsp+180h] [rbp+18h] BYREF
  __int64 v50; // [rsp+188h] [rbp+20h] BYREF
  __int64 v51; // [rsp+190h] [rbp+28h] BYREF
  __int64 v52; // [rsp+198h] [rbp+30h] BYREF
  __int64 v53; // [rsp+1A0h] [rbp+38h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+1A8h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1B8h] [rbp+50h] BYREF
  void *v56; // [rsp+1C8h] [rbp+60h]
  int v57; // [rsp+1D0h] [rbp+68h]
  int v58; // [rsp+1D4h] [rbp+6Ch]
  __int64 *v59; // [rsp+1D8h] [rbp+70h]
  __int64 v60; // [rsp+1E0h] [rbp+78h]
  int *v61; // [rsp+1E8h] [rbp+80h]
  __int64 v62; // [rsp+1F0h] [rbp+88h]
  DWORD *v63; // [rsp+1F8h] [rbp+90h]
  __int64 v64; // [rsp+200h] [rbp+98h]
  int *v65; // [rsp+208h] [rbp+A0h]
  __int64 v66; // [rsp+210h] [rbp+A8h]
  int *v67; // [rsp+218h] [rbp+B0h]
  __int64 v68; // [rsp+220h] [rbp+B8h]
  int *v69; // [rsp+228h] [rbp+C0h]
  __int64 v70; // [rsp+230h] [rbp+C8h]
  int *v71; // [rsp+238h] [rbp+D0h]
  __int64 v72; // [rsp+240h] [rbp+D8h]

  v5 = (int *)*((_QWORD *)this + 6);
  v10 = v5[19];
  if ( v10 < 0 && v10 == v5[21] )
    v11 = v5 + 20;
  else
    v11 = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  if ( v11 )
  {
    v40 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v21, &v40) && v21 )
    {
      v40 = qword_1806506B8;
      qword_1806506B8[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806506D0 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806506B8, qword_1806506D0, v16);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1806506B8);
    }
    v17 = (_DWORD *)*((_QWORD *)v40 + 1);
    if ( *v17 > 5u )
    {
      v22 = a5;
      v42 = *((_QWORD *)v11 + 5);
      v26 = v11[15];
      v27 = v11[2];
      v43 = *((_QWORD *)v11 + 14);
      v44 = *((_QWORD *)v11 + 13);
      v28 = v11[24];
      v18 = *((_QWORD *)this + 6);
      v45 = *((_QWORD *)v11 + 11);
      v46 = *((_QWORD *)v11 + 10);
      v29 = v11[18];
      v47 = *((_QWORD *)v11 + 8);
      v30 = v11[6];
      v48 = *((_QWORD *)v11 + 2);
      v31 = *v11;
      v49 = *((_QWORD *)v11 + 15);
      v32 = v11[14];
      v50 = *((_QWORD *)v11 + 6);
      v20 = v11[1];
      v51 = 0x1000000LL;
      v52 = 0x1000000LL;
      v23 = a4;
      v24 = a3;
      v25 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v17,
        (int)&dword_18057FB4E,
        v18 + 8,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v20,
        (__int64)&v50,
        (__int64)&v32,
        (__int64)&v49,
        (__int64)&v31,
        (__int64)&v48,
        (__int64)&v30,
        (__int64)&v47,
        (__int64)&v29,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v28,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v42,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v33, &Context) && v33 )
    {
      Context = qword_1806506B8;
      qword_1806506B8[0] = &ShellScreenClippingLogging::`vftable';
      qword_1806506D0 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806506B8, qword_1806506D0, v19);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1806506B8);
    }
    v12 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v12 > 5u )
    {
      v34 = a5;
      v35 = a4;
      v36 = a3;
      v37 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      v38 = CurrentThreadId;
      v72 = 4LL;
      v70 = 4LL;
      v39 = *(_DWORD *)(v14 + 76);
      v53 = 0x1000000LL;
      v71 = &v34;
      v69 = &v35;
      v67 = &v36;
      v65 = &v37;
      v63 = &v38;
      v61 = &v39;
      v59 = &v53;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v12 + 8);
      v68 = 4LL;
      v66 = 4LL;
      v64 = 4LL;
      v62 = 4LL;
      v60 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v56 = &unk_18057FCDC;
      UserData.Reserved = 2;
      v15 = *(_QWORD *)(v12 + 32);
      v57 = 125;
      v58 = 1;
      v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v15, &EventDescriptor, (LPCGUID)(v14 + 8), 0LL, 9u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)((char *)this + 8));
}

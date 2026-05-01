/*
 * XREFs of ?Stop@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4PTPGestureEndState@3@@Z @ 0x1804B44D8
 * Callers:
 *     ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x1804B2200 (-CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x1804B2E10 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564@Z @ 0x1801F7788 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1801F7788.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1801F7F10 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18021C794 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::Stop(__int64 a1, int a2)
{
  int *v4; // rdi
  int v5; // eax
  int *v6; // rdi
  BOOL inited; // eax
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // [rsp+B0h] [rbp-80h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp-78h] BYREF
  int v17; // [rsp+C0h] [rbp-70h] BYREF
  int v18; // [rsp+C4h] [rbp-6Ch] BYREF
  int v19; // [rsp+C8h] [rbp-68h] BYREF
  int v20; // [rsp+CCh] [rbp-64h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+100h] [rbp-30h] BYREF
  __int64 v28; // [rsp+108h] [rbp-28h] BYREF
  __int64 v29; // [rsp+110h] [rbp-20h] BYREF
  __int64 v30[5]; // [rsp+118h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+150h] [rbp+20h] BYREF
  __int64 v32; // [rsp+160h] [rbp+30h] BYREF
  __int64 v33; // [rsp+168h] [rbp+38h] BYREF

  v4 = *(int **)(a1 + 48);
  v5 = v4[19];
  if ( v5 < 0 && v5 == v4[21] )
    v6 = v4 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
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
    if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      LODWORD(v32) = a2;
      v22 = *((_QWORD *)v6 + 14);
      v23 = *((_QWORD *)v6 + 13);
      LODWORD(v33) = v6[24];
      v24 = *((_QWORD *)v6 + 11);
      v25 = *((_QWORD *)v6 + 10);
      v17 = v6[18];
      v26 = *((_QWORD *)v6 + 8);
      v18 = v6[6];
      v27 = *((_QWORD *)v6 + 2);
      v19 = *v6;
      v28 = *((_QWORD *)v6 + 15);
      v20 = v6[14];
      v29 = *((_QWORD *)v6 + 6);
      LODWORD(v15) = v6[1];
      v30[0] = 0x1000000LL;
      v21 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v10,
        (unsigned __int8 *)dword_18059DDBA,
        (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
        v11,
        (__int64)&v21,
        (__int64)v30,
        (__int64)&v15,
        (const wchar_t **)&v29,
        (__int64)&v20,
        (const wchar_t **)&v28,
        (__int64)&v19,
        (const WCHAR **)&v27,
        (__int64)&v18,
        (const wchar_t **)&v26,
        (__int64)&v17,
        (const wchar_t **)&v25,
        (const WCHAR **)&v24,
        (__int64)&v33,
        (const wchar_t **)&v23,
        (const WCHAR **)&v22,
        (__int64)&v32);
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
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v12);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    v13 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v13 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      LODWORD(v32) = a2;
      LODWORD(v33) = GetCurrentThreadId();
      v14 = *(_QWORD *)(a1 + 48);
      LODWORD(v15) = *(_DWORD *)(v14 + 76);
      v21 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v13,
        byte_18059DEF9,
        (const GUID *)(v14 + 8),
        0LL,
        (__int64)&v21,
        (__int64)&v15,
        (__int64)&v33,
        (__int64)&v32);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

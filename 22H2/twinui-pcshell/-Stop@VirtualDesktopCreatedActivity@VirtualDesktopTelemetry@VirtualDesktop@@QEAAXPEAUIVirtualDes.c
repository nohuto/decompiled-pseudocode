/*
 * XREFs of ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x1804AB248
 * Callers:
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1804A8FB0 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180097E78 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18021C794 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x1804A7C5C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1804A7C5C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktopCollection *a3)
{
  int v5; // eax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rsi
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rdi
  __int64 v11; // r9
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v13; // rdi
  __int64 v14; // r8
  int v15; // [rsp+B0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+B4h] [rbp-7Ch] BYREF
  int v17; // [rsp+B8h] [rbp-78h] BYREF
  WINBOOL v18; // [rsp+BCh] [rbp-74h] BYREF
  _QWORD *v19; // [rsp+C0h] [rbp-70h] BYREF
  WINBOOL fPending; // [rsp+C8h] [rbp-68h] BYREF
  int v21; // [rsp+CCh] [rbp-64h] BYREF
  int v22; // [rsp+D0h] [rbp-60h] BYREF
  _DWORD v23[3]; // [rsp+D4h] [rbp-5Ch] BYREF
  __int64 v24; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v28; // [rsp+100h] [rbp-30h] BYREF
  __int64 v29; // [rsp+108h] [rbp-28h] BYREF
  __int64 v30; // [rsp+110h] [rbp-20h] BYREF
  __int64 v31; // [rsp+118h] [rbp-18h] BYREF
  __int64 v32; // [rsp+120h] [rbp-10h] BYREF
  __int64 v33; // [rsp+128h] [rbp-8h] BYREF
  _BYTE v34[16]; // [rsp+130h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+140h] [rbp+10h] BYREF
  _DWORD *v36; // [rsp+160h] [rbp+30h]
  __int64 v37; // [rsp+168h] [rbp+38h]
  int *v38; // [rsp+170h] [rbp+40h]
  __int64 v39; // [rsp+178h] [rbp+48h]
  DWORD *p_CurrentThreadId; // [rsp+180h] [rbp+50h]
  __int64 v41; // [rsp+188h] [rbp+58h]
  _BYTE *v42; // [rsp+190h] [rbp+60h]
  __int64 v43; // [rsp+198h] [rbp+68h]
  int *v44; // [rsp+1A0h] [rbp+70h]
  __int64 v45; // [rsp+1A8h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+B8h]

  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v34);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      25LL,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = *((_QWORD *)this + 6);
  v7 = *(_DWORD *)(v6 + 76);
  if ( v7 < 0 && v7 == *(_DWORD *)(v6 + 84) )
    v8 = v6 + 80;
  else
    v8 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v19 = 0LL;
  if ( v8 )
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&v19)
      && fPending )
    {
      v19 = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v9);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    v10 = (_DWORD *)v19[1];
    if ( *v10 > 5u && tlgKeywordOn(v19[1], 0x400000000000LL) )
    {
      v21 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)a3 + 24LL))(a3);
      v24 = (__int64)v34;
      v25 = *(_QWORD *)(v8 + 112);
      v26 = *(_QWORD *)(v8 + 104);
      v22 = *(_DWORD *)(v8 + 96);
      v27 = *(_QWORD *)(v8 + 88);
      v28 = *(_QWORD *)(v8 + 80);
      v23[0] = *(_DWORD *)(v8 + 72);
      v29 = *(_QWORD *)(v8 + 64);
      v15 = *(_DWORD *)(v8 + 24);
      v30 = *(_QWORD *)(v8 + 16);
      CurrentThreadId = *(_DWORD *)v8;
      v31 = *(_QWORD *)(v8 + 120);
      v17 = *(_DWORD *)(v8 + 56);
      v32 = *(_QWORD *)(v8 + 48);
      v18 = *(_DWORD *)(v8 + 4);
      v33 = 0x1000000LL;
      *(_QWORD *)&v23[1] = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        (unsigned __int8 *)dword_18059D1AF,
        (const GUID *)(*((_QWORD *)this + 6) + 8LL),
        v11,
        (__int64)&v23[1],
        (__int64)&v33,
        (__int64)&v18,
        (const wchar_t **)&v32,
        (__int64)&v17,
        (const wchar_t **)&v31,
        (__int64)&CurrentThreadId,
        (const WCHAR **)&v30,
        (__int64)&v15,
        (const wchar_t **)&v29,
        (__int64)v23,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        (__int64)&v22,
        (const wchar_t **)&v26,
        (const WCHAR **)&v25,
        &v24,
        (__int64)&v21);
    }
  }
  else
  {
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v18, (LPVOID *)&v19) && v18 )
    {
      v19 = qword_180650618;
      qword_180650618[0] = &ImmersiveIconsLogging::`vftable';
      qword_180650630 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650618, qword_180650630, v12);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_180650618);
    }
    v13 = (_DWORD *)v19[1];
    if ( *v13 > 5u && tlgKeywordOn(v19[1], 0x400000000000LL) )
    {
      v17 = (*(__int64 (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)a3 + 24LL))(a3);
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      v15 = *(_DWORD *)(v14 + 76);
      *(_QWORD *)&v23[1] = 0LL;
      v44 = &v17;
      v45 = 4LL;
      v42 = v34;
      v43 = 16LL;
      p_CurrentThreadId = &CurrentThreadId;
      v41 = 4LL;
      v38 = &v15;
      v39 = 4LL;
      v36 = &v23[1];
      v37 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v13,
        (unsigned __int8 *)dword_18059D2FB,
        (const GUID *)(v14 + 8),
        0LL,
        7u,
        &v35);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)((char *)this + 8));
}

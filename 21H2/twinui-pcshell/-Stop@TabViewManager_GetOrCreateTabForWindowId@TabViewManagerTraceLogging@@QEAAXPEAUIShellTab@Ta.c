/*
 * XREFs of ?Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802E89DC
 * Callers:
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x1802E0280 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801E3008 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1802D64E0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802D64E0.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E00EC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId::Stop(
        TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        char a3)
{
  int *v3; // rdi
  int v7; // eax
  int *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _DWORD *v11; // rsi
  struct _GUID *ShellTabGroupId; // rax
  __int64 v13; // r8
  struct _GUID v14; // xmm0
  __int64 v15; // r9
  _DWORD *v16; // rdi
  struct _GUID v17; // xmm0
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  int v20; // eax
  _BYTE v21[4]; // [rsp+D0h] [rbp-80h] BYREF
  int v22; // [rsp+D4h] [rbp-7Ch] BYREF
  DWORD v23; // [rsp+D8h] [rbp-78h] BYREF
  int v24; // [rsp+DCh] [rbp-74h] BYREF
  int v25; // [rsp+E0h] [rbp-70h] BYREF
  int v26; // [rsp+E4h] [rbp-6Ch] BYREF
  int v27; // [rsp+E8h] [rbp-68h] BYREF
  int v28; // [rsp+ECh] [rbp-64h] BYREF
  int v29; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v31; // [rsp+100h] [rbp-50h] BYREF
  __int64 v32; // [rsp+108h] [rbp-48h] BYREF
  __int64 v33; // [rsp+110h] [rbp-40h] BYREF
  __int64 v34; // [rsp+118h] [rbp-38h] BYREF
  __int64 v35; // [rsp+120h] [rbp-30h] BYREF
  __int64 v36; // [rsp+128h] [rbp-28h] BYREF
  __int64 v37; // [rsp+130h] [rbp-20h] BYREF
  __int64 v38; // [rsp+138h] [rbp-18h] BYREF
  __int64 v39; // [rsp+140h] [rbp-10h] BYREF
  __int64 v40; // [rsp+148h] [rbp-8h] BYREF
  __int64 v41; // [rsp+150h] [rbp+0h] BYREF
  struct _GUID v42; // [rsp+158h] [rbp+8h] BYREF
  struct _GUID v43; // [rsp+168h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+180h] [rbp+30h] BYREF
  __int64 *v45; // [rsp+1A0h] [rbp+50h]
  int v46; // [rsp+1A8h] [rbp+58h]
  int v47; // [rsp+1ACh] [rbp+5Ch]
  int *v48; // [rsp+1B0h] [rbp+60h]
  int v49; // [rsp+1B8h] [rbp+68h]
  int v50; // [rsp+1BCh] [rbp+6Ch]
  DWORD *v51; // [rsp+1C0h] [rbp+70h]
  int v52; // [rsp+1C8h] [rbp+78h]
  int v53; // [rsp+1CCh] [rbp+7Ch]
  struct _GUID *v54; // [rsp+1D0h] [rbp+80h]
  int v55; // [rsp+1D8h] [rbp+88h]
  int v56; // [rsp+1DCh] [rbp+8Ch]
  _BYTE *v57; // [rsp+1E0h] [rbp+90h]
  int v58; // [rsp+1E8h] [rbp+98h]
  int v59; // [rsp+1ECh] [rbp+9Ch]

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v10 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
          v9,
          _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( v8 )
  {
    v11 = (_DWORD *)v10[1];
    if ( *v11 > 4u )
    {
      ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v42, a2);
      v13 = *((_QWORD *)this + 6);
      v14 = *ShellTabGroupId;
      v30 = 0LL;
      v31 = (__int64)&v43;
      v32 = *((_QWORD *)v8 + 5);
      v24 = v8[15];
      v25 = v8[2];
      v33 = *((_QWORD *)v8 + 14);
      v34 = *((_QWORD *)v8 + 13);
      v26 = v8[24];
      v35 = *((_QWORD *)v8 + 11);
      v36 = *((_QWORD *)v8 + 10);
      v27 = v8[18];
      v37 = *((_QWORD *)v8 + 8);
      v28 = v8[6];
      v38 = *((_QWORD *)v8 + 2);
      v29 = *v8;
      v39 = *((_QWORD *)v8 + 15);
      v22 = v8[14];
      v40 = *((_QWORD *)v8 + 6);
      v23 = v8[1];
      v43 = v14;
      v21[0] = a3;
      v41 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>>(
        (__int64)v11,
        (unsigned __int8 *)dword_180585FE6,
        (const GUID *)(v13 + 8),
        v15,
        (__int64)&v30,
        (__int64)&v41,
        (__int64)&v23,
        (const wchar_t **)&v40,
        (__int64)&v22,
        (const wchar_t **)&v39,
        (__int64)&v29,
        (const WCHAR **)&v38,
        (__int64)&v28,
        (const wchar_t **)&v37,
        (__int64)&v27,
        (const wchar_t **)&v36,
        (const WCHAR **)&v35,
        (__int64)&v26,
        (const wchar_t **)&v34,
        (const WCHAR **)&v33,
        (__int64)&v25,
        (__int64)&v24,
        (const wchar_t **)&v32,
        &v31,
        (__int64)v21);
    }
  }
  else
  {
    v16 = (_DWORD *)v10[1];
    if ( *v16 > 4u )
    {
      v17 = *TabShellTelemetryBase::GetShellTabGroupId(&v42, a2);
      v21[0] = a3;
      v43 = v17;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 6);
      v59 = 0;
      v56 = 0;
      v53 = 0;
      v50 = 0;
      v47 = 0;
      v23 = CurrentThreadId;
      v20 = *(_DWORD *)(v19 + 76);
      v30 = 0LL;
      v22 = v20;
      v57 = v21;
      v54 = &v43;
      v51 = &v23;
      v48 = &v22;
      v45 = &v30;
      v58 = 1;
      v55 = 16;
      v52 = 4;
      v49 = 4;
      v46 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v16,
        (unsigned __int8 *)dword_180585F69,
        (const GUID *)(v19 + 8),
        0LL,
        7u,
        &v44);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerTraceLogging::TabViewManager_GetOrCreateTabForWindowId *)((char *)this + 8));
}

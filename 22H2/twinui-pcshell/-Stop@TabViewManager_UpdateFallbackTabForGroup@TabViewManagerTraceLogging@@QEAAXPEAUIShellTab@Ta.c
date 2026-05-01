/*
 * XREFs of ?Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E8A90
 * Callers:
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1802EF3A8 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801E2E58 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1802D5F2C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802D5F2C.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802DFE7C (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup::Stop(
        TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _DWORD *v9; // rsi
  struct _GUID *ShellTabGroupId; // rax
  __int64 v11; // r8
  struct _GUID v12; // xmm0
  __int64 v13; // r9
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // eax
  int v18; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v19; // [rsp+C4h] [rbp-7Ch] BYREF
  int v20; // [rsp+C8h] [rbp-78h] BYREF
  int v21; // [rsp+CCh] [rbp-74h] BYREF
  int v22; // [rsp+D0h] [rbp-70h] BYREF
  int v23; // [rsp+D4h] [rbp-6Ch] BYREF
  int v24; // [rsp+D8h] [rbp-68h] BYREF
  int v25; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+100h] [rbp-40h] BYREF
  __int64 v31; // [rsp+108h] [rbp-38h] BYREF
  __int64 v32; // [rsp+110h] [rbp-30h] BYREF
  __int64 v33; // [rsp+118h] [rbp-28h] BYREF
  __int64 v34; // [rsp+120h] [rbp-20h] BYREF
  __int64 v35; // [rsp+128h] [rbp-18h] BYREF
  __int64 v36; // [rsp+130h] [rbp-10h] BYREF
  __int64 v37; // [rsp+138h] [rbp-8h] BYREF
  struct _GUID v38; // [rsp+140h] [rbp+0h] BYREF
  struct _GUID v39; // [rsp+150h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+160h] [rbp+20h] BYREF
  __int64 *v41; // [rsp+180h] [rbp+40h]
  int v42; // [rsp+188h] [rbp+48h]
  int v43; // [rsp+18Ch] [rbp+4Ch]
  int *v44; // [rsp+190h] [rbp+50h]
  int v45; // [rsp+198h] [rbp+58h]
  int v46; // [rsp+19Ch] [rbp+5Ch]
  DWORD *v47; // [rsp+1A0h] [rbp+60h]
  int v48; // [rsp+1A8h] [rbp+68h]
  int v49; // [rsp+1ACh] [rbp+6Ch]
  struct _GUID *v50; // [rsp+1B0h] [rbp+70h]
  int v51; // [rsp+1B8h] [rbp+78h]
  int v52; // [rsp+1BCh] [rbp+7Ch]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v7,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( v6 )
  {
    v9 = (_DWORD *)v8[1];
    if ( *v9 > 5u )
    {
      ShellTabGroupId = TabShellTelemetryBase::GetShellTabGroupId(&v38, a2);
      v11 = *((_QWORD *)this + 6);
      v12 = *ShellTabGroupId;
      v26 = 0LL;
      v27 = (__int64)&v39;
      v28 = *((_QWORD *)v6 + 5);
      v20 = v6[15];
      v21 = v6[2];
      v29 = *((_QWORD *)v6 + 14);
      v30 = *((_QWORD *)v6 + 13);
      v22 = v6[24];
      v31 = *((_QWORD *)v6 + 11);
      v32 = *((_QWORD *)v6 + 10);
      v23 = v6[18];
      v33 = *((_QWORD *)v6 + 8);
      v24 = v6[6];
      v34 = *((_QWORD *)v6 + 2);
      v25 = *v6;
      v35 = *((_QWORD *)v6 + 15);
      v18 = v6[14];
      v36 = *((_QWORD *)v6 + 6);
      v19 = v6[1];
      v39 = v12;
      v37 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByRef<16>>(
        (__int64)v9,
        (unsigned __int8 *)dword_180585416,
        (const GUID *)(v11 + 8),
        v13,
        (__int64)&v26,
        (__int64)&v37,
        (__int64)&v19,
        (const wchar_t **)&v36,
        (__int64)&v18,
        (const wchar_t **)&v35,
        (__int64)&v25,
        (const WCHAR **)&v34,
        (__int64)&v24,
        (const wchar_t **)&v33,
        (__int64)&v23,
        (const wchar_t **)&v32,
        (const WCHAR **)&v31,
        (__int64)&v22,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v21,
        (__int64)&v20,
        (const wchar_t **)&v28,
        &v27);
    }
  }
  else
  {
    v14 = (_DWORD *)v8[1];
    if ( *v14 > 5u )
    {
      v39 = *TabShellTelemetryBase::GetShellTabGroupId(&v38, a2);
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      v52 = 0;
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v19 = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 76);
      v26 = 0LL;
      v18 = v17;
      v50 = &v39;
      v47 = &v19;
      v44 = &v18;
      v41 = &v26;
      v48 = 4;
      v45 = 4;
      v51 = 16;
      v42 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v14,
        (unsigned __int8 *)dword_1805857DD,
        (const GUID *)(v16 + 8),
        0LL,
        6u,
        &v40);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerTraceLogging::TabViewManager_UpdateFallbackTabForGroup *)((char *)this + 8));
}

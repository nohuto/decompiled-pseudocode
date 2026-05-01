/*
 * XREFs of ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E8470
 * Callers:
 *     _lambda_37f9ef9030aa536b557a78acc06105da_::operator() @ 0x1802DA644 (_lambda_37f9ef9030aa536b557a78acc06105da_--operator().c)
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x1802DBBC0 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071928 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801E3008 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@74@Z @ 0x1802D6830 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802D6830.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@54@Z @ 0x1802D6DE0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U3@U2@@.c)
 *     LoggingUtil::GetGroupIdFromTab @ 0x1802DF748 (LoggingUtil--GetGroupIdFromTab.c)
 *     LoggingUtil::GetGroupSizeFromTab @ 0x1802DF7A4 (LoggingUtil--GetGroupSizeFromTab.c)
 *     ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E00EC (-GetShellTabGroupId@TabShellTelemetryBase@@SA-BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@I.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerAddVirtualTab::Stop(
        TabViewManagerMeasures::TabViewManagerAddVirtualTab *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  int *v2; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r9
  int v17; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v18; // [rsp+C4h] [rbp-7Ch] BYREF
  int v19; // [rsp+C8h] [rbp-78h] BYREF
  int GroupSizeFromTab; // [rsp+CCh] [rbp-74h] BYREF
  int v21; // [rsp+D0h] [rbp-70h] BYREF
  int v22; // [rsp+D4h] [rbp-6Ch] BYREF
  int v23; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+100h] [rbp-40h] BYREF
  __int64 v29; // [rsp+108h] [rbp-38h] BYREF
  __int64 v30; // [rsp+110h] [rbp-30h] BYREF
  __int64 v31; // [rsp+118h] [rbp-28h] BYREF
  __int64 v32; // [rsp+120h] [rbp-20h] BYREF
  __int64 v33; // [rsp+128h] [rbp-18h] BYREF
  __int64 v34; // [rsp+130h] [rbp-10h] BYREF
  __int64 v35; // [rsp+138h] [rbp-8h] BYREF
  struct _GUID v36; // [rsp+140h] [rbp+0h] BYREF
  struct _GUID v37; // [rsp+150h] [rbp+10h] BYREF
  GUID v38; // [rsp+160h] [rbp+20h] BYREF
  GUID v39; // [rsp+170h] [rbp+30h] BYREF

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
    if ( *v9 > 4u && tlgKeywordOn(v8[1], 0x400000000000LL) )
    {
      v38 = *LoggingUtil::GetGroupIdFromTab(&v36, (__int64)a2);
      v39 = *TabShellTelemetryBase::GetShellTabGroupId(&v37, a2);
      GroupSizeFromTab = LoggingUtil::GetGroupSizeFromTab((__int64)a2);
      v27 = (__int64)&v38;
      v26 = 0LL;
      v10 = *((_QWORD *)this + 6);
      v28 = (__int64)&v39;
      v29 = *((_QWORD *)v6 + 14);
      v30 = *((_QWORD *)v6 + 13);
      v21 = v6[24];
      v31 = *((_QWORD *)v6 + 11);
      v32 = *((_QWORD *)v6 + 10);
      v22 = v6[18];
      v33 = *((_QWORD *)v6 + 8);
      v23 = v6[6];
      v34 = *((_QWORD *)v6 + 2);
      v17 = *v6;
      v35 = *((_QWORD *)v6 + 15);
      v18 = v6[14];
      v24 = *((_QWORD *)v6 + 6);
      v19 = v6[1];
      v25 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (unsigned __int8 *)dword_180584605,
        (const GUID *)(v10 + 8),
        v11,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v19,
        (const wchar_t **)&v24,
        (__int64)&v18,
        (const wchar_t **)&v35,
        (__int64)&v17,
        (const WCHAR **)&v34,
        (__int64)&v23,
        (const wchar_t **)&v33,
        (__int64)&v22,
        (const wchar_t **)&v32,
        (const WCHAR **)&v31,
        (__int64)&v21,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        &v28,
        &v27,
        (__int64)&GroupSizeFromTab);
    }
  }
  else
  {
    v12 = (_DWORD *)v8[1];
    if ( *v12 > 4u && tlgKeywordOn(v8[1], 0x400000000000LL) )
    {
      v39 = *LoggingUtil::GetGroupIdFromTab(&v37, (__int64)a2);
      v38 = *TabShellTelemetryBase::GetShellTabGroupId(&v36, a2);
      v19 = LoggingUtil::GetGroupSizeFromTab((__int64)a2);
      v26 = (__int64)&v39;
      v25 = (__int64)&v38;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      v18 = CurrentThreadId;
      v15 = *(_DWORD *)(v14 + 76);
      v24 = 0LL;
      v17 = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        byte_1805842ED,
        (const GUID *)(v14 + 8),
        v16,
        (__int64)&v24,
        (__int64)&v17,
        (__int64)&v18,
        &v25,
        &v26,
        (__int64)&v19);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerMeasures::TabViewManagerAddVirtualTab *)((char *)this + 8));
}

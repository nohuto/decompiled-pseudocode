/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0216630
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E72A0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02167D4 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0216854 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v10; // rax
  struct DISPLAY_CALLOUT_ENTRY *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  DXGADAPTER *v14; // rcx
  struct _LUID *v15; // rdx
  __int64 v16; // r11
  unsigned int v17; // ebx
  struct DISPLAY_CALLOUT_ENTRY **v19; // rcx
  int v20; // [rsp+28h] [rbp-A1h]
  unsigned __int64 v21; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v22[24]; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v23[5]; // [rsp+70h] [rbp-59h] BYREF
  int v24; // [rsp+98h] [rbp-31h]
  int v25; // [rsp+9Ch] [rbp-2Dh]
  int v26; // [rsp+A0h] [rbp-29h]
  int v27; // [rsp+A4h] [rbp-25h]
  unsigned int v28; // [rsp+A8h] [rbp-21h]
  unsigned int v29; // [rsp+ACh] [rbp-1Dh]
  __int64 v30; // [rsp+B0h] [rbp-19h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    WdLogSingleEntry1(1LL, 8830LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 8830LL, 0LL, 0LL, 0LL, 0LL);
  }
  memset(&v23[1], 0, 24);
  v25 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(a1 + 536), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v10 = operator new[](0x88uLL, 0x4B677844u, 256LL);
  if ( v10 )
  {
    LOBYTE(v20) = a5;
    v11 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v10,
                                            *(_QWORD *)(a1 + 16) + 404LL,
                                            a2,
                                            a3,
                                            a4,
                                            v20,
                                            a6);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 16);
  v21 = 0LL;
  v13 = *(_QWORD *)(v12 + 404);
  v30 = v13;
  v23[0] = 0x480000001ELL;
  v24 = 0;
  v23[4] = 0LL;
  v26 = 46;
  v28 = a2;
  v29 = a3;
  *(_OWORD *)&v23[1] = 0LL;
  if ( v11 )
  {
    v23[3] = 0LL;
    v27 = v13;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v12, (struct _LUID *)v12, 0LL, &v21);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v23, v21);
    if ( *(_BYTE *)(a1 + 584) )
    {
      v19 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 600);
      if ( *v19 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 592) )
        __fastfail(3u);
      *(_QWORD *)v11 = a1 + 592;
      *((_QWORD *)v11 + 1) = v19;
      *v19 = v11;
      *(_QWORD *)(a1 + 600) = v11;
      v17 = 0;
    }
    else
    {
      DXGGLOBAL::GetGlobal();
      v14 = *(DXGADAPTER **)(a1 + 16);
      v21 = 0LL;
      DXGADAPTER::IsAdapterSessionized(v14, v15, 0LL, &v21);
      v17 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((DXGDISPLAYCALLOUTQUEUE *)(v16 + 1840), v11, v21);
    }
  }
  else
  {
    v27 = -1073741801;
    v23[3] = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v12, (struct _LUID *)v12, 0LL, &v21);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v23, v21);
    WdLogSingleEntry1(6LL, 8855LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for monitor event callout.",
      8855LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v17 = -1073741801;
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  return v17;
}

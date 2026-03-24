/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C
 * Callers:
 *     ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0021570 (-WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0123534 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0135B50 (DxgkDisplayConfigDeviceInfo.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C013A4AC (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C013AC08 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C013AC90 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C013AD08 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C013C0D4 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C013F7E0 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C013FB98 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C0145AC0 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0148220 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkCompleteTopologyTransition @ 0x1C0149760 (DxgkCompleteTopologyTransition.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0161C04 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkInternalDeviceIoctl @ 0x1C01627D0 (DxgkInternalDeviceIoctl.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0167134 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkPreSessionDisconnected @ 0x1C0169DB0 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionDisconnected @ 0x1C0169EE0 (DxgkSessionDisconnected.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C016BFBC (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C0170930 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C01778F8 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C01960F0 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C019E7E0 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C019E930 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020D3AC (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C020D5EC (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0210244 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0238974 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C0239160 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0261C84 (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C0284748 (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     DxgkTrimProcessCommitment @ 0x1C0288380 (DxgkTrimProcessCommitment.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297518 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkProcessLockScreen @ 0x1C029E280 (DxgkProcessLockScreen.c)
 *     ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C02B10F0 (-EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C02B1160 (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02BB974 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1C02BF31C (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02EFC00 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EFCA8 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EFD4C (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00028F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x1C000A3F8 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ @ 0x1C013C4DC (-DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C013C5B4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v7; // r12d
  DXGSESSIONDATA *CurrentSessionData; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rcx
  _QWORD *v13; // r13
  _QWORD *v14; // rdi
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  signed __int64 v17; // rtt
  __int64 v18; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  bool v27; // zf
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGTHREAD *Current; // rax
  _QWORD *i; // [rsp+20h] [rbp-20h]
  __int64 v33; // [rsp+30h] [rbp-10h] BYREF
  char v34; // [rsp+38h] [rbp-8h]
  __int64 v35; // [rsp+80h] [rbp+40h] BYREF
  __int64 (__fastcall *v36)(_QWORD *, __int64); // [rsp+88h] [rbp+48h]
  __int64 v37; // [rsp+90h] [rbp+50h]

  v37 = a3;
  v36 = a2;
  v33 = a1 + 584;
  v34 = 0;
  if ( a1 == -584 )
  {
    v29 = WdLogNewEntry5_WdAssertion(-584LL, a2);
    *(_QWORD *)(v29 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v29);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v33 + 16) == CurrentThread )
  {
    v30 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v30 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v7 = 0;
  CurrentSessionData = DxgkQueryCurrentSessionData();
  if ( a4 != 5 || (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v33);
    v12 = (_QWORD *)(a1 + 664);
    v13 = *(_QWORD **)(a1 + 664);
    for ( i = (_QWORD *)(a1 + 664); ; v12 = i )
    {
      do
      {
LABEL_7:
        if ( v13 == v12 || !v13 || v7 )
          goto LABEL_28;
        v14 = v13;
        v13 = (_QWORD *)*v13;
        _m_prefetchw(v14 + 3);
        v15 = v14[3];
      }
      while ( !v15 );
      while ( 1 )
      {
        v16 = v15 + 1;
        v17 = v15;
        v15 = _InterlockedCompareExchange64(v14 + 3, v15 + 1, v15);
        if ( v17 == v15 )
          break;
        if ( !v15 )
          goto LABEL_53;
      }
      if ( a4 != 4 )
        break;
      if ( v14[338]
        && (!v14[337]
         || CurrentSessionData && !DXGSESSIONDATA::CanEnumerateAdapter(CurrentSessionData, (struct DXGADAPTER *)v14)) )
      {
        goto LABEL_25;
      }
      v18 = v14[550];
      v35 = 0LL;
      CurrentProcess = PsGetCurrentProcess(v16, v9, v10, v11);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v22 = ProcessDxgProcess;
      if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
        || (Current = DXGTHREAD::GetCurrent(v21, v9)) == 0LL
        || (v23 = *((_QWORD *)Current + 1)) == 0 )
      {
        v23 = v22;
      }
      if ( v23 && (v24 = *(_QWORD *)(v23 + 88)) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v24 + 224))(0LL, &v35, 0LL);
        v25 = v35;
      }
      else
      {
        v25 = 0LL;
        v35 = 0LL;
      }
      if ( v25 != v18 )
        goto LABEL_25;
LABEL_24:
      v7 = v36(v14, v37);
LABEL_25:
      v12 = i;
      if ( _InterlockedExchangeAdd64(v14 + 3, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_7;
      DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v14[2], (struct DXGADAPTER *)v14);
LABEL_53:
      ;
    }
    if ( a4 != 5 )
    {
      switch ( a4 )
      {
        case 1:
          v28 = v14[337] == 0LL;
          break;
        case 2:
          v28 = v14[338] == 0LL;
          break;
        case 3:
          v27 = v14[337] == 0LL;
          goto LABEL_36;
        default:
          goto LABEL_40;
      }
      if ( v28 )
        goto LABEL_25;
      goto LABEL_40;
    }
    if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v14) )
    {
      if ( v14[338] )
        goto LABEL_25;
      v27 = v14[550] == 0LL;
LABEL_36:
      if ( !v27 )
        goto LABEL_25;
    }
LABEL_40:
    if ( CurrentSessionData && !DXGSESSIONDATA::CanEnumerateAdapter(CurrentSessionData, (struct DXGADAPTER *)v14) )
      goto LABEL_25;
    goto LABEL_24;
  }
LABEL_28:
  if ( v34 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v33, v9);
  return v7;
}

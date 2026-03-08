/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60
 * Callers:
 *     ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C001CC20 (-WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX.c)
 *     DxgkProcessLockScreen @ 0x1C0166900 (DxgkProcessLockScreen.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C01A5F60 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01BAFA8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C01BB028 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01BC8D4 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BC960 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C01BD298 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C01BF620 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C01BF73C (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C01D8 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkCompleteTopologyTransition @ 0x1C01C3FC0 (DxgkCompleteTopologyTransition.c)
 *     DxgkSessionDisconnected @ 0x1C01C5D50 (DxgkSessionDisconnected.c)
 *     DxgkPreSessionDisconnected @ 0x1C01C6080 (DxgkPreSessionDisconnected.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01D565C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkInternalDeviceIoctl @ 0x1C01D6220 (DxgkInternalDeviceIoctl.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01D9338 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01DBC1C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1C01E4F40 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C0207BD0 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C020C974 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C021A810 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C021AC80 (-EnableDisplayTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C0224554 (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B22B0 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C02B258C (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02B5558 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkStartPnPStop @ 0x1C02BE5C0 (DxgkStartPnPStop.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C02D0520 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1C02E1298 (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1C02F3B84 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F7070 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C03057DC (-ForceGpupTdr@@YAJPEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1C03084B4 (-EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z.c)
 *     DxgkTrimProcessCommitment @ 0x1C0343300 (DxgkTrimProcessCommitment.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C036E2F8 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C036EC5C (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03BD860 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03BD904 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03BD994 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x1C000AB14 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01A5F14 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  int v5; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v7; // r13d
  struct _KPROCESS *CurrentProcess; // rax
  PEPROCESS v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessSessionId; // rsi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  DXGSESSIONDATA *v19; // rdi
  bool v20; // zf
  _QWORD **v21; // r12
  _QWORD *v22; // r14
  _QWORD *v23; // rsi
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  signed __int64 v26; // rtt
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v30; // r15
  struct DXGPROCESS *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  DXGFASTMUTEX *v34; // rbx
  int v36; // r9d
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *v38; // rdi
  KSPIN_LOCK *Global; // rax
  struct _LUID *v40; // rdx
  DXGADAPTER *v41; // rcx
  __int64 v42; // [rsp+58h] [rbp-19h] BYREF
  __int64 v43; // [rsp+60h] [rbp-11h]
  __int64 v44; // [rsp+68h] [rbp-9h] BYREF
  char v45; // [rsp+70h] [rbp-1h]
  DXGFASTMUTEX *v46; // [rsp+78h] [rbp+7h] BYREF
  char v47; // [rsp+80h] [rbp+Fh]
  DXGSESSIONDATA *v48; // [rsp+D8h] [rbp+67h]

  v5 = a4;
  v47 = 0;
  v46 = (DXGFASTMUTEX *)(a1 + 672);
  if ( a1 == -672 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v46 + 3) == CurrentThread )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(CurrentThread);
  v9 = PsInitialSystemProcess;
  if ( CurrentProcess == PsInitialSystemProcess )
    goto LABEL_76;
  v11 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v11 )
    goto LABEL_76;
  v45 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v9, v10, v12, v13);
  v44 = v11 + 88;
  if ( v11 == -88 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v44 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  v15 = v44;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v15 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v15 + 32) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v15 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v36 = *(_DWORD *)(v15 + 36);
        if ( v36 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (const EVENT_DESCRIPTOR *)"g", v17, v36);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v15 + 16));
      ExAcquirePushLockExclusiveEx(v15 + 8, 0LL);
    }
    if ( *(_QWORD *)(v15 + 24) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v15 + 32) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v15 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v15 + 32) = 1;
  }
  v45 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v11 + 80) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v44);
LABEL_76:
    v19 = 0LL;
    v48 = 0LL;
    goto LABEL_26;
  }
  v18 = v44;
  v19 = *(DXGSESSIONDATA **)(*(_QWORD *)(v11 + 48) + 8 * CurrentProcessSessionId);
  v45 = 0;
  v48 = v19;
  if ( *(struct _KTHREAD **)(v44 + 24) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v44, 0LL, 0LL);
  if ( *(int *)(v18 + 32) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
  }
  v20 = (*(_DWORD *)(v18 + 32))-- == 1;
  if ( v20 )
  {
    *(_QWORD *)(v18 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(v18 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_26:
  if ( v5 != 5 || (unsigned int)DxgIsRemoteSessionUsingWddmMonitors((__int64)v9) )
  {
    if ( v47 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v46, 0LL, 0LL);
    DXGFASTMUTEX::Acquire(v46);
    v21 = (_QWORD **)(a1 + 768);
    v47 = 1;
    v22 = *v21;
    while ( 1 )
    {
      do
      {
LABEL_30:
        if ( v22 == v21 || !v22 || v7 )
          goto LABEL_50;
        v23 = v22;
        v22 = (_QWORD *)*v22;
        _m_prefetchw(v23 + 3);
        v24 = v23[3];
      }
      while ( !v24 );
      while ( 1 )
      {
        v25 = v24 + 1;
        v26 = v24;
        v24 = _InterlockedCompareExchange64(v23 + 3, v24 + 1, v24);
        if ( v26 == v24 )
          break;
        if ( !v24 )
          goto LABEL_30;
      }
      if ( v5 == 4 )
        break;
      if ( v5 == 5 )
      {
        if ( (DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v23)
           || !v23[366] && !DXGADAPTER::IsAdapterSessionized(v41, v40, 0LL, 0LL))
          && (!v19 || DXGSESSIONDATA::CanEnumerateAdapter(v19, (struct DXGADAPTER *)v23)) )
        {
LABEL_46:
          v7 = a2(v23, a3);
        }
      }
      else
      {
        if ( v5 == 1 )
        {
          if ( !v23[365] )
            goto LABEL_47;
        }
        else if ( v5 == 2 )
        {
          if ( !v23[366] )
            goto LABEL_47;
        }
        else if ( v5 == 3 && v23[365] )
        {
          goto LABEL_47;
        }
        if ( !v19 || DXGSESSIONDATA::CanEnumerateAdapter(v19, (struct DXGADAPTER *)v23) )
          goto LABEL_46;
      }
LABEL_47:
      v5 = a4;
      if ( _InterlockedExchangeAdd64(v23 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v23[2], (struct DXGADAPTER *)v23);
        v5 = a4;
      }
    }
    if ( v23[366] && (!v23[365] || v19 && !DXGSESSIONDATA::CanEnumerateAdapter(v19, (struct DXGADAPTER *)v23)) )
      goto LABEL_47;
    v27 = *(_QWORD *)((char *)v23 + 4636);
    v43 = v27;
    v42 = 0LL;
    v28 = PsGetCurrentProcess(v25);
    ProcessDxgProcess = PsGetProcessDxgProcess(v28);
    v30 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    {
LABEL_42:
      v31 = v30;
      if ( !v30 )
        goto LABEL_89;
      goto LABEL_43;
    }
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v31 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( !v31 )
        goto LABEL_42;
    }
    else
    {
      v38 = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v31 = DXGGLOBAL::SearchDxgThreadList(Global, v38);
      if ( !v31 )
      {
        WdLogSingleEntry1(2LL, 2923LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
        v19 = v48;
        goto LABEL_42;
      }
      v19 = v48;
    }
LABEL_43:
    v32 = *((_QWORD *)v31 + 11);
    if ( v32 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v32 + 224))(0LL, &v42, 0LL);
      v33 = v42;
      goto LABEL_45;
    }
LABEL_89:
    v33 = 0LL;
    v42 = 0LL;
LABEL_45:
    if ( v33 == __PAIR64__(HIDWORD(v43), v27) )
      goto LABEL_46;
    goto LABEL_47;
  }
LABEL_50:
  if ( v47 )
  {
    v34 = v46;
    v47 = 0;
    if ( *((struct _KTHREAD **)v46 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v46, 0LL, 0LL);
    if ( *((int *)v34 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    v20 = (*((_DWORD *)v34 + 8))-- == 1;
    if ( v20 )
    {
      *((_QWORD *)v34 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v34 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return v7;
}

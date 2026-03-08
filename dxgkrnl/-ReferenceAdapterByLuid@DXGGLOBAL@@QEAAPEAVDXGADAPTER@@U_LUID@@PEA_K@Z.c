/*
 * XREFs of ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68
 * Callers:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C016AED0 (DxgkGetAdapterDefaultScaling.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C017151C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01AB0A0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01B7980 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01B9CCC (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C01C2FAC (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C01C4BE4 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C01C5434 (EnforceDriverModelScalingPolicy.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C01D2B50 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C01D4DE0 (DxgkCacheHybridQueryValue.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D9870 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01D9AB0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01DA8C4 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C01DAEA8 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C01DBE70 (DxgkIsSourceInHardwareClone.c)
 *     ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02B2EC0 (-HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C9774 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C02CDE74 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsMonitorConnected @ 0x1C02CE070 (DxgkIsMonitorConnected.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C02CF680 (DxgkQueryModeListCacheLuid.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02CF990 (DxgkQueryStatisticsInternal.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02DD6A0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F4F24 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F50BC (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C02F53EC (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F7070 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C02F7898 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02F7B6C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02F7E30 (DxgkHandleForceProjectionMonitor.c)
 *     IsMiniportDriverCCDSupport @ 0x1C02F8608 (IsMiniportDriverCCDSupport.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C03362C0 (DxgkWin32kSetPointerPosition.c)
 *     DxgkWin32kSetPointerShape @ 0x1C03364B0 (DxgkWin32kSetPointerShape.c)
 *     ?VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B8A0 (-VmBusHostMonitorPower@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B6954 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B8BB8 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C03BA400 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03BAF18 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03BC994 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C03BDAAC (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByLuid(DXGGLOBAL *this, struct _LUID a2, unsigned __int64 *a3)
{
  DWORD LowPart; // ebx
  char *v6; // r8
  char *v7; // rdx
  _QWORD *v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  DXGFASTMUTEX *v13; // [rsp+50h] [rbp-28h]
  LONG HighPart; // [rsp+8Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  if ( a2 )
  {
    v13 = (DXGGLOBAL *)((char *)this + 720);
    if ( this == (DXGGLOBAL *)-720LL )
    {
      WdLogSingleEntry1(1LL, 592LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((struct _KTHREAD **)v13 + 3) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 599LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGFASTMUTEX::Acquire(v13);
    v6 = (char *)this + 768;
    v7 = (char *)*((_QWORD *)this + 96);
    while ( v7 != v6 && v7 )
    {
      v8 = v7;
      v7 = *(char **)v7;
      if ( *(_QWORD *)((char *)v8 + 404) == __PAIR64__(HighPart, LowPart) )
      {
        _m_prefetchw(v8 + 3);
        v9 = v8[3];
        while ( v9 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64(v8 + 3, v9 + 1, v9);
          if ( v10 == v9 )
          {
            *a3 = -1LL;
            goto LABEL_14;
          }
        }
      }
    }
    v8 = 0LL;
LABEL_14:
    if ( *((struct _KTHREAD **)v13 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v13, 0LL, 0LL);
    if ( *((int *)v13 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v13 + 8))-- == 1 )
    {
      *((_QWORD *)v13 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v13 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
    return (struct DXGADAPTER *)v8;
  }
  else
  {
    WdLogSingleEntry1((unsigned int)(a2.HighPart + 3), 3072LL);
    return 0LL;
  }
}

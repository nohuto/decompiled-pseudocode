/*
 * XREFs of ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0168160 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173118 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C017ADDC (DxgkUseAdapterViewInCurrentSession.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017DC5C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C0182B88 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C0182C58 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01838EC (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0183BE8 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1C01841B4 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C0184BC0 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0186080 (DxgkDisplayOnOff.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01868E4 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0187F00 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C019BA70 (DxgkGetAdapterDeviceDesc.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C01A9B88 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01BC080 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C01C59D0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     DxgkGetDeviceStateInternal @ 0x1C01C9BE0 (DxgkGetDeviceStateInternal.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C01CBEE0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     DxgkRegisterDwmProcess @ 0x1C01DF3E0 (DxgkRegisterDwmProcess.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01DFF88 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDispMgrOperation @ 0x1C01E21B0 (DxgkDispMgrOperation.c)
 *     ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1C01E4320 (-DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z.c)
 *     DxgkPreSessionDisconnected @ 0x1C01E4400 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C01E45B0 (DxgkSessionConnected.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01E46B8 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01E4944 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01E54B4 (DxgkDestroyCsrssProcess.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01E5564 (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C01E56D0 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C01E590C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01E6388 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E72B8 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E9830 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C01E9FA4 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01EA108 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     DxgkNotifySessionStateChange @ 0x1C01EAD20 (DxgkNotifySessionStateChange.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01EB820 (DxgkGetPresentHistoryInternal.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C01F16B0 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01F1940 (DxgkCheckMonitorPowerState.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01F2650 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkReleaseAdapter @ 0x1C01F3600 (DxgkReleaseAdapter.c)
 *     DxgkGetAdapter @ 0x1C01F3660 (DxgkGetAdapter.c)
 *     DxgkSessionReconnected @ 0x1C01F3B70 (DxgkSessionReconnected.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C01F3FE0 (DxgkGetUseHWGPUInRemoteSession.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FC874 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DpiFdoStartAdapter @ 0x1C0200110 (DpiFdoStartAdapter.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C02227E4 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     DxgkAcquireGdiViewIds @ 0x1C02272AC (DxgkAcquireGdiViewIds.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B6644 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B7170 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     DxgkGetScanLine @ 0x1C02D1910 (DxgkGetScanLine.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1FF0 (DxgkGetSharedPrimaryHandle.c)
 *     ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02E1630 (-CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02E1A3C (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02E1F14 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02E20F0 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02E21B0 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02E2430 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C02E2940 (-PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C02E2BB0 (-PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z.c)
 *     ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1C02E40D0 (-SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02F4AB8 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F5670 (DxgkIddHandleSetDisplayConfig2.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02FD6A8 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C0302E08 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C030DD30 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C032B4D0 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C032BF18 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C03312AC (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C03322C4 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0332738 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C0338AF0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C033A948 (DxgkRedrawCursorForPostCompositon.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C0355B10 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0356970 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     DxgkGetWddmRemoteSessionGdiViewRange @ 0x1C0356AB0 (DxgkGetWddmRemoteSessionGdiViewRange.c)
 *     DxgkReleaseGdiViewId @ 0x1C0356C88 (DxgkReleaseGdiViewId.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0362130 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     NtDxgkVailConnect @ 0x1C0364970 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0364E20 (NtDxgkVailDisconnect.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0365210 (NtDxgkVailPromoteCompositionSurface.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C0373C78 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03B213C (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
        DXGSESSIONMGR *this,
        unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  if ( (unsigned int)v2 >= *((_DWORD *)this + 20) )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v2);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return (struct DXGSESSIONDATA *)v4;
}

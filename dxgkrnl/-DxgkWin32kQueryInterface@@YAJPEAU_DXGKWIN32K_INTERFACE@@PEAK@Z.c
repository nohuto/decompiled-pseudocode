__int64 __fastcall DxgkWin32kQueryInterface(struct _DXGKWIN32K_INTERFACE *a1, unsigned int *a2)
{
  __int64 result; // rax

  if ( *(_WORD *)a1 == 792 && *((_WORD *)a1 + 1) == 47 )
  {
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = W32kStub_DCompositionNotifyCompositionTokenPresent;
    *((_QWORD *)a1 + 4) = W32kStub_DCompositionNotifyCompositionTokenPresent;
    *((_QWORD *)a1 + 5) = DxgkProcessCallout;
    *((_QWORD *)a1 + 6) = DxgkNotifyProcessFreezeCallout;
    *((_QWORD *)a1 + 7) = DxgkNotifyProcessThawCallout;
    *((_QWORD *)a1 + 8) = DxgkOpenAdapter;
    *((_QWORD *)a1 + 9) = DxgkEnumAdapters2Impl;
    *((_QWORD *)a1 + 10) = DxgkGetMaximumAdapterCountInSession;
    *((_QWORD *)a1 + 11) = DxgkCloseAdapterImpl;
    *((_QWORD *)a1 + 12) = DxgkDestroyDevice;
    *((_QWORD *)a1 + 13) = DxgkEscape;
    *((_QWORD *)a1 + 14) = DxgkCleanupPresentHistoryInternal;
    *((_QWORD *)a1 + 15) = DxgkReleaseProcessVidPnSourceOwners;
    *((_QWORD *)a1 + 16) = DxgkPollDisplayChildrenInternal;
    *((_QWORD *)a1 + 18) = DxgkGetPathsModality;
    *((_QWORD *)a1 + 19) = DxgkFunctionalizePathsModality;
    *((_QWORD *)a1 + 20) = DxgkApplyPathsModality;
    *((_QWORD *)a1 + 21) = DxgkFinalizePathsModality;
    *((_QWORD *)a1 + 22) = DxgkPersistPathsModality;
    *((_QWORD *)a1 + 74) = DxgkCopyPathsModality;
    *((_QWORD *)a1 + 23) = DxgkFreePathsModality;
    *((_QWORD *)a1 + 24) = DxgkAugmentCdsj;
    *((_QWORD *)a1 + 75) = &DxgkApplyCdsjToPathsModality;
    *((_QWORD *)a1 + 17) = DxgkFlushPresentHistory;
    *((_QWORD *)a1 + 25) = DxgkGetPresentHistoryReadyEvent;
    *((_QWORD *)a1 + 26) = DxgkGetDisplayConfigBufferSizes;
    *((_QWORD *)a1 + 27) = DxgkQueryDisplayConfig;
    *((_QWORD *)a1 + 28) = DxgkHandleForceProjectionMonitor;
    *((_QWORD *)a1 + 29) = DxgkUpdateCddDevmodeExtraData;
    *((_QWORD *)a1 + 30) = DxgkProcessDisplayCalloutBatch;
    *((_QWORD *)a1 + 31) = DxgkDisplayConfigDeviceInfo;
    *((_QWORD *)a1 + 32) = DxgkGetAdapterDeviceDesc;
    *((_QWORD *)a1 + 33) = DxgkGetMonitorInternalInfo;
    *((_QWORD *)a1 + 34) = DxgkBeginTopologyTransition;
    *((_QWORD *)a1 + 35) = DxgkCompleteTopologyTransition;
    *((_QWORD *)a1 + 36) = DxgkNeedToEnableCddPrimary;
    *((_QWORD *)a1 + 37) = DxgkInvalidateMonitorConnections;
    *((_QWORD *)a1 + 38) = DxgkWriteDiagEntry;
    *((_QWORD *)a1 + 39) = DxgkGetAdapterDefaultScaling;
    *((_QWORD *)a1 + 40) = DxgkConvertDisplayConfigCScalingToDdiScaling;
    *((_QWORD *)a1 + 41) = DxgkGetGlobalRawmodeFlag;
    *((_QWORD *)a1 + 42) = DxgkSetGlobalRawmodeFlag;
    *((_QWORD *)a1 + 43) = &DxgkQueryModeListCacheLuid;
    *((_QWORD *)a1 + 44) = DxgkThreadCallout;
    *((_QWORD *)a1 + 45) = DxgkSessionConnected;
    *((_QWORD *)a1 + 46) = DxgkPreSessionDisconnected;
    *((_QWORD *)a1 + 47) = DxgkSessionDisconnected;
    *((_QWORD *)a1 + 48) = &DxgkSessionReconnected;
    *((_QWORD *)a1 + 49) = &DxgkGetAdapter;
    *((_QWORD *)a1 + 50) = DxgkReleaseAdapter;
    *((_QWORD *)a1 + 51) = DxgkDesktopSwitch;
    *((_QWORD *)a1 + 52) = DxgkStatusChangeNotify;
    *((_QWORD *)a1 + 53) = DxgkEnableUnorderedWaitsForDevice;
    *((_QWORD *)a1 + 54) = DxgkCddVerifyCddDevMode;
    *((_QWORD *)a1 + 55) = DxgkIsVidPnSourceOwnerDwm;
    *((_QWORD *)a1 + 56) = DxgkIsVidPnSourceOwnerExclusive;
    *((_QWORD *)a1 + 57) = DxgkGetMonitorDeviceObject;
    *((_QWORD *)a1 + 58) = DxgkRegisterDwmProcess;
    *((_QWORD *)a1 + 59) = DxgkGetSharedResourceAdapterLuid;
    *((_QWORD *)a1 + 60) = DxgkGetSharedAllocationObjectType;
    *((_QWORD *)a1 + 61) = DxgkGetSharedSyncObjectType;
    *((_QWORD *)a1 + 62) = DxgkGetDisplayManagerObjectType;
    *((_QWORD *)a1 + 63) = DxgkGetProcessInterferenceCount;
    *((_QWORD *)a1 + 64) = DxgkGetGpuUsageStatistics;
    *((_QWORD *)a1 + 65) = DxgkUpdateGdiInfo;
    *((_QWORD *)a1 + 66) = DxgkSetPresenterViewMode;
    *((_QWORD *)a1 + 67) = DxgkGetPresenterViewMode;
    *((_QWORD *)a1 + 68) = DxgkSetProcessStatus;
    *((_QWORD *)a1 + 69) = DxgkConvertLegacyQDCAdapterAndIdToActual;
    *((_QWORD *)a1 + 70) = DxgkDisplayOnOff;
    *((_QWORD *)a1 + 71) = DxgkIsVirtualizationDisabledForTarget;
    *((_QWORD *)a1 + 72) = &DxgkIsSourceInHardwareClone;
    *((_QWORD *)a1 + 73) = DxgkProcessLockScreen;
    *((_QWORD *)a1 + 76) = DxgkUpdateDpiInfoForNewOverride;
    *((_QWORD *)a1 + 77) = DxgkInitializeDpi;
    *((_QWORD *)a1 + 78) = DxgkGetDpiOverrideForSource;
    *((_QWORD *)a1 + 79) = &DxgkGetLegacyDpiInfo;
    *((_QWORD *)a1 + 80) = &DxgkWin32kSetPointerPosition;
    *((_QWORD *)a1 + 81) = &DxgkWin32kSetPointerShape;
    *((_QWORD *)a1 + 82) = DxgkGetUseHWGPUInRemoteSession;
    *((_QWORD *)a1 + 84) = &DxgkGetMonitorEdid;
    *((_QWORD *)a1 + 83) = DxgkChangeD3RequestsState;
    *((_QWORD *)a1 + 85) = DxgkConvertPathsModalityToDisplayConfig;
    *((_QWORD *)a1 + 86) = DxgkConvertDisplayConfigToDevMode;
    *((_QWORD *)a1 + 87) = DxgkDDisplayEnumInternal;
    *((_QWORD *)a1 + 91) = DxgkDispMgrReferenceObjectByHandle;
    *((_QWORD *)a1 + 92) = DxgkDispMgrIsTargetOwned;
    *((_QWORD *)a1 + 88) = &DxgkGetMonitorDisplayId;
    *((_QWORD *)a1 + 89) = &DxgkEnumerateModesForPathsModality;
    *((_QWORD *)a1 + 90) = DxgCreateLiveDumpWithWdLogs;
    *((_QWORD *)a1 + 93) = DxgkCheckDisplayState;
    *((_QWORD *)a1 + 94) = &DxgkSetKernelDisplayPolicy;
    *((_QWORD *)a1 + 95) = DxgkSendDisplayBrokerMessage;
    *((_QWORD *)a1 + 96) = DxgkGetWddmRemoteSessionGdiViewRange;
    *((_QWORD *)a1 + 97) = DxgkGetVirtualRefreshRateInfo;
    *((_QWORD *)a1 + 98) = DxgkGetMonitorHash;
    result = 0LL;
    *a2 = 792;
  }
  else
  {
    WdLogSingleEntry4(1LL, *((unsigned __int16 *)a1 + 1), *(unsigned __int16 *)a1, 47LL, 792LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Interface mismatch between Win32k (0x%I64x, 0x%I64x) and Dxgkrnl (0x%I64x, 0x%I64x).",
      *((unsigned __int16 *)a1 + 1),
      *(unsigned __int16 *)a1,
      47LL,
      792LL,
      0LL);
    return 3221225485LL;
  }
  return result;
}

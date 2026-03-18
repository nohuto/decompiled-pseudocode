/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C000465C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C000612C (RIMIDECreateDeviceInstancePath.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00063E0 (RIMAddInjectionDeviceOfType.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1C0009C90 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     NtUserReportInertia @ 0x1C000E690 (NtUserReportInertia.c)
 *     UserKSTWait @ 0x1C0055434 (UserKSTWait.c)
 *     RIMGetMouseDeviceHardwareId @ 0x1C006CAE0 (RIMGetMouseDeviceHardwareId.c)
 *     RIMGetDeviceParent @ 0x1C006CE24 (RIMGetDeviceParent.c)
 *     RIMGetPanelId @ 0x1C006D320 (RIMGetPanelId.c)
 *     rimBlockingDeviceIoControlFile @ 0x1C006D3DC (rimBlockingDeviceIoControlFile.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0070630 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDeviceIoControl @ 0x1C0070F20 (RIMDeviceIoControl.c)
 *     RIMUnregisterForInput @ 0x1C0071570 (RIMUnregisterForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0071A40 (RIMRegisterForInputWithCallbacks.c)
 *     RIMQueueDeviceClassNotifyAsyncWorkItem @ 0x1C0072890 (RIMQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0074064 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0075530 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0077120 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMReadInput @ 0x1C0077620 (RIMReadInput.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0084D10 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C00878D0 (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C00B0D3C (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     RIMRemoveInputOfType @ 0x1C00B91E0 (RIMRemoveInputOfType.c)
 *     ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x1C00C18D8 (-VerifyDWMApiSetImplementation@@YAJXZ.c)
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00C3A38 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00CB280 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00CB2F0 (RIMDirectStartDeviceClassNotifications.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CBE90 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C00E1624 (-DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1C00E3264 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     ?Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z @ 0x1C012FFB0 (-Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z @ 0x1C0130264 (-Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z.c)
 *     NtUserInjectDeviceInput @ 0x1C0147250 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0147BA0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148360 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148D00 (NtUserInjectPointerInput.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0174734 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     NtRIMAddInputObserver @ 0x1C01749F0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0175770 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMAddInputOfType @ 0x1C0175990 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0175C80 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01763A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C0176B60 (RIMAreSiblingDevices.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0176DF0 (RIMDirectStartStopDeviceRead.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0177190 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0177870 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0177AC0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0177E80 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0178570 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0178980 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0178CC0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01792E0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0179770 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMOnTimerNotification @ 0x1C017A240 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C017A550 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C017A810 (RIMRemoveInjectionDevice.c)
 *     RIMResetPointerDevices @ 0x1C017AF00 (RIMResetPointerDevices.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C440 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C017D324 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C017D610 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C017D7E0 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C017DC30 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C017DEF0 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMAllocateHidConfigDesc @ 0x1C017ECF8 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigureDeviceFeedback @ 0x1C017FFF0 (RIMConfigureDeviceFeedback.c)
 *     RIMHidGetPreparsedData @ 0x1C0181BF0 (RIMHidGetPreparsedData.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0182C44 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0185FD0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01890E0 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0189C90 (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C018B398 (RIMReleasePointerDeviceInfo.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0195458 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0196118 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0196C38 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C0198674 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C0199170 (RIMIDE_InjectGenericHidInput.c)
 *     traceFrame @ 0x1C019EEC4 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A005C (RIMStartPointerDeviceFrame.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01A1D2C (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01A1F10 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01A20B0 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A2238 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C01A26C8 (RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01A2DB8 (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01A2F50 (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01A30D0 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01A7D40 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01A8108 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractScantime @ 0x1C01A9EA8 (rimExtractScantime.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01AAC08 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C01ABBB4 (rimProcessPointerDeviceContact.c)
 *     rimObsAddInputObserver @ 0x1C01ACCEC (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C01AD668 (rimObsCheckForObservationPermissions.c)
 *     rimObsDeliverInputToObserver @ 0x1C01ADB14 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C01AE890 (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C01AECB4 (rimObsPushInputMessage.c)
 *     rimObsStartStopDeviceRead @ 0x1C01AF320 (rimObsStartStopDeviceRead.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01AF70C (rimObsUpdateInputObserverRegistration.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01B44FC (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01B4754 (RIMHandleTTMDeviceInput.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C01B485C (RIMHandleTTMDeviceRemoval.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01BE764 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01CE024 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01CFA8C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C01D7540 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E4CB0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01E5544 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01E7098 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01EF59C (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C01F6ED0 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_d(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               a8,
               a7,
               va,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, a6, a8, v11, va, 4LL, 0LL);
  }
  return result;
}

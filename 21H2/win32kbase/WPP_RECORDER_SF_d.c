/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0046B08
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0002358 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtUserReportInertia @ 0x1C0004160 (NtUserReportInertia.c)
 *     xxxInternalToUnicode @ 0x1C0009CF0 (xxxInternalToUnicode.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C001845C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     AssociateKernelIocpWcp @ 0x1C00431F0 (AssociateKernelIocpWcp.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0046914 (RIMUnregisterCurrentProcessForInput.c)
 *     GiveForegroundActivateRight @ 0x1C0047280 (GiveForegroundActivateRight.c)
 *     HasForegroundActivateRight @ 0x1C00478F0 (HasForegroundActivateRight.c)
 *     RIMDeviceIoControl @ 0x1C0051E70 (RIMDeviceIoControl.c)
 *     rimDoRimDevChange @ 0x1C00523E4 (rimDoRimDevChange.c)
 *     RIMResetPointerDevices @ 0x1C00525F0 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0052760 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0052BE0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C00532C0 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0053610 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C00539C0 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0053E80 (RIMDirectStartStopDeviceRead.c)
 *     RIMAllocateHidDesc @ 0x1C0056F3C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00572E8 (RIMCreateHidDesc.c)
 *     RIMGetDeviceParent @ 0x1C006CE50 (RIMGetDeviceParent.c)
 *     RIMGetPanelId @ 0x1C006D1D4 (RIMGetPanelId.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C007459C (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0074790 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0088068 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0088530 (RIMRegisterForInputWithCallbacks.c)
 *     RIMRemoveInputOfType @ 0x1C00A6300 (RIMRemoveInputOfType.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00A8A60 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     CreateKernelIocpWcp @ 0x1C00AFBF0 (CreateKernelIocpWcp.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C00B3688 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     CreateKernelIocp @ 0x1C00B3780 (CreateKernelIocp.c)
 *     hCreateKernelEvent @ 0x1C00B5CF0 (hCreateKernelEvent.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00C2720 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00C40C0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00C4100 (RIMDirectStartDeviceClassNotifications.c)
 *     NtMapVisualRelativePoints @ 0x1C0117220 (NtMapVisualRelativePoints.c)
 *     hCreateKernelTimer @ 0x1C0117660 (hCreateKernelTimer.c)
 *     xxxRemoteConnect @ 0x1C01177E0 (xxxRemoteConnect.c)
 *     NtUserInjectDeviceInput @ 0x1C01306F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0130B20 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C01313B0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C01317D0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0131BF0 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0132720 (NtUserMapPointsByVisualIdentifier.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0152DB8 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     NtRIMAddInputObserver @ 0x1C0152FB0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0154790 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01548A0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0154D80 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0154F10 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155280 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C0155660 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0155860 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0155D60 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0155EF0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C01561C0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C01567E0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0156A90 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0156CA0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0157150 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0157450 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0157890 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0157E00 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0157FD0 (RIMRemoveInjectionDevice.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01595D0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A14C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C015A320 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C015A430 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C015A5D0 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C015A760 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C015B6FC (RIMAddSimulatedPointerDeviceData.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015DE78 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C015E6A4 (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C015F418 (RIMReleasePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0161020 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0162284 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162908 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C0167380 (RIMIDECreateDeviceInstancePath.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0168074 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0168528 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168EBC (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01694C0 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0169844 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0169FB0 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C016A1FC (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C016B0DC (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016B900 (RIMIDE_InjectGenericHidInput.c)
 *     RIMDeviceNotify @ 0x1C016C3E0 (RIMDeviceNotify.c)
 *     traceFrame @ 0x1C0170FA4 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171CF8 (RIMStartPointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C0172298 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175130 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0175F28 (rimSignalReadComplete.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017832C (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0179080 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01792F0 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0179574 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C017A544 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C017AA10 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C017AF5C (rimExtractScantime.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C017B8E4 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C017BB6C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C017C828 (rimProcessPointerDeviceContact.c)
 *     rimObsAddInputObserver @ 0x1C017D8AC (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C017DE84 (rimObsCheckForObservationPermissions.c)
 *     rimObsDeliverInputToObserver @ 0x1C017E1E8 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C017E9F8 (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017ECA0 (rimObsPushInputMessage.c)
 *     rimObsStartStopDeviceRead @ 0x1C017F394 (rimObsStartStopDeviceRead.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C017F5AC (rimObsUpdateInputObserverRegistration.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01820FC (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C0182288 (RIMHandleTTMDeviceInput.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C0182344 (RIMHandleTTMDeviceRemoval.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C018B7CC (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C558 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01937E4 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0193FD4 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0195408 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197CF8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0199310 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C019F008 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01AC6D8 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01AD9B8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AF7DC (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     UnpackMouseSettings @ 0x1C01AF9A0 (UnpackMouseSettings.c)
 *     ?_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C01B78A0 (-_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B80A0 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8240 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8BB0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B96F0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01BB1C4 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01BB4D0 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BB644 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01BBA6C (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01BBD58 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC120 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BC3C0 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC758 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01BC8DC (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01BCCE4 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STR.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z @ 0x1C01BCE3C (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01BCF64 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UN.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BD1D8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C0046B08
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046B08
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046B08: mov     [rsp+arg_0], rbx
 * 00000001C0046B0D: mov     [rsp+arg_8], rbp
 * 00000001C0046B12: mov     [rsp+arg_10], rsi
 * 00000001C0046B17: push    rdi
 * 00000001C0046B18: push    r14
 * 00000001C0046B1A: push    r15
 * 00000001C0046B1C: sub     rsp, 40h
 * 00000001C0046B20: mov     r14d, r8d
 * 00000001C0046B23: mov     r15, rcx
 * 00000001C0046B26: mov     edi, r8d
 * 00000001C0046B29: shr     rdi, 10h
 * 00000001C0046B2D: movzx   esi, dl
 * 00000001C0046B30: lea     ebx, [r14-1]
 * 00000001C0046B34: movzx   ebp, r9w
 * 00000001C0046B38: mov     r10d, ebx
 * 00000001C0046B3B: and     ebx, 1Fh
 * 00000001C0046B3E: shr     r10, 5
 * 00000001C0046B42: lea     rax, [rdi+rdi*4]
 * 00000001C0046B46: and     r10d, 7FFh
 * 00000001C0046B4D: mov     edx, ebx
 * 00000001C0046B4F: mov     ebx, 4
 * 00000001C0046B54: lea     r11, [r10+rax*4]
 * 00000001C0046B58: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0046B5F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0046B64: bt      eax, edx
 * 00000001C0046B67: jb      loc_1C00E95D8
 * 00000001C0046B6D: and     [rsp+58h+var_20], 0
 * 00000001C0046B73: lea     rax, [rsp+58h+arg_28]
 * 00000001C0046B7B: mov     r9, [rsp+58h+arg_20]
 * 00000001C0046B83: mov     r8d, r14d
 * 00000001C0046B86: mov     [rsp+58h+var_28], rbx
 * 00000001C0046B8B: mov     edx, esi
 * 00000001C0046B8D: mov     [rsp+58h+var_30], rax
 * 00000001C0046B92: mov     rcx, r15
 * 00000001C0046B95: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0046B9A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046BA1: nop     dword ptr [rax+rax+00h]
 * 00000001C0046BA6: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0046BAB: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0046BB0: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0046BB5: add     rsp, 40h
 * 00000001C0046BB9: pop     r15
 * 00000001C0046BBB: pop     r14
 * 00000001C0046BBD: pop     rdi
 * 00000001C0046BBE: retn
 * 00000001C00E95D8: lea     rcx, [rdi+rdi*4]
 * 00000001C00E95DC: add     rcx, rcx
 * 00000001C00E95DF: cmp     [r10+rcx*8+29h], sil
 * 00000001C00E95E4: jb      loc_1C0046B6D
 * 00000001C00E95EA: and     [rsp+58h+var_28], 0
 * 00000001C00E95F0: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00E95F8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00E95FF: mov     r9d, ebp
 * 00000001C00E9602: mov     r8, [rsp+58h+arg_20]
 * 00000001C00E960A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00E960F: mov     [rsp+58h+var_30], rbx
 * 00000001C00E9614: mov     [rsp+58h+var_38], rdx
 * 00000001C00E9619: mov     edx, 2Bh ; '+'
 * 00000001C00E961E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00E9624: nop
 * 00000001C00E9625: jmp     loc_1C0046B6D
 */

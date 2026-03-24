/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0047F78
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0002358 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     NtUserReportInertia @ 0x1C0004160 (NtUserReportInertia.c)
 *     RIMRemoveInputOfType @ 0x1C0005EB0 (RIMRemoveInputOfType.c)
 *     xxxInternalToUnicode @ 0x1C000B170 (xxxInternalToUnicode.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00198CC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     AssociateKernelIocpWcp @ 0x1C0044660 (AssociateKernelIocpWcp.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0047D84 (RIMUnregisterCurrentProcessForInput.c)
 *     GiveForegroundActivateRight @ 0x1C00486F0 (GiveForegroundActivateRight.c)
 *     HasForegroundActivateRight @ 0x1C0048F50 (HasForegroundActivateRight.c)
 *     RIMDeviceIoControl @ 0x1C0052E70 (RIMDeviceIoControl.c)
 *     rimDoRimDevChange @ 0x1C00533E4 (rimDoRimDevChange.c)
 *     RIMResetPointerDevices @ 0x1C00535F0 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0053760 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0053BE0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C00542C0 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0054610 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C00549C0 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0054E80 (RIMDirectStartStopDeviceRead.c)
 *     RIMAllocateHidDesc @ 0x1C0057F3C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00582E8 (RIMCreateHidDesc.c)
 *     RIMGetDeviceParent @ 0x1C006D900 (RIMGetDeviceParent.c)
 *     RIMGetPanelId @ 0x1C006DC84 (RIMGetPanelId.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0075C0C (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0075E00 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0088F08 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00893D0 (RIMRegisterForInputWithCallbacks.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00A8F60 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     CreateKernelIocpWcp @ 0x1C00AFF30 (CreateKernelIocpWcp.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C00B39C8 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     CreateKernelIocp @ 0x1C00B3AC0 (CreateKernelIocp.c)
 *     hCreateKernelEvent @ 0x1C00B6030 (hCreateKernelEvent.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00C2AB0 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00C4450 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00C4490 (RIMDirectStartDeviceClassNotifications.c)
 *     NtMapVisualRelativePoints @ 0x1C01174F0 (NtMapVisualRelativePoints.c)
 *     hCreateKernelTimer @ 0x1C0117930 (hCreateKernelTimer.c)
 *     xxxRemoteConnect @ 0x1C0117AB0 (xxxRemoteConnect.c)
 *     NtUserInjectDeviceInput @ 0x1C01309C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0130DF0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0131680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0131AA0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0131EC0 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C01329F0 (NtUserMapPointsByVisualIdentifier.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0152CE8 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     NtRIMAddInputObserver @ 0x1C0152EE0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C01546C0 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01547D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0154CB0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0154E40 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01551B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAreSiblingDevices @ 0x1C0155590 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0155790 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0155C90 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0155E20 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C01560F0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0156710 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C01569C0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0156BD0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0157080 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0157380 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C01577C0 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0157D30 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0157F00 (RIMRemoveInjectionDevice.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159500 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A07C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMActivatePointerDeviceDeadzone @ 0x1C015A250 (RIMActivatePointerDeviceDeadzone.c)
 *     RIMCreatePointerDeviceDeadzone @ 0x1C015A360 (RIMCreatePointerDeviceDeadzone.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1C015A500 (RIMDestroyPointerDeviceDeadzone.c)
 *     RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1C015A690 (RIMUpdatePointerDeviceDeadzoneOrigin.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C015B62C (RIMAddSimulatedPointerDeviceData.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015DDA8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C015E5D4 (RIMGetProductString.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C015F348 (RIMReleasePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0160F50 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C01621B4 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162838 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01672B0 (RIMIDECreateDeviceInstancePath.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0167FA4 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0168458 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168DEC (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01693F0 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0169774 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0169EE0 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C016A12C (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C016B00C (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016B830 (RIMIDE_InjectGenericHidInput.c)
 *     RIMDeviceNotify @ 0x1C016C310 (RIMDeviceNotify.c)
 *     traceFrame @ 0x1C0170ED4 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171C28 (RIMStartPointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01721C8 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175060 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0175E58 (rimSignalReadComplete.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017825C (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0178FB0 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0179220 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01794A4 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C017A474 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C017A940 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C017AE8C (rimExtractScantime.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C017B814 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C017BA9C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C017C758 (rimProcessPointerDeviceContact.c)
 *     rimObsAddInputObserver @ 0x1C017D7DC (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C017DDB4 (rimObsCheckForObservationPermissions.c)
 *     rimObsDeliverInputToObserver @ 0x1C017E118 (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C017E928 (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017EBD0 (rimObsPushInputMessage.c)
 *     rimObsStartStopDeviceRead @ 0x1C017F2C4 (rimObsStartStopDeviceRead.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C017F4DC (rimObsUpdateInputObserverRegistration.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C018202C (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01821B8 (RIMHandleTTMDeviceInput.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C0182274 (RIMHandleTTMDeviceRemoval.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C018B6FC (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C488 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C0193714 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0193F04 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0195338 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197C28 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0199240 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C019EF38 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01AC608 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C01AD8E8 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AF70C (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     UnpackMouseSettings @ 0x1C01AF8D0 (UnpackMouseSettings.c)
 *     ?_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z @ 0x1C01B77D0 (-_ivPacketDispatch@CBaseInput@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B7FD0 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8170 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8AE0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B9620 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01BB0F4 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01BB400 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BB574 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01BB99C (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01BBC88 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC050 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BC2F0 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC688 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01BC80C (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01BCC14 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STR.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z @ 0x1C01BCD6C (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01BCE94 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UN.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BD108 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1C0047F78
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047F78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047F78: mov     [rsp+arg_0], rbx
 * 00000001C0047F7D: mov     [rsp+arg_8], rbp
 * 00000001C0047F82: mov     [rsp+arg_10], rsi
 * 00000001C0047F87: push    rdi
 * 00000001C0047F88: push    r14
 * 00000001C0047F8A: push    r15
 * 00000001C0047F8C: sub     rsp, 40h
 * 00000001C0047F90: mov     r14d, r8d
 * 00000001C0047F93: mov     r15, rcx
 * 00000001C0047F96: mov     edi, r8d
 * 00000001C0047F99: shr     rdi, 10h
 * 00000001C0047F9D: movzx   esi, dl
 * 00000001C0047FA0: lea     ebx, [r14-1]
 * 00000001C0047FA4: movzx   ebp, r9w
 * 00000001C0047FA8: mov     r10d, ebx
 * 00000001C0047FAB: and     ebx, 1Fh
 * 00000001C0047FAE: shr     r10, 5
 * 00000001C0047FB2: lea     rax, [rdi+rdi*4]
 * 00000001C0047FB6: and     r10d, 7FFh
 * 00000001C0047FBD: mov     edx, ebx
 * 00000001C0047FBF: mov     ebx, 4
 * 00000001C0047FC4: lea     r11, [r10+rax*4]
 * 00000001C0047FC8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0047FCF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0047FD4: bt      eax, edx
 * 00000001C0047FD7: jb      loc_1C00E9F48
 * 00000001C0047FDD: and     [rsp+58h+var_20], 0
 * 00000001C0047FE3: lea     rax, [rsp+58h+arg_28]
 * 00000001C0047FEB: mov     r9, [rsp+58h+arg_20]
 * 00000001C0047FF3: mov     r8d, r14d
 * 00000001C0047FF6: mov     [rsp+58h+var_28], rbx
 * 00000001C0047FFB: mov     edx, esi
 * 00000001C0047FFD: mov     [rsp+58h+var_30], rax
 * 00000001C0048002: mov     rcx, r15
 * 00000001C0048005: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C004800A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0048011: nop     dword ptr [rax+rax+00h]
 * 00000001C0048016: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004801B: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0048020: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0048025: add     rsp, 40h
 * 00000001C0048029: pop     r15
 * 00000001C004802B: pop     r14
 * 00000001C004802D: pop     rdi
 * 00000001C004802E: retn
 * 00000001C00E9F48: lea     rcx, [rdi+rdi*4]
 * 00000001C00E9F4C: add     rcx, rcx
 * 00000001C00E9F4F: cmp     [r10+rcx*8+29h], sil
 * 00000001C00E9F54: jb      loc_1C0047FDD
 * 00000001C00E9F5A: and     [rsp+58h+var_28], 0
 * 00000001C00E9F60: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00E9F68: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00E9F6F: mov     r9d, ebp
 * 00000001C00E9F72: mov     r8, [rsp+58h+arg_20]
 * 00000001C00E9F7A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00E9F7F: mov     [rsp+58h+var_30], rbx
 * 00000001C00E9F84: mov     [rsp+58h+var_38], rdx
 * 00000001C00E9F89: mov     edx, 2Bh ; '+'
 * 00000001C00E9F8E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00E9F94: nop
 * 00000001C00E9F95: jmp     loc_1C0047FDD
 */

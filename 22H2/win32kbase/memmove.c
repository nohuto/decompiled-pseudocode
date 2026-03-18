/*
 * XREFs of memmove @ 0x1C00D6F40
 * Callers:
 *     NtUserToUnicodeEx @ 0x1C00026F0 (NtUserToUnicodeEx.c)
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     rimProcessInput @ 0x1C00059E8 (rimProcessInput.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0007E60 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1C0008BC0 (NtDCompositionWaitForCompositorClock.c)
 *     NtGdiPolyPolyDraw @ 0x1C000DA60 (NtGdiPolyPolyDraw.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00121BC (-ResetSystemColors@@YAXXZ.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0012F08 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     DrvBuildDevmodeList @ 0x1C00169E4 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverNames @ 0x1C0017080 (DrvGetDisplayDriverNames.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00179AC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00187F4 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00188E0 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C001C3F8 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C001D8F0 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     NtUserQueryDisplayConfig @ 0x1C001E630 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001E910 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0021640 (-ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00226A0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022964 (-EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022B68 (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022BDC (-EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022C58 (-EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0023860 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     DrvEnumDisplayDevices @ 0x1C0023B90 (DrvEnumDisplayDevices.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C0024FE0 (NtDCompositionTelemetrySetApplicationId.c)
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00250FC (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionCommitChannel @ 0x1C00271A0 (NtDCompositionCommitChannel.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00275C0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0029CDC (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0029DCC (-Grow@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     AllocAce @ 0x1C002CF10 (AllocAce.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C002D474 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00306E0 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C00316A0 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C003175C (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C0033A0C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     UserReAllocPool @ 0x1C004EE90 (UserReAllocPool.c)
 *     NtGdiOpenDCW @ 0x1C005A5E0 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C005A8F0 (NtGdiGetRegionData.c)
 *     InitScancodeMap @ 0x1C00613A0 (InitScancodeMap.c)
 *     FastGetProfileValue @ 0x1C0061950 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C0061FA0 (RtlLoadStringOrError.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C006423C (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0064DF0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C006A394 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C006C548 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     NtGdiExtCreateRegion @ 0x1C007C780 (NtGdiExtCreateRegion.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C007DB80 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007DD60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z @ 0x1C007DED4 (-vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C0080270 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     ?InitializeSensorGlobals@@YAJXZ @ 0x1C00820DC (-InitializeSensorGlobals@@YAJXZ.c)
 *     NtDCompositionConfirmFrame @ 0x1C0085100 (NtDCompositionConfirmFrame.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00889C0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0090220 (NtDCompositionGetFrameLegacyTokens.c)
 *     CreateProp @ 0x1C00909F8 (CreateProp.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0090D20 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     NtUserSetSysColors @ 0x1C00919E0 (NtUserSetSysColors.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00941D0 (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 *     ?SpiGetStickyKeys@@YAHKPEAX@Z @ 0x1C0095708 (-SpiGetStickyKeys@@YAHKPEAX@Z.c)
 *     SetHandleFlag @ 0x1C0096560 (SetHandleFlag.c)
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009AA50 (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatc.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00A18FC (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBG@Z @ 0x1C00A1B1C (-MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBG@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00A45A0 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C00A4B34 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A55F8 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x1C00A6580 (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A69B0 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C00A6D30 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C00A6DDC (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     ?SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A70E0 (-SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A7CB0 (-SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     NtDCompositionGetDeletedResources @ 0x1C00AA4D0 (NtDCompositionGetDeletedResources.c)
 *     CreateNewEventEntry @ 0x1C00AC224 (CreateNewEventEntry.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00ACC98 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00ACE38 (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00AED14 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00B1154 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C00B4258 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     InitSystemThread @ 0x1C00B46F0 (InitSystemThread.c)
 *     UserReAllocPoolWithQuota @ 0x1C00B5CD0 (UserReAllocPoolWithQuota.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00B5F24 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00BC030 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00BD8C0 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C00C05B8 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z @ 0x1C00C47A0 (-DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CBDB0 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00CC1C8 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 *     memcpy_s @ 0x1C00CFDD8 (memcpy_s.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00D5730 (NtDCompositionSendDwmLpcMessage.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C00E71E2 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     HMCleanupGrantedHandle @ 0x1C012C968 (HMCleanupGrantedHandle.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__&DrvSampleDisplayState_ @ 0x1C012F1AC (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__-D.c)
 *     UserPostNKAPCBuffer @ 0x1C012FB00 (UserPostNKAPCBuffer.c)
 *     ?Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z @ 0x1C012FFB0 (-Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z @ 0x1C0130264 (-Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z.c)
 *     FastGetProfileKeysW @ 0x1C01352E0 (FastGetProfileKeysW.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0137210 (xxxUserChangeDisplaySettings.c)
 *     NtConfigureInputSpace @ 0x1C0140880 (NtConfigureInputSpace.c)
 *     NtMITSynthesizeTouchInput @ 0x1C01424C0 (NtMITSynthesizeTouchInput.c)
 *     NtSetShellCursorState @ 0x1C0142BE0 (NtSetShellCursorState.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0143890 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0143FD0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C0145940 (NtUserGetRawPointerDeviceData.c)
 *     NtUserGetSystemContentRects @ 0x1C0145B70 (NtUserGetSystemContentRects.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0146140 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0146880 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C0147250 (NtUserInjectDeviceInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148360 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148D00 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C01498B0 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetFeatureReportResponse @ 0x1C014AF30 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C014B660 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetSystemContentRects @ 0x1C014BE50 (NtUserSetSystemContentRects.c)
 *     NtUserSystemParametersInfo @ 0x1C014C300 (NtUserSystemParametersInfo.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C014E684 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014E8D4 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014EA20 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C014EBD4 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C0152790 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1C0152C18 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C01535D0 (-bClone@EPATHOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01545DC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154FD0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0155C9C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0156D58 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0158750 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0158840 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C015AEB4 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C015AF08 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x1C015AFD0 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C015B224 (-AddElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C015B334 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C015B874 (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C015BD8C (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C015C2B0 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C015C720 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateByHandle @ 0x1C015C880 (NtGdiGetCertificateByHandle.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161814 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     InsertModecapList @ 0x1C0163AFC (InsertModecapList.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C016894C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C01694D0 (NtHWCursorUpdatePointer.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C016CD0C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C016E530 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C016E6A4 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C016E960 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C016EC94 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     rimCopyInstancePathFromRimDev @ 0x1C01746A8 (rimCopyInstancePathFromRimDev.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C0177D10 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMInjectInput @ 0x1C01792E0 (RIMInjectInput.c)
 *     RIMVirtCreateHidDesc @ 0x1C0184200 (RIMVirtCreateHidDesc.c)
 *     RIMAssignPreparsedData @ 0x1C01865FC (RIMAssignPreparsedData.c)
 *     RIMGetProductString @ 0x1C0189C90 (RIMGetProductString.c)
 *     RIMIDECreateHIDDesc @ 0x1C019399C (RIMIDECreateHIDDesc.c)
 *     ?CloneLogicalCollection@@YAHPEAEKPEAKK@Z @ 0x1C0198B0C (-CloneLogicalCollection@@YAHPEAEKPEAKK@Z.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0198FE0 (RIMIDE_InitializePointerDeviceInjection.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C0199170 (RIMIDE_InjectGenericHidInput.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A0738 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01A0A58 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimStoreRawDataBlock @ 0x1C01A16B0 (rimStoreRawDataBlock.c)
 *     rimFindOtherQueuedFrames @ 0x1C01A4504 (rimFindOtherQueuedFrames.c)
 *     rimObsCopyMessage @ 0x1C01AD980 (rimObsCopyMessage.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BACC0 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01BE764 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01BF8F8 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     SendShellClipChanged @ 0x1C01E8B00 (SendShellClipChanged.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C01F3980 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C01FDF54 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 *     ?EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ @ 0x1C020C440 (-EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0210900 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0210C10 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C021107C (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C0211700 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C02119CC (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0211A78 (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0211C00 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C0212030 (-SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0212FC8 (-EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0213314 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02134F0 (-SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x1C0213DD0 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C0213EC8 (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0225770 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?SetBufferProperty@CRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0225E90 (-SetBufferProperty@CRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0228830 (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02294A0 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C022A070 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022A238 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C022A3C0 (-ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C022A43C (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C022A4E0 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 *     ?SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022A740 (-SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02309B0 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1C02369A8 (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     WppTraceCallback @ 0x1C02C0690 (WppTraceCallback.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}

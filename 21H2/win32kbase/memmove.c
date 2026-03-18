/*
 * XREFs of memmove @ 0x1C00DE8C0
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003160 (NtUserInjectKeyboardInput.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C00076D0 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C00080A4 (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0008CF0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000AB90 (-ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AD84 (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000ADF8 (-EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000AF68 (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B35C (-EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B418 (-EmitSetCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     NtDCompositionGetDeletedResources @ 0x1C000DE60 (NtDCompositionGetDeletedResources.c)
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0010A2C (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatc.c)
 *     ?EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013974 (-EmitDescriptionCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C00143F4 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C00150D4 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C0015F8C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0016048 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0019374 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C00196DC (-growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C00267E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     NtGdiExtCreateRegion @ 0x1C0030EC0 (NtGdiExtCreateRegion.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C00310C0 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0032BF4 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C003B908 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     NtUserToUnicodeEx @ 0x1C003F590 (NtUserToUnicodeEx.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0050A58 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     AllocAce @ 0x1C0058D40 (AllocAce.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C005D5B0 (-ResetSystemColors@@YAXXZ.c)
 *     InitScancodeMap @ 0x1C005FBD0 (InitScancodeMap.c)
 *     FastGetProfileValue @ 0x1C0060B60 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C00612C0 (RtlLoadStringOrError.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0064A40 (xxxUserChangeDisplaySettings.c)
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C0068FAC (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0069E9C (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006BAAC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C006F640 (DrvEnumDisplaySettings.c)
 *     NtUserQueryDisplayConfig @ 0x1C0070110 (NtUserQueryDisplayConfig.c)
 *     NtGdiOpenDCW @ 0x1C0071250 (NtGdiOpenDCW.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C0071D50 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C00721C0 (DrvEnumDisplayDevices.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00756BC (DrvUpdateDisplayDriverParameters.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00793CC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C0079EE0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C007A2E4 (DrvGetDisplayDriverParameters.c)
 *     DrvGetDisplayDriverNames @ 0x1C007A970 (DrvGetDisplayDriverNames.c)
 *     NtDCompositionConfirmFrame @ 0x1C00812D0 (NtDCompositionConfirmFrame.c)
 *     ?Grow@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00853EC (-Grow@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C008557C (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0085628 (-Grow@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetK.c)
 *     CreateProp @ 0x1C0086858 (CreateProp.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0088140 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0089820 (NtDCompositionGetFrameLegacyTokens.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008ABF4 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     UserReAllocPool @ 0x1C008AE00 (UserReAllocPool.c)
 *     NtGdiGetRegionData @ 0x1C008B350 (NtGdiGetRegionData.c)
 *     SetHandleFlag @ 0x1C008F4F0 (SetHandleFlag.c)
 *     ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0091288 (-EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0094520 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C00949C0 (NtGdiPolyPolyDraw.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C009B950 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C00A09B0 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00A2FE8 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00A58B0 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C00A5E10 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A6880 (-SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C00A7E48 (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z @ 0x1C00A8518 (-MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00AAE14 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00AB690 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C00AB794 (-EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C00ABFA8 (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C00AC050 (-ReturnResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAXPEAVCDeletedNotificationLi.c)
 *     InitSystemThread @ 0x1C00AE200 (InitSystemThread.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AED20 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C00AF298 (-SetApplicationId@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 *     ?SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00AF550 (-SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 *     UserReAllocPoolWithQuota @ 0x1C00AF750 (UserReAllocPoolWithQuota.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00AFB90 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 *     CreateNewEventEntry @ 0x1C00B13AC (CreateNewEventEntry.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00B5F50 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B6868 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00B69D8 (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     NtUserSetSysColors @ 0x1C00B8210 (NtUserSetSysColors.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00BFAD0 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00C0AC8 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x1C00C1220 (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00C1370 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z @ 0x1C00C37B0 (-DrvDriverExtraCallback@@YAJPEAGKPEAXK11@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     rimProcessInput @ 0x1C00CA6AC (rimProcessInput.c)
 *     ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C00CD130 (-bClone@EPATHOBJ@@QEAAHAEAV1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00CD710 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00CDD80 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00CE290 (NtGdiGetCertificateByHandle.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C00CEBC0 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00CECB4 (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x1C00CEE84 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00CF7F8 (-AddElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     memcpy_s @ 0x1C00D7B98 (memcpy_s.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D7DB0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     RaiseException @ 0x1C00DE150 (RaiseException.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C00E9C5A (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     HMCleanupGrantedHandle @ 0x1C0141578 (HMCleanupGrantedHandle.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__&DrvSampleDisplayState_ @ 0x1C0143278 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__-D.c)
 *     UserPostNKAPCBuffer @ 0x1C0144100 (UserPostNKAPCBuffer.c)
 *     ?Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z @ 0x1C01444F0 (-Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z @ 0x1C01447B4 (-Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z.c)
 *     FastGetProfileKeysW @ 0x1C01491C0 (FastGetProfileKeysW.c)
 *     NtConfigureInputSpace @ 0x1C0153670 (NtConfigureInputSpace.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0155E60 (NtMITSynthesizeTouchInput.c)
 *     NtSetShellCursorState @ 0x1C0156AA0 (NtSetShellCursorState.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0157A60 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01580E0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0158C20 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C015A920 (NtUserGetRawPointerDeviceData.c)
 *     NtUserGetSystemContentRects @ 0x1C015AC70 (NtUserGetSystemContentRects.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C015B1B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C015BD40 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C015C9F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectMouseInput @ 0x1C015DD80 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C015E990 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C015F740 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0161000 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C01618F0 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetSystemContentRects @ 0x1C01628A0 (NtUserSetSystemContentRects.c)
 *     NtUserSystemParametersInfo @ 0x1C0162FF0 (NtUserSystemParametersInfo.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C0165450 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01656A0 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01657EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01659A0 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C0169F40 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C016A304 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1C016C7DC (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C016C918 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C016CD44 (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C016CF30 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C016D300 (NtGdiGetCertificate.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171294 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     LogDiagSDCAccessDenied @ 0x1C0175448 (LogDiagSDCAccessDenied.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C0175B6C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C0176C30 (NtHWCursorUpdatePointer.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0179378 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C017A288 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C017A3C0 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C017A528 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C017A888 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     rimCopyInstancePathFromRimDev @ 0x1C017FA80 (rimCopyInstancePathFromRimDev.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C01834A0 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMInjectInput @ 0x1C01849A0 (RIMInjectInput.c)
 *     RIMVirtCreateHidDesc @ 0x1C018DB94 (RIMVirtCreateHidDesc.c)
 *     ?Grow@?$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C018ED5C (-Grow@-$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     RIMAssignPreparsedData @ 0x1C018F944 (RIMAssignPreparsedData.c)
 *     RIMGetProductString @ 0x1C0193764 (RIMGetProductString.c)
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C019F1F8 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C019FE90 (RIMIDE_InitializePointerDeviceInjection.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C01A0020 (RIMIDE_InjectGenericHidInput.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A6FEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01A73A0 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     rimStoreRawDataBlock @ 0x1C01A7F84 (rimStoreRawDataBlock.c)
 *     rimFindOtherQueuedFrames @ 0x1C01A9290 (rimFindOtherQueuedFrames.c)
 *     rimObsCopyMessage @ 0x1C01B3E58 (rimObsCopyMessage.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BE664 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01C32A4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     SendShellClipChanged @ 0x1C01E83D0 (SendShellClipChanged.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C01F6DB0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C01FDE34 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1C0212230 (NtDCompositionWaitForCompositorClock.c)
 *     ?EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ @ 0x1C0214978 (-EnsureSpace@CGenericPropertyList@DirectComposition@@AEAAJXZ.c)
 *     ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0217DB4 (-EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02180E0 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C021854C (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C0218BD0 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C0218E9C (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218F4C (-EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02190E0 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C021953C (-SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021A520 (-EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C021A9E0 (-SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 *     ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x1C021B4A4 (-Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z.c)
 *     ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C021B59C (-Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z.c)
 *     ?SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C021FF00 (-SetBufferProperty@CGenericMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPE.c)
 *     ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C022A5A0 (-SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationCha.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C022AB30 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C022C284 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F45C (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0230160 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0231098 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0231258 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0231450 (-ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C02314CC (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0231570 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 *     ?SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0231810 (-SetRemarshalingFlags@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     WppTraceCallback @ 0x1C02C9360 (WppTraceCallback.c)
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

/*
 * XREFs of memmove @ 0x1C0130B80
 * Callers:
 *     ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C0001150 (-vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     NtGdiGradientFill @ 0x1C0001410 (NtGdiGradientFill.c)
 *     NtGdiEnumFonts @ 0x1C00035F0 (NtGdiEnumFonts.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C00041A0 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     cjCopyFontDataW @ 0x1C0004330 (cjCopyFontDataW.c)
 *     NtGdiTransformPoints @ 0x1C0006B30 (NtGdiTransformPoints.c)
 *     xxxCsEvent @ 0x1C000DCC0 (xxxCsEvent.c)
 *     NtGdiGetMonitorID @ 0x1C000FDB0 (NtGdiGetMonitorID.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C0012F60 (DwmSyncGetCompositionAttribute.c)
 *     NtUserSendInput @ 0x1C0016F20 (NtUserSendInput.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00195AC (HT_CreateDeviceHalftoneInfo.c)
 *     SetAppCompatFlags @ 0x1C001F6C0 (SetAppCompatFlags.c)
 *     DwmAsyncUpdateVisRgn @ 0x1C0021F40 (DwmAsyncUpdateVisRgn.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0025E8C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     hfontCreate @ 0x1C0027050 (hfontCreate.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0029258 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C002992C (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     NtGdiHLSurfGetInformation @ 0x1C0029E10 (NtGdiHLSurfGetInformation.c)
 *     NtUserGetClassInfoEx @ 0x1C002F120 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C0030020 (NtUserRegisterClassExWOW.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0035628 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RemoveProcessFromJob @ 0x1C003BE50 (RemoveProcessFromJob.c)
 *     NtUserConsoleControl @ 0x1C003C4D0 (NtUserConsoleControl.c)
 *     xxxConsoleControl @ 0x1C003C5E8 (xxxConsoleControl.c)
 *     NtUserProcessConnect @ 0x1C003DB30 (NtUserProcessConnect.c)
 *     NtUserBuildHwndList @ 0x1C003FD60 (NtUserBuildHwndList.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00402A0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserCreateWindowEx @ 0x1C0042320 (NtUserCreateWindowEx.c)
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00470E0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0051390 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0064DB8 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     NtGdiExtGetObjectW @ 0x1C0065470 (NtGdiExtGetObjectW.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C007CAB0 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     RenderNineGridInternal @ 0x1C0080D30 (RenderNineGridInternal.c)
 *     DNG_DrawRow @ 0x1C0081850 (DNG_DrawRow.c)
 *     NtGdiDrawStream @ 0x1C00829B0 (NtGdiDrawStream.c)
 *     NtGdiGetDIBitsInternal @ 0x1C0089270 (NtGdiGetDIBitsInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C008A530 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C008D600 (NtGdiSetDIBitsToDeviceInternal.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C008FA28 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C008FD90 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C008FFA0 (NtGdiCreateDIBSection.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00906B0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     NtUserQueryInformationThread @ 0x1C00930B0 (NtUserQueryInformationThread.c)
 *     NtUserSetInformationThread @ 0x1C0093A50 (NtUserSetInformationThread.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C009DCB0 (NtUserfnPOWERBROADCAST.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00A07D4 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     NtUserSystemParametersInfoForDpi @ 0x1C00A2040 (NtUserSystemParametersInfoForDpi.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00A4FB4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     DefSetText @ 0x1C00A7330 (DefSetText.c)
 *     xxxInsertMenuItem @ 0x1C00A7ADC (xxxInsertMenuItem.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1C00A824C (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00B5A10 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00B6670 (-vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B9FA4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C00BA3C4 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00BA744 (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C00BA838 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00BAE00 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     NtGdiExtEscape @ 0x1C00BB120 (NtGdiExtEscape.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB490 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BC810 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x1C00BCE20 (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1C00BDD10 (EditionCreateWindowStationEntryPoint.c)
 *     xxxResolveDesktop @ 0x1C00BF660 (xxxResolveDesktop.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C00C468C (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00C4950 (-vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     _GetUserObjectInformation @ 0x1C00C7720 (_GetUserObjectInformation.c)
 *     NtGdiHfontCreate @ 0x1C00C7C90 (NtGdiHfontCreate.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00C9C44 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     NtUserSetGestureConfig @ 0x1C00CB0C0 (NtUserSetGestureConfig.c)
 *     TextCopy @ 0x1C00D176C (TextCopy.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00D2120 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetProcessSessionFonts @ 0x1C00D2D60 (NtGdiGetProcessSessionFonts.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00D30D8 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     NtGdiDoPalette @ 0x1C00D3F50 (NtGdiDoPalette.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00D51E0 (NtUserRegisterRawInputDevices.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C00D8430 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x1C00DC040 (-CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z @ 0x1C00DDE10 (-CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C00DF4E0 (NtUserfnINDEVICECHANGE.c)
 *     CreateNewEventEntry @ 0x1C00E0C8C (CreateNewEventEntry.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00E12A0 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x1C00E2A9C (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00E33E4 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     _CreateAcceleratorTable @ 0x1C00E3F94 (_CreateAcceleratorTable.c)
 *     _BuildNameList @ 0x1C00E5770 (_BuildNameList.c)
 *     vSpDynamicModeChange @ 0x1C00E5A90 (vSpDynamicModeChange.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00E5F4C (xxxProcessSetWindowPosEvent.c)
 *     AllocateUnicodeString @ 0x1C00E9BB0 (AllocateUnicodeString.c)
 *     _SetWindowStationUser @ 0x1C00EE0CC (_SetWindowStationUser.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00F0134 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     PREALLOCMEM2 @ 0x1C00F02EC (PREALLOCMEM2.c)
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00F19A0 (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 *     xxxValidateClassAndSize @ 0x1C00FA3E4 (xxxValidateClassAndSize.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ReferenceClass @ 0x1C0109410 (ReferenceClass.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010AD6C (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     NtGdiGetWidthTable @ 0x1C010F0B0 (NtGdiGetWidthTable.c)
 *     vProcessEntry @ 0x1C010F5B8 (vProcessEntry.c)
 *     NtGdiGetCharABCWidthsW @ 0x1C0111840 (NtGdiGetCharABCWidthsW.c)
 *     ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0111D54 (-GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4Entry.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C0112170 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetRealizationInfo @ 0x1C0112910 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextExtentExW @ 0x1C0112F00 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetFontData @ 0x1C0113400 (NtGdiGetFontData.c)
 *     NtGdiExtTextOutW @ 0x1C01143A0 (NtGdiExtTextOutW.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C0114FF4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C0118C4C (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     BuildAndLoadLinkedFontRoutine @ 0x1C0118F90 (BuildAndLoadLinkedFontRoutine.c)
 *     bAddFlEntry @ 0x1C0119070 (bAddFlEntry.c)
 *     NtGdiGetTextFaceW @ 0x1C011A610 (NtGdiGetTextFaceW.c)
 *     GreGetTextFaceW @ 0x1C011A714 (GreGetTextFaceW.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C011AC70 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C011C0F0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C011D1B0 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011D480 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x1C011DBE0 (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C011E020 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011E3A0 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011E870 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C011F230 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C011FF68 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C01214A0 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0121580 (NtGdiGetGlyphIndicesWInternal.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C0121ECC (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     NtGdiGetGlyphOutline @ 0x1C0124280 (NtGdiGetGlyphOutline.c)
 *     ?vRop2FunctionA@@YAXPEAK00K@Z @ 0x1C0126020 (-vRop2FunctionA@@YAXPEAK00K@Z.c)
 *     ?vRop2FunctionC@@YAXPEAK00K@Z @ 0x1C0126040 (-vRop2FunctionC@@YAXPEAK00K@Z.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 *     NtUserGetRawInputData @ 0x1C0147690 (NtUserGetRawInputData.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0147D40 (NtUserHwndQueryRedirectionInfo.c)
 *     FixupGrayScan @ 0x1C014BBB8 (FixupGrayScan.c)
 *     InputAABFDATAToAA24 @ 0x1C014C430 (InputAABFDATAToAA24.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C014D9F6 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C014F852 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     NtGdiExtCreatePen @ 0x1C014FEC0 (NtGdiExtCreatePen.c)
 *     ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C0150660 (-vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C01A5F74 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C01A60F0 (-RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C01A9118 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01AA924 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01AFDF8 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01B2F60 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01B31A0 (-DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 *     GetTaskName @ 0x1C01B43CC (GetTaskName.c)
 *     ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x1C01B8B58 (-ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C01BF948 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C8DCC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtUserCreateLocalMemHandle @ 0x1C01CF0E0 (NtUserCreateLocalMemHandle.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01CF250 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01CFDF0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureConfig @ 0x1C01D2300 (NtUserGetGestureConfig.c)
 *     NtUserGetGestureExtArgs @ 0x1C01D2600 (NtUserGetGestureExtArgs.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01D3030 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C01D40F0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetRawInputBuffer @ 0x1C01D4570 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01D48E0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01D4F90 (NtUserGetTouchInputInfo.c)
 *     NtUserInjectTouchInput @ 0x1C01D65E0 (NtUserInjectTouchInput.c)
 *     NtUserMagGetContextInformation @ 0x1C01D7910 (NtUserMagGetContextInformation.c)
 *     NtUserProcessInkFeedbackCommand @ 0x1C01D99E0 (NtUserProcessInkFeedbackCommand.c)
 *     NtUserResolveDesktopForWOW @ 0x1C01DAF30 (NtUserResolveDesktopForWOW.c)
 *     NtUserSetCalibrationData @ 0x1C01DB750 (NtUserSetCalibrationData.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01E0F70 (NtUserUserHandleGrantAccess.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C01E2540 (NtUserfnINLPHLPSTRUCT.c)
 *     ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1C01E93C0 (-_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z.c)
 *     ?_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z @ 0x1C01E9678 (-_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C01E99E8 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01FEA98 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     _ConvertMemHandle @ 0x1C0200554 (_ConvertMemHandle.c)
 *     RemoteShadowCleanup @ 0x1C0205DF0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0205FFC (RemoteShadowStart.c)
 *     AllocGestureInfo @ 0x1C0207064 (AllocGestureInfo.c)
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1C020800C (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 *     SfnIMECONTROL @ 0x1C0209610 (SfnIMECONTROL.c)
 *     SfnPOUTLPINT @ 0x1C0211680 (SfnPOUTLPINT.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0214454 (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C02148C8 (xxxClientCopyDDEOut1.c)
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C022F9B8 (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0249C3C (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C024F598 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     GetCachedSMP @ 0x1C0252734 (GetCachedSMP.c)
 *     AAHalftoneBitmap @ 0x1C0253604 (AAHalftoneBitmap.c)
 *     CreateStandardMonoPattern @ 0x1C0254780 (CreateStandardMonoPattern.c)
 *     ExpandHTPatX @ 0x1C0254E34 (ExpandHTPatX.c)
 *     AddBGRMapCache @ 0x1C0255FE8 (AddBGRMapCache.c)
 *     CacheRGBToXYZ @ 0x1C0256490 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C0256580 (ComputeBGRMappingTable.c)
 *     FindBGRMapCache @ 0x1C0257DE8 (FindBGRMapCache.c)
 *     TrimBGRMapCache @ 0x1C02582A0 (TrimBGRMapCache.c)
 *     CreateHalftoneBrushPat @ 0x1C02591B0 (CreateHalftoneBrushPat.c)
 *     BltMask_CY @ 0x1C025F560 (BltMask_CY.c)
 *     FixupColorScan @ 0x1C025F804 (FixupColorScan.c)
 *     InitializeFUDI @ 0x1C025FE74 (InitializeFUDI.c)
 *     ShrinkMask_CY @ 0x1C0260610 (ShrinkMask_CY.c)
 *     ExpandDIB_CY @ 0x1C0261EE0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0262870 (ExpandDIB_CY_ExpCX.c)
 *     FastExpAA_CY @ 0x1C0263760 (FastExpAA_CY.c)
 *     GrayExpandDIB_CY @ 0x1C02640E0 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0264850 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0265340 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0266300 (ShrinkDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1C0266AA0 (ShrinkDIB_CY_SrkCX.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C026B94C (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     EngHangNotification @ 0x1C026EDE0 (EngHangNotification.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1C027798C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GreGetUFI@@YAHPEAUHDC__@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0278A2C (-GreGetUFI@@YAHPEAUHDC__@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279714 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreGetUFIPathname @ 0x1C027A550 (GreGetUFIPathname.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C027A930 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiGetLinkedUFIs @ 0x1C027ADF0 (NtGdiGetLinkedUFIs.c)
 *     NtGdiSetLinkedUFIs @ 0x1C027B200 (NtGdiSetLinkedUFIs.c)
 *     NtGdiStartDoc @ 0x1C027B370 (NtGdiStartDoc.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C028D690 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     cMapRemoteFonts @ 0x1C028E420 (cMapRemoteFonts.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C028F504 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     NtGdiPlgBlt @ 0x1C0293E20 (NtGdiPlgBlt.c)
 *     FONTOBJ_vGetInfo @ 0x1C029B1A0 (FONTOBJ_vGetInfo.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C029B36C (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C029C850 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     GreGetCannonicalName @ 0x1C029D92C (GreGetCannonicalName.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C02A3450 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C02A3620 (NtGdiGetEudcTimeStampEx.c)
 *     NtGdiGetStringBitmapW @ 0x1C02A37B0 (NtGdiGetStringBitmapW.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A5774 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A5A50 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C02A5D44 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A8DD8 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?ReAllocate@?$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02A9A28 (-ReAllocate@-$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9AC4 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C02A9E20 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ??$read@E@?$umptr_r@E@@QEBA_NPEAE_K_J@Z @ 0x1C02ACB60 (--$read@E@-$umptr_r@E@@QEBA_NPEAE_K_J@Z.c)
 *     ??$read@U_POINTL@@@?$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z @ 0x1C02ACC40 (--$read@U_POINTL@@@-$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z.c)
 *     ?BackPropagateBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1C02BA054 (-BackPropagateBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1C02BA388 (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C02BA63C (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C02BA788 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C02BBA10 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C02BBF60 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02BCAD0 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02BD080 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02BE5A0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02BE760 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02BECE0 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02C14CC (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C02C30D0 (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02C435C (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C02C4500 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiDescribePixelFormat @ 0x1C02C4920 (NtGdiDescribePixelFormat.c)
 *     NtGdiGetCharWidthW @ 0x1C02C4C30 (NtGdiGetCharWidthW.c)
 *     NtGdiGetCharacterPlacementW @ 0x1C02C4E40 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x1C02C54D0 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C02C56E0 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1C02C5930 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetKerningPairs @ 0x1C02C5A20 (NtGdiGetKerningPairs.c)
 *     NtGdiGetRasterizerCaps @ 0x1C02C5C20 (NtGdiGetRasterizerCaps.c)
 *     NtGdiGetTextExtent @ 0x1C02C5CE0 (NtGdiGetTextExtent.c)
 *     NtGdiGetUFI @ 0x1C02C5EB0 (NtGdiGetUFI.c)
 *     NtGdiGetUFIPathname @ 0x1C02C6040 (NtGdiGetUFIPathname.c)
 *     NtGdiMakeFontDir @ 0x1C02C64D0 (NtGdiMakeFontDir.c)
 *     NtGdiPolyTextOutW @ 0x1C02C6840 (NtGdiPolyTextOutW.c)
 *     NtGdiQueryFonts @ 0x1C02C6C20 (NtGdiQueryFonts.c)
 *     NtGdiScaleValues @ 0x1C02C70B0 (NtGdiScaleValues.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02C9A30 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02C9ED8 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02CA494 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C02CA4E8 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     NtGdiEngGradientFill @ 0x1C02CC2F0 (NtGdiEngGradientFill.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02CEA40 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02CECD0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02CF2D0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02CF430 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02CF8A0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     GreCreateDIBBrush @ 0x1C02D2D2C (GreCreateDIBBrush.c)
 *     NtGdiCreateDIBBrush @ 0x1C02D30C0 (NtGdiCreateDIBBrush.c)
 *     GreRealizePalette @ 0x1C02D3600 (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02D4500 (NtGdiResizePalette.c)
 *     NtGdiCreateServerMetaFile @ 0x1C02D4AB0 (NtGdiCreateServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02D4BF0 (NtGdiGetServerMetaFileBits.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C02D551C (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C02D55E8 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C02D5C70 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02D80F0 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     NtGdiGetFontFileData @ 0x1C02D87D0 (NtGdiGetFontFileData.c)
 *     ?GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D90CC (-GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02DACDC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C02E3290 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E5190 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E5680 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E59A0 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02E5CE0 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02E7890 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02EB080 (-vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C02EC4B0 (-vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED580 (-vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED610 (-vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED910 (-vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?WriteAbsolute8@@YAHPEBEPEAEH0@Z @ 0x1C02EF69C (-WriteAbsolute8@@YAHPEBEPEAEH0@Z.c)
 *     ?WriteAbsolute4@@YAHPEBEPEAEH0@Z @ 0x1C02F0F14 (-WriteAbsolute4@@YAHPEBEPEAEH0@Z.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02F68E4 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02F69E0 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C02F6D08 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02F9670 (-vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02F98A0 (-vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02F9B90 (-vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02F9DC0 (-vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02FA0A0 (-vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?BltLnkReadPat4@@YAXPEAEKPEBEKKKK@Z @ 0x1C0306A40 (-BltLnkReadPat4@@YAXPEAEKPEBEKKKK@Z.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x1C03078EC (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     ?CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z @ 0x1C03084D0 (-CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C0308540 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C0308670 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C03087A0 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308940 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308A60 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C0308F48 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     WppTraceCallback @ 0x1C039D590 (WppTraceCallback.c)
 *     bInitStockFontsInternal @ 0x1C03B63A8 (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C03B6A80 (bInitOneStockFont.c)
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

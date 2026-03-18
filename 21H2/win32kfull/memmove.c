/*
 * XREFs of memmove @ 0x1C0160280
 * Callers:
 *     FixupGrayScan @ 0x1C00015E0 (FixupGrayScan.c)
 *     NtUserGetRawInputData @ 0x1C0001BE0 (NtUserGetRawInputData.c)
 *     xxxCsEvent @ 0x1C0003004 (xxxCsEvent.c)
 *     NtGdiGetMonitorID @ 0x1C0004A80 (NtGdiGetMonitorID.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0008BA0 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C000BADC (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C160 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C710 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C8A0 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C9D0 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C000E3EC (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     cjCopyFontDataW @ 0x1C000E5E8 (cjCopyFontDataW.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C000F3E4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     NtGdiEnumFonts @ 0x1C000F4D0 (NtGdiEnumFonts.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C001053C (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     NtGdiExtEscape @ 0x1C00108F0 (NtGdiExtEscape.c)
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C0011080 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 *     hfontCreate @ 0x1C0013DE0 (hfontCreate.c)
 *     BuildAndLoadLinkedFontRoutine @ 0x1C0014770 (BuildAndLoadLinkedFontRoutine.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0014850 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C0017E90 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0018120 (GreGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetFontData @ 0x1C00184C0 (NtGdiGetFontData.c)
 *     NtGdiGetGlyphOutline @ 0x1C0018940 (NtGdiGetGlyphOutline.c)
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x1C0019230 (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z.c)
 *     NtGdiGetWidthTable @ 0x1C0019440 (NtGdiGetWidthTable.c)
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C001B700 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C001B7B0 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     NtGdiGetTextFaceW @ 0x1C001C6D0 (NtGdiGetTextFaceW.c)
 *     GreGetTextFaceW @ 0x1C001C7E0 (GreGetTextFaceW.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C001CC60 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C001E390 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     NtGdiHLSurfGetInformation @ 0x1C00221E0 (NtGdiHLSurfGetInformation.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0022C50 (NtUserSetWindowCompositionAttribute.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     NtGdiGetDIBitsInternal @ 0x1C0026E60 (NtGdiGetDIBitsInternal.c)
 *     NtGdiExtGetObjectW @ 0x1C0027A60 (NtGdiExtGetObjectW.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0028378 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C002BBA0 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0032A40 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     NtGdiGetTextExtentExW @ 0x1C0034270 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetRealizationInfo @ 0x1C0034580 (NtGdiGetRealizationInfo.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C004D030 (NtUserGetWindowCompositionAttribute.c)
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C00615D0 (NtUserRegisterClassExWOW.c)
 *     NtUserCreateWindowEx @ 0x1C00657B0 (NtUserCreateWindowEx.c)
 *     xxxInsertMenuItem @ 0x1C0065F38 (xxxInsertMenuItem.c)
 *     DefSetText @ 0x1C00689C0 (DefSetText.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     NtUserBuildHwndList @ 0x1C0070A10 (NtUserBuildHwndList.c)
 *     _GetUserObjectInformation @ 0x1C00727B0 (_GetUserObjectInformation.c)
 *     NtUserProcessConnect @ 0x1C0079860 (NtUserProcessConnect.c)
 *     RemoveProcessFromJob @ 0x1C007A1B0 (RemoveProcessFromJob.c)
 *     NtUserConsoleControl @ 0x1C007A5F0 (NtUserConsoleControl.c)
 *     xxxConsoleControl @ 0x1C007A708 (xxxConsoleControl.c)
 *     NtUserSendInput @ 0x1C007EAF0 (NtUserSendInput.c)
 *     NtUserGetClassInfoEx @ 0x1C007EFD0 (NtUserGetClassInfoEx.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0081210 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     NtGdiGradientFill @ 0x1C00879F0 (NtGdiGradientFill.c)
 *     NtGdiExtTextOutW @ 0x1C008A800 (NtGdiExtTextOutW.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C008E130 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C009095C (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     AAHalftoneBitmap @ 0x1C0093280 (AAHalftoneBitmap.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C0096118 (HT_CreateDeviceHalftoneInfo.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C009AE90 (xxxProcessSetWindowPosEvent.c)
 *     SetAppCompatFlags @ 0x1C009CB70 (SetAppCompatFlags.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00A52B0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserSetInformationThread @ 0x1C00A6240 (NtUserSetInformationThread.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00AE7A0 (NtUserRegisterRawInputDevices.c)
 *     DwmAsyncUpdateVisRgn @ 0x1C00B4974 (DwmAsyncUpdateVisRgn.c)
 *     vSpDynamicModeChange @ 0x1C00B7500 (vSpDynamicModeChange.c)
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00B7858 (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00C2B30 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C00C8610 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C00C86F8 (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C00CFA90 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     EditionCreateWindowStationEntryPoint @ 0x1C00D1B20 (EditionCreateWindowStationEntryPoint.c)
 *     RenderNineGridInternal @ 0x1C00D8290 (RenderNineGridInternal.c)
 *     DNG_DrawRow @ 0x1C00D8FF0 (DNG_DrawRow.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00D936C (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00DA830 (-vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00DABB8 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 *     InputAABFDATAToAA24 @ 0x1C00DB790 (InputAABFDATAToAA24.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00DBBF8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C00DDF8C (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00DEB90 (-vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiHfontCreate @ 0x1C00DF210 (NtGdiHfontCreate.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00E05C0 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00E2784 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     NtGdiTransformPoints @ 0x1C00E2E50 (NtGdiTransformPoints.c)
 *     NtGdiPolyTextOutW @ 0x1C00E31B0 (NtGdiPolyTextOutW.c)
 *     ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00E4030 (-vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00E6F5C (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     TextCopy @ 0x1C00E74B4 (TextCopy.c)
 *     NtGdiDrawStream @ 0x1C00E7520 (NtGdiDrawStream.c)
 *     ConvertToAndFromWideChar @ 0x1C00E7F50 (ConvertToAndFromWideChar.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00E8224 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C00EA1C0 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C00EA2A8 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     NtGdiGetCharABCWidthsW @ 0x1C00EA7C0 (NtGdiGetCharABCWidthsW.c)
 *     ReferenceClass @ 0x1C00F8130 (ReferenceClass.c)
 *     NtUserSystemParametersInfoForDpi @ 0x1C00F8B10 (NtUserSystemParametersInfoForDpi.c)
 *     NtGdiDoPalette @ 0x1C00FB0D0 (NtGdiDoPalette.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x1C00FC530 (-CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z.c)
 *     NtUserQueryInformationThread @ 0x1C00FC750 (NtUserQueryInformationThread.c)
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00FF534 (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0100A40 (NtGdiGetGlyphIndicesWInternal.c)
 *     _BuildNameList @ 0x1C0104D40 (_BuildNameList.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1C0105550 (NtGdiGetFontUnicodeRanges.c)
 *     vProcessEntry @ 0x1C0105DF8 (vProcessEntry.c)
 *     _CreateAcceleratorTable @ 0x1C0107B34 (_CreateAcceleratorTable.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0108450 (NtUserfnINDEVICECHANGE.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C0109670 (NtUserfnPOWERBROADCAST.c)
 *     ?CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z @ 0x1C010A4E0 (-CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C010AEE0 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C010F37C (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C010FB68 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     AllocateUnicodeString @ 0x1C01105E4 (AllocateUnicodeString.c)
 *     ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x1C0112450 (-FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0113118 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 *     NtUserSetGestureConfig @ 0x1C0116700 (NtUserSetGestureConfig.c)
 *     NtGdiGetProcessSessionFonts @ 0x1C0117190 (NtGdiGetProcessSessionFonts.c)
 *     _SetWindowStationUser @ 0x1C011932C (_SetWindowStationUser.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C011B7B8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C011C884 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     PREALLOCMEM2 @ 0x1C011D46C (PREALLOCMEM2.c)
 *     InitializeFUDI @ 0x1C011ECDC (InitializeFUDI.c)
 *     ?vRop2FunctionA@@YAXPEAK00K@Z @ 0x1C01240C0 (-vRop2FunctionA@@YAXPEAK00K@Z.c)
 *     ?vRop2FunctionC@@YAXPEAK00K@Z @ 0x1C01240E0 (-vRop2FunctionC@@YAXPEAK00K@Z.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0124330 (NtGdiGetLinkedUFIs.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0125760 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C01260D0 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0127650 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C0129C10 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0129FAC (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C012A154 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1C012A3D4 (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C012A700 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C012A800 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiStartDoc @ 0x1C012CFA0 (NtGdiStartDoc.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C012D464 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     NtGdiGetKerningPairs @ 0x1C01300F0 (NtGdiGetKerningPairs.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C01353A8 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C013A420 (-vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiGetCharWidthW @ 0x1C013B640 (NtGdiGetCharWidthW.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C013BB60 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 *     NtGdiGetUFI @ 0x1C013C160 (NtGdiGetUFI.c)
 *     GreGetUFI @ 0x1C013C2B0 (GreGetUFI.c)
 *     CreateStandardMonoPattern @ 0x1C013C9D8 (CreateStandardMonoPattern.c)
 *     GetCachedSMP @ 0x1C013D0AC (GetCachedSMP.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C013F8C4 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     FixupColorScan @ 0x1C0140044 (FixupColorScan.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0141050 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C0141670 (-vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     NtGdiQueryFonts @ 0x1C0142850 (NtGdiQueryFonts.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0143064 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C01431C4 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     _ConvertMemHandle @ 0x1C014641C (_ConvertMemHandle.c)
 *     ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C0146CB0 (-vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     GreRealizePalette @ 0x1C01470CC (GreRealizePalette.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C014A0E0 (-vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiExtCreatePen @ 0x1C014C760 (NtGdiExtCreatePen.c)
 *     NtUserCreateLocalMemHandle @ 0x1C014D9F0 (NtUserCreateLocalMemHandle.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C014E298 (DwmSyncGetCompositionAttribute.c)
 *     NtGdiCreateDIBBrush @ 0x1C014E3E0 (NtGdiCreateDIBBrush.c)
 *     GreCreateDIBBrush @ 0x1C014E4E8 (GreCreateDIBBrush.c)
 *     ExpandHTPatX @ 0x1C0150468 (ExpandHTPatX.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 *     xxxValidateClassAndSize @ 0x1C015A2B0 (xxxValidateClassAndSize.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1C015F418 (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C016CB60 (NtUserHwndQueryRedirectionInfo.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C016FEF6 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C01CB4F4 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C01CB670 (-RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D0B1C (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D26C0 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01D587C (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01D87F0 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01D89F0 (-DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 *     GetTaskName @ 0x1C01D9994 (GetTaskName.c)
 *     ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x1C01DD910 (-ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01F22C0 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F2C90 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureConfig @ 0x1C01F4080 (NtUserGetGestureConfig.c)
 *     NtUserGetGestureExtArgs @ 0x1C01F4390 (NtUserGetGestureExtArgs.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01F4DD0 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C01F5BD0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetRawInputBuffer @ 0x1C01F6020 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C01F6390 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C01F6A40 (NtUserGetTouchInputInfo.c)
 *     NtUserInjectTouchInput @ 0x1C01F8300 (NtUserInjectTouchInput.c)
 *     NtUserMagGetContextInformation @ 0x1C01F9400 (NtUserMagGetContextInformation.c)
 *     NtUserProcessInkFeedbackCommand @ 0x1C01FB2C0 (NtUserProcessInkFeedbackCommand.c)
 *     NtUserResolveDesktopForWOW @ 0x1C01FC160 (NtUserResolveDesktopForWOW.c)
 *     NtUserSetCalibrationData @ 0x1C01FC760 (NtUserSetCalibrationData.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0200530 (NtUserUserHandleGrantAccess.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C0201B80 (NtUserfnINLPHLPSTRUCT.c)
 *     ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1C0208730 (-_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z.c)
 *     ?_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z @ 0x1C02089E8 (-_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C0208D68 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C0219558 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     RemoteShadowCleanup @ 0x1C021FD84 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C021FF90 (RemoteShadowStart.c)
 *     AllocGestureInfo @ 0x1C0221000 (AllocGestureInfo.c)
 *     SfnIMECONTROL @ 0x1C0223470 (SfnIMECONTROL.c)
 *     SfnPOUTLPINT @ 0x1C0229B30 (SfnPOUTLPINT.c)
 *     xxxClientCopyDDEIn1 @ 0x1C022BA1C (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C022BEA8 (xxxClientCopyDDEOut1.c)
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0243848 (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0255790 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 *     CreateNewEventEntry @ 0x1C0259980 (CreateNewEventEntry.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025AEA4 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     AddBGRMapCache @ 0x1C025E564 (AddBGRMapCache.c)
 *     CacheRGBToXYZ @ 0x1C025E6A4 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C025E794 (ComputeBGRMappingTable.c)
 *     FindBGRMapCache @ 0x1C025F284 (FindBGRMapCache.c)
 *     TrimBGRMapCache @ 0x1C025F768 (TrimBGRMapCache.c)
 *     CreateHalftoneBrushPat @ 0x1C025F874 (CreateHalftoneBrushPat.c)
 *     BltMask_CY @ 0x1C0263640 (BltMask_CY.c)
 *     ShrinkMask_CY @ 0x1C0263EA0 (ShrinkMask_CY.c)
 *     ExpandDIB_CY @ 0x1C0265500 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0265E70 (ExpandDIB_CY_ExpCX.c)
 *     FastExpAA_CY @ 0x1C0266D60 (FastExpAA_CY.c)
 *     GrayExpandDIB_CY @ 0x1C02676E0 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0267E80 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0268960 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C02695C0 (ShrinkDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1C0269D60 (ShrinkDIB_CY_SrkCX.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C026EB18 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     EngHangNotification @ 0x1C0271A70 (EngHangNotification.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027936C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02797A8 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreGetUFIPathname @ 0x1C027A6E4 (GreGetUFIPathname.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C027AA50 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiSetLinkedUFIs @ 0x1C027AF30 (NtGdiSetLinkedUFIs.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C0286984 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     cMapRemoteFonts @ 0x1C028769C (cMapRemoteFonts.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0288570 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     NtGdiPlgBlt @ 0x1C028BE70 (NtGdiPlgBlt.c)
 *     FONTOBJ_vGetInfo @ 0x1C0291310 (FONTOBJ_vGetInfo.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C02914F0 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     GreGetCannonicalName @ 0x1C02920DC (GreGetCannonicalName.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C0297690 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0297860 (NtGdiGetEudcTimeStampEx.c)
 *     NtGdiGetStringBitmapW @ 0x1C02979C0 (NtGdiGetStringBitmapW.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02998C8 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0299B94 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029C55C (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?ReAllocate@?$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z @ 0x1C029D0F8 (-ReAllocate@-$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029D18C (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C02A7924 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C02A7A70 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C02A8170 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A8770 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02A9A10 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02A9BD0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02AA160 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02AB508 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C02ABC38 (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     ?ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z @ 0x1C02AC728 (-ProbeAndReadDesignVector@@YAKPEAUtagDESIGNVECTOR@@0@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C02AC7A0 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiDescribePixelFormat @ 0x1C02ACB10 (NtGdiDescribePixelFormat.c)
 *     NtGdiDrawEscape @ 0x1C02ACBC0 (NtGdiDrawEscape.c)
 *     NtGdiGetCharacterPlacementW @ 0x1C02ACDC0 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x1C02AD440 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C02AD620 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiGetRasterizerCaps @ 0x1C02AD8E0 (NtGdiGetRasterizerCaps.c)
 *     NtGdiGetTextExtent @ 0x1C02AD990 (NtGdiGetTextExtent.c)
 *     NtGdiGetUFIPathname @ 0x1C02ADB30 (NtGdiGetUFIPathname.c)
 *     NtGdiMakeFontDir @ 0x1C02ADFA0 (NtGdiMakeFontDir.c)
 *     NtGdiScaleValues @ 0x1C02AE610 (NtGdiScaleValues.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02B05CC (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02B079C (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     NtGdiEngGradientFill @ 0x1C02B18D0 (NtGdiEngGradientFill.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B30C0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02B3680 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02B37F0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02B3D60 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiResizePalette @ 0x1C02B6830 (NtGdiResizePalette.c)
 *     NtGdiCreateServerMetaFile @ 0x1C02B6E70 (NtGdiCreateServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B6FB0 (NtGdiGetServerMetaFileBits.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C02B79D4 (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C02B7AA0 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C02B80C0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B9ED0 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     NtGdiGetFontFileData @ 0x1C02BA5F0 (NtGdiGetFontFileData.c)
 *     GreGetCharacterPlacementW @ 0x1C02BAA8C (GreGetCharacterPlacementW.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BBF08 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02C2C10 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02C30E0 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02C3400 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02C4F60 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02C8020 (-vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02C9330 (-vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C02C9630 (-vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?WriteAbsolute8@@YAHPEBEPEAEH0@Z @ 0x1C02CAA7C (-WriteAbsolute8@@YAHPEBEPEAEH0@Z.c)
 *     ?WriteAbsolute4@@YAHPEBEPEAEH0@Z @ 0x1C02CBDD0 (-WriteAbsolute4@@YAHPEBEPEAEH0@Z.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CE4E0 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CE5DC (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CFBB0 (-vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02CFDD0 (-vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02D00B0 (-vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02D02D0 (-vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?BltLnkReadPat4@@YAXPEAEKPEBEKKKK@Z @ 0x1C02DACF0 (-BltLnkReadPat4@@YAXPEAEKPEBEKKKK@Z.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x1C02DB8EC (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     ?CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z @ 0x1C02DC090 (-CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02DC100 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02DC230 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DC360 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DC480 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02DC6E8 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     WppTraceCallback @ 0x1C0378310 (WppTraceCallback.c)
 *     bInitStockFontsInternal @ 0x1C0390308 (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C0390820 (bInitOneStockFont.c)
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

/*
 * XREFs of PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4
 * Callers:
 *     NtUserGetKeyState @ 0x1C002CDC0 (NtUserGetKeyState.c)
 *     NtUserGetDpiForMonitor @ 0x1C002FE40 (NtUserGetDpiForMonitor.c)
 *     NtUserGetKeyboardState @ 0x1C0030120 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1C003CD30 (NtUserGetAsyncKeyState.c)
 *     NtUserMapVirtualKeyEx @ 0x1C003F300 (NtUserMapVirtualKeyEx.c)
 *     NtUserVkKeyScanEx @ 0x1C0040AB0 (NtUserVkKeyScanEx.c)
 *     NtUserGetHDevName @ 0x1C0046FB0 (NtUserGetHDevName.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C004FCF0 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetKeyboardLayout @ 0x1C004FE30 (NtUserGetKeyboardLayout.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C0059368 (UserGetDesktopIdForCurrentThread.c)
 *     NtUserEnumDisplayMonitors @ 0x1C006E560 (NtUserEnumDisplayMonitors.c)
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C006F5C4 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C006FF40 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x1C0070110 (NtUserQueryDisplayConfig.c)
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     ?NtUserEnumDisplayDevicesShared@@YAJPEAU_UNICODE_STRING@@KPEAU_DISPLAY_DEVICEW@@K@Z @ 0x1C007213C (-NtUserEnumDisplayDevicesShared@@YAJPEAU_UNICODE_STRING@@KPEAU_DISPLAY_DEVICEW@@K@Z.c)
 *     ReferenceDwmApiPort @ 0x1C0078C50 (ReferenceDwmApiPort.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0079180 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C009D580 (NtMITGetCursorUpdateHandle.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1C009D790 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     NtUserCheckProcessSession @ 0x1C009DA90 (NtUserCheckProcessSession.c)
 *     UserEnterUserCritSecShared @ 0x1C00A2AA0 (UserEnterUserCritSecShared.c)
 *     DrvGetCurrentDpiInfo @ 0x1C00A7004 (DrvGetCurrentDpiInfo.c)
 *     UserReleaseDC @ 0x1C00AC8F0 (UserReleaseDC.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C00B1C60 (NtUserGetUniformSpaceMapping.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00B7A60 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00B9F10 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserGetPointerFrameTimes @ 0x1C00E5C60 (NtUserGetPointerFrameTimes.c)
 *     NtMITSetLastInputRecipient @ 0x1C0155BB0 (NtMITSetLastInputRecipient.c)
 *     NtUserGetClipCursor @ 0x1C0159140 (NtUserGetClipCursor.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C01592E0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetKeyboardType @ 0x1C0159CA0 (NtUserGetKeyboardType.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1C0159CD0 (NtUserGetMinuserIdForBaseWindow.c)
 *     NtUserGetPointerCursorId @ 0x1C0159D40 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerDeviceInputSpace @ 0x1C0159E20 (NtUserGetPointerDeviceInputSpace.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0159F00 (NtUserGetPointerDeviceOrientation.c)
 *     NtUserGetPointerInfoList @ 0x1C0159FF0 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x1C015A440 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C015A640 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C015A920 (NtUserGetRawPointerDeviceData.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C015B010 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C015F6F0 (NtUserIsMouseInPointerEnabled.c)
 *     UserGetWindowThreadProcessId @ 0x1C0166F24 (UserGetWindowThreadProcessId.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C0168690 (W32pLkmdDataCollectionCallback.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C01765A0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 *     NtHWCursorUpdatePointer @ 0x1C0176C30 (NtHWCursorUpdatePointer.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE030 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EF2E0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0029830 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C002A200 (IsEtwUserCritEnabled.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@W4CritType@012@@Z @ 0x1C002A404 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@W4CritType@012@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal()
{
  __int64 v0; // rbx
  __int64 *v1; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF

  InputTraceLogging::Perf::CritAcquire::CritAcquire(v4, 0LL);
  v0 = 0LL;
  if ( (unsigned int)IsEtwUserCritEnabled() )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v1 = (__int64 *)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
  EtwTraceAcquiredSharedUserCrit();
  if ( v1 )
    v0 = *v1;
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v4);
  return v0;
}

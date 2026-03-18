/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC
 * Callers:
 *     IsKeyboardIVEnabled @ 0x1C0006EF4 (IsKeyboardIVEnabled.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ShouldRunShared @ 0x1C0038570 (ShouldRunShared.c)
 *     IsPTPIVEnabled @ 0x1C0042570 (IsPTPIVEnabled.c)
 *     RIMDeviceClassNotify @ 0x1C0047E70 (RIMDeviceClassNotify.c)
 *     RIMOpenDev @ 0x1C004AC3C (RIMOpenDev.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004DD00 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004DD80 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004E1A0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ShouldEnableInputVirtualization @ 0x1C0053D88 (ShouldEnableInputVirtualization.c)
 *     Win32kBaseUserInitialize @ 0x1C005AFC0 (Win32kBaseUserInitialize.c)
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     NtUserEnumDisplaySettings @ 0x1C006F4E0 (NtUserEnumDisplaySettings.c)
 *     DrvEnumDisplaySettings @ 0x1C006F640 (DrvEnumDisplaySettings.c)
 *     NtUserEnumDisplayDevices @ 0x1C00720C0 (NtUserEnumDisplayDevices.c)
 *     DrvEnumDisplayDevices @ 0x1C00721C0 (DrvEnumDisplayDevices.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvBuildDevmodeList @ 0x1C0079EE0 (DrvBuildDevmodeList.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C00AFDCC (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B6868 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BD3E0 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?Feature_1827749177__private_IsEnabled@@YAHXZ @ 0x1C00D8C50 (-Feature_1827749177__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_3190902075__private_IsEnabled@@YAHXZ @ 0x1C00D8D30 (-Feature_3190902075__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_2990973245__private_IsEnabled@@YAHXZ @ 0x1C00D93B8 (-Feature_2990973245__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C00D9428 (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_1592607032__private_IsEnabled@@YAHXZ @ 0x1C00D9644 (-Feature_1592607032__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_GdiTelemetry_37785925__private_IsEnabled@@YAHXZ @ 0x1C00DA7F4 (-Feature_Servicing_GdiTelemetry_37785925__private_IsEnabled@@YAHXZ.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C016FCAC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMDeviceNotify @ 0x1C01A0D30 (RIMDeviceNotify.c)
 *     ?RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInputManagerDeviceObject@@PEAXPEAU_IVRIMDEV@@KPEAU_GUID@@4PEAU_UNICODE_STRING@@KW4tagASYNCPNP_TYPE@@@Z @ 0x1C01A9C34 (-RIMAllocateAsyncPnpWorkItem@@YAPEAU_RIMAsyncPnpWorkItem@@PEAURawInputManagerObject@@PEAURawInpu.c)
 *     RIMFreeAsyncPnpWorkItem @ 0x1C01AA66C (RIMFreeAsyncPnpWorkItem.c)
 *     RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01AB3DC (RIMVirtQueueDeviceClassNotifyAsyncWorkItem.c)
 *     ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C01B7060 (-Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01CD644 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C01D3A34 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01D54BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DC8C0 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE670 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandlePnpOtherPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE8C0 (-ivHandlePnpOtherPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE9D0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     IsPenIVEnabled @ 0x1C01F0D34 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01F0DB4 (IsTouchIVEnabled.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01F6448 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C01F6DB0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C003869C (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        int a7)
{
  unsigned int v7; // edi
  int v9; // ecx

  v7 = a2;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v9 = a6 == 0 ? 4 : 0;
        break;
      case 2:
        v9 = a6 != 0 ? 1 : 5;
        break;
      case 3:
        v9 = a6 != 0 ? 2 : 6;
        break;
      case 4:
        v9 = a6 != 0 ? 3 : 7;
        break;
      case 5:
        v9 = a6 != 0 ? 8 : 10;
        break;
      case 6:
        v9 = a6 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a7 - 100) > 0x31u )
          v9 = 255;
        else
          v9 = (unsigned __int8)(a7 - 100) + (a6 != 0 ? 100 : 150);
        break;
    }
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, a2, a3, a4, v9) )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(v7, a5, 0LL, a6, (const enum wil_ReportingKind *)&a7, 0LL, 0, 1uLL);
    }
  }
}

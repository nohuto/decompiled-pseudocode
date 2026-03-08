/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024B30
 * Callers:
 *     Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage @ 0x1C0024478 (Feature_DxDb_ExpandedPublishing__private_ReportDeviceUsage.c)
 *     Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage @ 0x1C00245D8 (Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage.c)
 *     wil_details_IsEnabledFallback @ 0x1C0024F58 (wil_details_IsEnabledFallback.c)
 *     Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage @ 0x1C0025DE4 (Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage.c)
 *     Feature_DriverBlackboxData__private_ReportDeviceUsage @ 0x1C0025E8C (Feature_DriverBlackboxData__private_ReportDeviceUsage.c)
 *     Feature_DriverWhiteboxData__private_ReportDeviceUsage @ 0x1C0025EF0 (Feature_DriverWhiteboxData__private_ReportDeviceUsage.c)
 *     Feature_StaticDWMHdrPixelFormat__private_ReportDeviceUsage @ 0x1C0025F54 (Feature_StaticDWMHdrPixelFormat__private_ReportDeviceUsage.c)
 *     Feature_DP_AUX_V2__private_ReportDeviceUsage @ 0x1C0025FB8 (Feature_DP_AUX_V2__private_ReportDeviceUsage.c)
 *     Feature_DWMHdrPixelFormatEnforced__private_ReportDeviceUsage @ 0x1C002601C (Feature_DWMHdrPixelFormatEnforced__private_ReportDeviceUsage.c)
 *     Feature_CopyDriverToSystem32__private_ReportDeviceUsage @ 0x1C00260C8 (Feature_CopyDriverToSystem32__private_ReportDeviceUsage.c)
 *     Feature_NonDXKryptonGpuSupport__private_ReportDeviceUsage @ 0x1C002612C (Feature_NonDXKryptonGpuSupport__private_ReportDeviceUsage.c)
 *     Feature_EnableHostResourceSharing__private_ReportDeviceUsage @ 0x1C00263D8 (Feature_EnableHostResourceSharing__private_ReportDeviceUsage.c)
 *     Feature_RapidHpdDeferRecalc__private_ReportDeviceUsage @ 0x1C0026458 (Feature_RapidHpdDeferRecalc__private_ReportDeviceUsage.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00264E4 (Feature_Vail__private_ReportDeviceUsage.c)
 *     Feature_Vail_iFLIP__private_ReportDeviceUsage @ 0x1C0026548 (Feature_Vail_iFLIP__private_ReportDeviceUsage.c)
 *     Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage @ 0x1C00265AC (Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage.c)
 *     Feature_AsyncVmBusMessages__private_ReportDeviceUsage @ 0x1C0026610 (Feature_AsyncVmBusMessages__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Opm_Projection__private_ReportDeviceUsage @ 0x1C0026674 (Feature_VAIL_Opm_Projection__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage @ 0x1C00266D8 (Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage.c)
 *     Feature_KsrDisplay__private_ReportDeviceUsage @ 0x1C002673C (Feature_KsrDisplay__private_ReportDeviceUsage.c)
 *     Feature_DmaRemapping__private_ReportDeviceUsage @ 0x1C00267A0 (Feature_DmaRemapping__private_ReportDeviceUsage.c)
 *     Feature_LegacyHPDFiltering__private_ReportDeviceUsage @ 0x1C0026804 (Feature_LegacyHPDFiltering__private_ReportDeviceUsage.c)
 *     Feature_OnlyHandlingLidSwitchInBroker__private_ReportDeviceUsage @ 0x1C0026868 (Feature_OnlyHandlingLidSwitchInBroker__private_ReportDeviceUsage.c)
 *     Feature_VirtualRefreshRate__private_ReportDeviceUsage @ 0x1C00269AC (Feature_VirtualRefreshRate__private_ReportDeviceUsage.c)
 *     Feature_PreferDisplayIdOverEdid__private_ReportDeviceUsage @ 0x1C0026A64 (Feature_PreferDisplayIdOverEdid__private_ReportDeviceUsage.c)
 *     Feature_SupportDisplayId2InsideEdid__private_ReportDeviceUsage @ 0x1C0026AC8 (Feature_SupportDisplayId2InsideEdid__private_ReportDeviceUsage.c)
 *     Feature_AutoColorManagementEnabled__private_ReportDeviceUsage @ 0x1C0026B2C (Feature_AutoColorManagementEnabled__private_ReportDeviceUsage.c)
 *     Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage @ 0x1C0026B90 (Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage.c)
 *     Feature_DolbyVision_Default_On__private_ReportDeviceUsage @ 0x1C0026BF4 (Feature_DolbyVision_Default_On__private_ReportDeviceUsage.c)
 *     Feature_WCG_Skip_WideColorSpace_Check__private_ReportDeviceUsage @ 0x1C0026C58 (Feature_WCG_Skip_WideColorSpace_Check__private_ReportDeviceUsage.c)
 *     Feature_MipiDsi2__private_ReportDeviceUsage @ 0x1C0026CBC (Feature_MipiDsi2__private_ReportDeviceUsage.c)
 *     Feature_IommuInterfaceV2_Smm__private_ReportDeviceUsage @ 0x1C0026D74 (Feature_IommuInterfaceV2_Smm__private_ReportDeviceUsage.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F48CC (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0024BB8 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1C0024FEC (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  __int64 v6; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2 & 1;
  v5 = wil_details_MapReportingKind((unsigned int)a3, a2 & 1, a3, a2);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     v6,
                                                                                                     v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v8 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v4, &v9, 0LL, v8, 1LL);
    }
  }
  return result;
}

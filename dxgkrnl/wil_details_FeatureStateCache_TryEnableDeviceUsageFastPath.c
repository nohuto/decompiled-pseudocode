/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024DA8
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
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v5 | v6, v6);
    }
    while ( v7 != v6 );
  }
}

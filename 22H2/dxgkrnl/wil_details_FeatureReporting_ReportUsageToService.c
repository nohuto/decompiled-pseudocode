/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024F04
 * Callers:
 *     Feature_MockDriverValidation__private_ReportDeviceUsage @ 0x1C0024974 (Feature_MockDriverValidation__private_ReportDeviceUsage.c)
 *     Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage @ 0x1C00249D8 (Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage.c)
 *     Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage @ 0x1C0024A3C (Feature_SupportComputeOnlyAdapters__private_ReportDeviceUsage.c)
 *     wil_details_IsEnabledFallback @ 0x1C00259F4 (wil_details_IsEnabledFallback.c)
 *     Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage @ 0x1C0025C44 (Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage.c)
 *     Feature_EnableGpuPVFor2_4Drivers__private_ReportDeviceUsage @ 0x1C00265EC (Feature_EnableGpuPVFor2_4Drivers__private_ReportDeviceUsage.c)
 *     Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage @ 0x1C0026650 (Feature_IoMmuIsolationForGPUP__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage @ 0x1C00267E8 (Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Opm_Projection__private_ReportDeviceUsage @ 0x1C002684C (Feature_VAIL_Opm_Projection__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage @ 0x1C00268B0 (Feature_VAIL_Vsync_Projection__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage @ 0x1C0027760 (Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage.c)
 *     Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage @ 0x1C00277C4 (Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage.c)
 *     Feature_CopyDriverStore__private_ReportDeviceUsage @ 0x1C0027850 (Feature_CopyDriverStore__private_ReportDeviceUsage.c)
 *     Feature_CopyDriverToSystem32__private_ReportDeviceUsage @ 0x1C00278B4 (Feature_CopyDriverToSystem32__private_ReportDeviceUsage.c)
 *     Feature_NonDXKryptonGpuSupport__private_ReportDeviceUsage @ 0x1C0027918 (Feature_NonDXKryptonGpuSupport__private_ReportDeviceUsage.c)
 *     Feature_HoldAdapterLockEscape__private_ReportDeviceUsage @ 0x1C002797C (Feature_HoldAdapterLockEscape__private_ReportDeviceUsage.c)
 *     Feature_EnableHostResourceSharing__private_ReportDeviceUsage @ 0x1C0027C58 (Feature_EnableHostResourceSharing__private_ReportDeviceUsage.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027EFC (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     Feature_Dwm_Ownership_Leak_Bugchek__private_ReportDeviceUsage @ 0x1C0027F60 (Feature_Dwm_Ownership_Leak_Bugchek__private_ReportDeviceUsage.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C002808C (Feature_Vail__private_ReportDeviceUsage.c)
 *     Feature_Vail_iFLIP__private_ReportDeviceUsage @ 0x1C00280F0 (Feature_Vail_iFLIP__private_ReportDeviceUsage.c)
 *     Feature_DriverBlackboxData__private_ReportDeviceUsage @ 0x1C00281A4 (Feature_DriverBlackboxData__private_ReportDeviceUsage.c)
 *     Feature_DriverWhiteboxData__private_ReportDeviceUsage @ 0x1C0028208 (Feature_DriverWhiteboxData__private_ReportDeviceUsage.c)
 *     Feature_TrackedWorkloadDirectDeadline__private_ReportDeviceUsage @ 0x1C002826C (Feature_TrackedWorkloadDirectDeadline__private_ReportDeviceUsage.c)
 *     Feature_TrackedWorkload__private_ReportDeviceUsage @ 0x1C00282D0 (Feature_TrackedWorkload__private_ReportDeviceUsage.c)
 *     Feature_DP_AUX_V2__private_ReportDeviceUsage @ 0x1C0028388 (Feature_DP_AUX_V2__private_ReportDeviceUsage.c)
 *     Feature_GpuHardwareScheduling__private_ReportDeviceUsage @ 0x1C00283EC (Feature_GpuHardwareScheduling__private_ReportDeviceUsage.c)
 *     Feature_KsrDisplay__private_ReportDeviceUsage @ 0x1C0028450 (Feature_KsrDisplay__private_ReportDeviceUsage.c)
 *     Feature_ReportWddm2_6ToDriver_Amd__private_ReportDeviceUsage @ 0x1C00284B4 (Feature_ReportWddm2_6ToDriver_Amd__private_ReportDeviceUsage.c)
 *     Feature_ReportWddm2_6ToDriver_Intel__private_ReportDeviceUsage @ 0x1C0028518 (Feature_ReportWddm2_6ToDriver_Intel__private_ReportDeviceUsage.c)
 *     Feature_ReportWddm2_6ToDriver_Nvidia__private_ReportDeviceUsage @ 0x1C002857C (Feature_ReportWddm2_6ToDriver_Nvidia__private_ReportDeviceUsage.c)
 *     Feature_HPDWakeFiltering__private_ReportDeviceUsage @ 0x1C00285E0 (Feature_HPDWakeFiltering__private_ReportDeviceUsage.c)
 *     Feature_LegacyHPDFiltering__private_ReportDeviceUsage @ 0x1C0028644 (Feature_LegacyHPDFiltering__private_ReportDeviceUsage.c)
 *     Feature_Brightness3dxgkrnl__private_ReportDeviceUsage @ 0x1C00286A8 (Feature_Brightness3dxgkrnl__private_ReportDeviceUsage.c)
 *     Feature_ProductizeSpecializedDisplays__private_ReportDeviceUsage @ 0x1C0028870 (Feature_ProductizeSpecializedDisplays__private_ReportDeviceUsage.c)
 *     Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage @ 0x1C00288D4 (Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage.c)
 *     Feature_DolbyVision_Default_On__private_ReportDeviceUsage @ 0x1C0028938 (Feature_DolbyVision_Default_On__private_ReportDeviceUsage.c)
 *     Feature_MipiDsi2__private_ReportDeviceUsage @ 0x1C002899C (Feature_MipiDsi2__private_ReportDeviceUsage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0024F8C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1C002534C (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
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

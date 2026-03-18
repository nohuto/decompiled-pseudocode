/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x14022FBC0
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x14040F864 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage @ 0x14040F8CC (Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x14040F934 (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x14040F99C (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage @ 0x14040FA04 (Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage.c)
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040FA6C (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 *     Feature_PerProcessorClockTick__private_ReportDeviceUsage @ 0x14040FC6C (Feature_PerProcessorClockTick__private_ReportDeviceUsage.c)
 *     Feature_SoftParkingElections__private_ReportDeviceUsage @ 0x1404105AC (Feature_SoftParkingElections__private_ReportDeviceUsage.c)
 *     Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage @ 0x140410B04 (Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140410BB4 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage @ 0x140410C64 (Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage.c)
 *     Feature_HgsPlusSupportRequired__private_ReportDeviceUsage @ 0x140410CCC (Feature_HgsPlusSupportRequired__private_ReportDeviceUsage.c)
 *     Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_ReportDeviceUsage @ 0x140416320 (Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_ReportDeviceUsage.c)
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x1404190C8 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage @ 0x140419970 (Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage.c)
 *     Feature_XFG_User__private_ReportDeviceUsage @ 0x140419B20 (Feature_XFG_User__private_ReportDeviceUsage.c)
 *     Feature_IMDSLicensingIntegration__private_ReportDeviceUsage @ 0x140419B88 (Feature_IMDSLicensingIntegration__private_ReportDeviceUsage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14022FCF0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  char v4; // r10
  unsigned int v5; // ebx
  int v8; // r8d
  __int64 v9; // r8
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v4 = a3;
  v5 = a2 & 1;
  if ( a3 <= 6 )
    __asm { jmp     r8 }
  if ( (unsigned __int8)a3 < 0x64u || (unsigned __int8)a3 >= 0x96u )
  {
    v9 = 255LL;
  }
  else
  {
    v8 = 100;
    if ( (a2 & 1) == 0 )
      v8 = 150;
    v9 = (unsigned int)(unsigned __int8)(v4 - 100) + v8;
  }
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     v9);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v5, &v11, 0LL, 0, a4);
  }
  return result;
}

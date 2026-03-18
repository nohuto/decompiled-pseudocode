/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C000C95C
 * Callers:
 *     Feature_USB4PowerImprovements__private_IsEnabled @ 0x1C000CC4C (Feature_USB4PowerImprovements__private_IsEnabled.c)
 *     Feature_DropPowerReferenceOnLPE__private_IsEnabled @ 0x1C000CCD4 (Feature_DropPowerReferenceOnLPE__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C000C768 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v9; // [rsp+30h] [rbp-28h]

  a7 = 3;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     a6 != 0 ? 2 : 6);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v9 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, v9, 1LL);
    }
  }
  return result;
}

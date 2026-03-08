/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C0003A6C
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x1C0003E74 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0003AE8 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1C0003F04 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004200 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v3 = a2 & 1;
  v4 = wil_details_MapReportingKind((unsigned int)a3, a2 & 1, a3, a2);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     v5,
                                                                                                     v6,
                                                                                                     v4);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v8 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(48310951LL, &Feature_Servicing_Huawei22H2BluescreenAfterSleep_logged_traits, 0LL, v3, &v9, 0LL, v8, 1LL);
    }
  }
  return result;
}

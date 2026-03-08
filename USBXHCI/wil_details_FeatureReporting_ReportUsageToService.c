/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C001F210
 * Callers:
 *     Feature_SplitTransactionHSIIWorkaround__private_ReportDeviceUsage @ 0x1C001EE54 (Feature_SplitTransactionHSIIWorkaround__private_ReportDeviceUsage.c)
 *     wil_details_IsEnabledFallback @ 0x1C001F638 (wil_details_IsEnabledFallback.c)
 *     Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage @ 0x1C001F91C (Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C001F298 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1C001F6CC (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
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

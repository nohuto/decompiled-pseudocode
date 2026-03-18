/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C00C55C8
 * Callers:
 *     AllocateW32Process @ 0x1C00C54A0 (AllocateW32Process.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C00C5614 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v7; // [rsp+20h] [rbp-38h]
  char v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = 3;
  v7 = a6 != 0 ? 2 : 6;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     v7,
                                                                                                     a2,
                                                                                                     a3,
                                                                                                     a4,
                                                                                                     v7);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v8 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(31625023LL, &Feature_Win32kBugcheckOnFailedBCryptgenRandom_logged_traits, 0LL, a6, &v9, 0LL, v8, 1LL);
    }
  }
  return result;
}

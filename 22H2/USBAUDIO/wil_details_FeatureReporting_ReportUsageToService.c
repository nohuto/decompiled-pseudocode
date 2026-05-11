/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1C0002748
 * Callers:
 *     Feature_Servicing_AudioRegressionFix__private_IsEnabled @ 0x1C0003138 (Feature_Servicing_AudioRegressionFix__private_IsEnabled.c)
 * Callees:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C0002478 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     __security_check_cookie @ 0x1C0011C50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        int a1,
        __int64 a2,
        unsigned int a3,
        int a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  int v5; // r14d
  unsigned __int8 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v12; // [rsp+50h] [rbp-19h] BYREF
  int v13; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v15; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+88h] [rbp+1Fh]

  v13 = a4;
  v5 = a2;
  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        v8 = a3 == 0 ? 4 : 0;
        goto LABEL_17;
      case 2:
        v8 = a3 != 0 ? 1 : 5;
        goto LABEL_17;
      case 3:
        v8 = a3 != 0 ? 2 : 6;
        goto LABEL_17;
      case 4:
        v8 = a3 != 0 ? 3 : 7;
        goto LABEL_17;
      case 5:
        v8 = a3 != 0 ? 8 : 10;
        goto LABEL_17;
      case 6:
        v8 = a3 != 0 ? 9 : 11;
        goto LABEL_17;
    }
    v7 = a4 - 100;
    if ( v7 <= 0x31u )
    {
      v8 = v7 + (a3 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v8 = 255;
LABEL_17:
  v9 = wil_details_FeatureReporting_RecordUsageInCache((__int64)v14, a2, v8);
  v15 = *(_OWORD *)v9;
  v10 = *(_QWORD *)(v9 + 16);
  result = g_wil_details_recordFeatureUsage;
  v16 = v10;
  if ( g_wil_details_recordFeatureUsage )
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_recordFeatureUsage(
                                                                               42591093LL,
                                                                               v8,
                                                                               1LL,
                                                                               &Feature_Servicing_AudioRegressionFix__private_reporting,
                                                                               &v15);
  if ( a1 && v8 != 254 )
  {
    v12 = 42591093LL;
    WORD2(v12) = v8;
    if ( v5 )
      HIWORD(v12) |= 1u;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlNotifyFeatureUsage(&v12);
  }
  if ( !(_DWORD)v16 )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(
                                                                               42591093LL,
                                                                               &Feature_Servicing_AudioRegressionFix_logged_traits,
                                                                               0LL,
                                                                               a3,
                                                                               &v13,
                                                                               0LL,
                                                                               0,
                                                                               1LL);
  }
  return result;
}

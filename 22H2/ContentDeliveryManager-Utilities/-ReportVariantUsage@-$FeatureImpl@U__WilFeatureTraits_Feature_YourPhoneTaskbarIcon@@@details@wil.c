/*
 * XREFs of ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_K@Z @ 0x18001893C
 * Callers:
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@3@_N@Z @ 0x1800188C8 (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@detai.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000CC94 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180018C44 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportVariantUsage(
        int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int64 a5))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  int v5; // esi
  unsigned int v7; // r8d
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v12; // ebx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  _BYTE v15[16]; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+90h] [rbp+30h] BYREF
  char v17; // [rsp+94h] [rbp+34h]
  int v18; // [rsp+98h] [rbp+38h] BYREF

  v5 = a3;
  v7 = *a1;
  HIDWORD(a5) = a1[1];
  v9 = a2;
  LODWORD(a5) = v7;
  if ( (v7 & 4) != 0 )
  {
    v10 = a5;
  }
  else
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedVariantState(
                       a1,
                       v15);
    a5 = v10;
    v7 = v10;
  }
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))HIDWORD(v10);
  v16 = 2;
  v17 = 3;
  v18 = a4;
  if ( !a4 )
    return result;
  v12 = a4 - 1;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      v13 = 255;
      goto LABEL_11;
    }
    v14 = v9 + 4;
  }
  else
  {
    v14 = v9 + 6;
  }
  v13 = v5 + (v14 << 6);
LABEL_11:
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                                                                     a1 + 2,
                                                                                                     0xF81202u,
                                                                                                     (v7 >> 10) & 1,
                                                                                                     (v7 >> 11) & 1,
                                                                                                     v13,
                                                                                                     (_BYTE)v5 != 0 ? (unsigned int)result : 0);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(16257538LL, &v16, 0LL, v9, 0LL, &v18, (_BYTE)v5, 1LL);
  }
  return result;
}

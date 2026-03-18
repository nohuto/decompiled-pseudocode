/*
 * XREFs of TransformIvSpatialInputPoint @ 0x1C01EFD78
 * Callers:
 *     TransformIvSpatialInputRect @ 0x1C01EFE30 (TransformIvSpatialInputRect.c)
 *     EditionTransformIvTouchInput @ 0x1C01EFEC0 (EditionTransformIvTouchInput.c)
 *     EditionTransformPointForIvSpatialInput @ 0x1C01EFFA0 (EditionTransformPointForIvSpatialInput.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01DFA08 (LogicalToPhysicalInPlaceRect.c)
 */

void __fastcall TransformIvSpatialInputPoint(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  int v7; // [rsp+30h] [rbp-38h]
  int v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a2;
  *(_QWORD *)a4 = a3;
  v9 = v4;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VailUnifiedDpi__private_reporting,
    0x170D364u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_GdiEnableTestEscapeAPI_logged_traits,
    0,
    v7);
  LogicalToPhysicalInPlaceRect(a1, (__int64)&v9);
  *(_DWORD *)a4 += v9;
  *(_DWORD *)(a4 + 4) += DWORD1(v9);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VailUnifiedDpi__private_reporting,
    0x170D364u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_GdiEnableTestEscapeAPI_logged_traits,
    0,
    v8);
}

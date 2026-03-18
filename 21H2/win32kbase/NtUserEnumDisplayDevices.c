/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C00720C0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?NtUserEnumDisplayDevicesShared@@YAJPEAU_UNICODE_STRING@@KPEAU_DISPLAY_DEVICEW@@K@Z @ 0x1C007213C (-NtUserEnumDisplayDevicesShared@@YAJPEAU_UNICODE_STRING@@KPEAU_DISPLAY_DEVICEW@@K@Z.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _DISPLAY_DEVICEW *a3,
        unsigned int a4)
{
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnumDisplayDevices_UseSharedLock__private_reporting,
    31048924LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  return NtUserEnumDisplayDevicesShared(a1, a2, a3, a4);
}

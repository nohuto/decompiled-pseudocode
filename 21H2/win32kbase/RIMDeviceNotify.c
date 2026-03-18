/*
 * XREFs of RIMDeviceNotify @ 0x1C01A0D30
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01AA4F8 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 */

__int64 __fastcall RIMDeviceNotify(__int64 a1, __int64 a2)
{
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RIMPnpThreadQuickRelease__private_reporting,
    26503761LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  return RIMDeviceNotifyUsingAsyncPnpWorkNotification(a1, a2);
}

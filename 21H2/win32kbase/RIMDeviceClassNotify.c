/*
 * XREFs of RIMDeviceClassNotify @ 0x1C0047E70
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00456F8 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 */

__int64 __fastcall RIMDeviceClassNotify(__int64 NotificationStructure, __int64 *Context)
{
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RIMPnpThreadQuickRelease__private_reporting,
    26503761LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  return RIMDeviceClassNotifyUsingAsyncPnpWorkNotification(NotificationStructure, Context);
}

/*
 * XREFs of NtRIMOnAsyncPnpWorkNotification @ 0x1C00CB170
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 */

__int64 __fastcall NtRIMOnAsyncPnpWorkNotification(__int64 a1)
{
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  return RIMOnAsyncPnpWorkNotification(a1);
}

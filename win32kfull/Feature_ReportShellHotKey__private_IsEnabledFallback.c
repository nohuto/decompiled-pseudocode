/*
 * XREFs of Feature_ReportShellHotKey__private_IsEnabledFallback @ 0x1C012C778
 * Callers:
 *     Feature_ReportShellHotKey__private_IsEnabledDeviceUsage @ 0x1C012C740 (Feature_ReportShellHotKey__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C012CF68 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ReportShellHotKey__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ReportShellHotKey__private_descriptor);
}

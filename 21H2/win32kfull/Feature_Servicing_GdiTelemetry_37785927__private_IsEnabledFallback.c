/*
 * XREFs of Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback @ 0x1C016B8E4
 * Callers:
 *     Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage @ 0x1C016B8AC (Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1C01667C0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_GdiTelemetry_37785927__private_descriptor);
}

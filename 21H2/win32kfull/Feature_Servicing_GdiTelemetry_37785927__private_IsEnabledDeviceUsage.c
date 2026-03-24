/*
 * XREFs of Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage @ 0x1C016B8AC
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C01011E0 (NtGdiSelectBitmap.c)
 *     EngMarkBandingSurface @ 0x1C015EB10 (EngMarkBandingSurface.c)
 * Callees:
 *     Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback @ 0x1C016B8E4 (Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_GdiTelemetry_37785927__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GdiTelemetry_37785927__private_featureState & 1;
  else
    return Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GdiTelemetry_37785927__private_featureState,
             3LL);
}

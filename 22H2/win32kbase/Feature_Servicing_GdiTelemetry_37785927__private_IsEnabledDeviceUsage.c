/*
 * XREFs of Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledDeviceUsage @ 0x1C00CA138
 * Callers:
 *     EngAssociateSurface @ 0x1C00A3330 (EngAssociateSurface.c)
 * Callees:
 *     Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback @ 0x1C00CA170 (Feature_Servicing_GdiTelemetry_37785927__private_IsEnabledFallback.c)
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

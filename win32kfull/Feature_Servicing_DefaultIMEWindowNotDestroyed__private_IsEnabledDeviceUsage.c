/*
 * XREFs of Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledDeviceUsage @ 0x1C012EF40
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledFallback @ 0x1C012EF78 (Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_DefaultIMEWindowNotDestroyed__private_featureState & 0x10) != 0 )
    return Feature_Servicing_DefaultIMEWindowNotDestroyed__private_featureState & 1;
  else
    return Feature_Servicing_DefaultIMEWindowNotDestroyed__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DefaultIMEWindowNotDestroyed__private_featureState,
             3LL);
}

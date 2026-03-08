/*
 * XREFs of Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x1C00DCCB0
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback @ 0x1C00DCCE8 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_BypassGraphicsFreezeNotification__private_featureState & 0x10) != 0 )
    return Feature_Servicing_BypassGraphicsFreezeNotification__private_featureState & 1;
  else
    return Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_featureState,
             3LL);
}

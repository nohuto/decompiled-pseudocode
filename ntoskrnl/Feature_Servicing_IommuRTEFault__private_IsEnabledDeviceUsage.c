/*
 * XREFs of Feature_Servicing_IommuRTEFault__private_IsEnabledDeviceUsage @ 0x140409D08
 * Callers:
 *     IvtHandleInterrupt @ 0x14052A980 (IvtHandleInterrupt.c)
 * Callees:
 *     Feature_Servicing_IommuRTEFault__private_IsEnabledFallback @ 0x140409D40 (Feature_Servicing_IommuRTEFault__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_IommuRTEFault__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_IommuRTEFault__private_featureState & 0x10) != 0 )
    return Feature_Servicing_IommuRTEFault__private_featureState & 1;
  else
    return Feature_Servicing_IommuRTEFault__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_IommuRTEFault__private_featureState,
             3LL);
}

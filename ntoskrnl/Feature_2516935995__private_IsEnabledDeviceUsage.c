/*
 * XREFs of Feature_2516935995__private_IsEnabledDeviceUsage @ 0x140411864
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1402E7660 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1407715F8 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     Feature_2516935995__private_IsEnabledFallback @ 0x14041189C (Feature_2516935995__private_IsEnabledFallback.c)
 */

__int64 Feature_2516935995__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2516935995__private_featureState & 0x10) != 0 )
    return Feature_2516935995__private_featureState & 1;
  else
    return Feature_2516935995__private_IsEnabledFallback((unsigned int)Feature_2516935995__private_featureState, 3LL);
}

/*
 * XREFs of Feature_3391791421__private_IsEnabledDeviceUsage @ 0x1404118BC
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1402E7660 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1407715F8 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     Feature_3391791421__private_IsEnabledFallback @ 0x1404118F4 (Feature_3391791421__private_IsEnabledFallback.c)
 */

__int64 Feature_3391791421__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3391791421__private_featureState & 0x10) != 0 )
    return Feature_3391791421__private_featureState & 1;
  else
    return Feature_3391791421__private_IsEnabledFallback((unsigned int)Feature_3391791421__private_featureState, 3LL);
}

/*
 * XREFs of Feature_Servicing_Cc_InsufVA__private_IsEnabledDeviceUsage @ 0x140409E4C
 * Callers:
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 * Callees:
 *     Feature_Servicing_Cc_InsufVA__private_IsEnabledFallback @ 0x140409E84 (Feature_Servicing_Cc_InsufVA__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Cc_InsufVA__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_Cc_InsufVA__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Cc_InsufVA__private_featureState & 1;
  else
    return Feature_Servicing_Cc_InsufVA__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Cc_InsufVA__private_featureState,
             3LL);
}

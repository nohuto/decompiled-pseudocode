/*
 * XREFs of Feature_Servicing_CFONTPrintLeak__private_IsEnabledDeviceUsage @ 0x1C00DE78C
 * Callers:
 *     HmgAllocateDcAttr @ 0x1C00500EC (HmgAllocateDcAttr.c)
 * Callees:
 *     Feature_Servicing_CFONTPrintLeak__private_IsEnabledFallback @ 0x1C00DE7C4 (Feature_Servicing_CFONTPrintLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CFONTPrintLeak__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CFONTPrintLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CFONTPrintLeak__private_featureState & 1;
  else
    return Feature_Servicing_CFONTPrintLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CFONTPrintLeak__private_featureState,
             3LL);
}

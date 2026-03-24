/*
 * XREFs of Feature_2593139002__private_IsEnabledDeviceUsage @ 0x1C016BD54
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00A15D8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z @ 0x1C02B1FE4 (-pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z.c)
 * Callees:
 *     Feature_2593139002__private_IsEnabledFallback @ 0x1C016BD8C (Feature_2593139002__private_IsEnabledFallback.c)
 */

__int64 Feature_2593139002__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2593139002__private_featureState & 0x10) != 0 )
    return Feature_2593139002__private_featureState & 1;
  else
    return Feature_2593139002__private_IsEnabledFallback((unsigned int)Feature_2593139002__private_featureState, 3LL);
}

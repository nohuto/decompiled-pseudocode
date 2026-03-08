/*
 * XREFs of Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledDeviceUsage @ 0x1C00E16C8
 * Callers:
 *     ImpRpcAsyncInit @ 0x1C008C754 (ImpRpcAsyncInit.c)
 * Callees:
 *     Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledFallback @ 0x1C00E1700 (Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_ImpRpcAsyncInit__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ImpRpcAsyncInit__private_featureState & 1;
  else
    return Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ImpRpcAsyncInit__private_featureState,
             3LL);
}

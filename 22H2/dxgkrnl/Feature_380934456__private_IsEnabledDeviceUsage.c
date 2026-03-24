/*
 * XREFs of Feature_380934456__private_IsEnabledDeviceUsage @ 0x1C0028334
 * Callers:
 *     ?AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z @ 0x1C004F390 (-AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z.c)
 * Callees:
 *     Feature_380934456__private_IsEnabledFallback @ 0x1C002836C (Feature_380934456__private_IsEnabledFallback.c)
 */

__int64 Feature_380934456__private_IsEnabledDeviceUsage()
{
  if ( (Feature_380934456__private_featureState & 0x10) != 0 )
    return Feature_380934456__private_featureState & 1;
  else
    return Feature_380934456__private_IsEnabledFallback((unsigned int)Feature_380934456__private_featureState, 3LL);
}

/*
 * XREFs of Feature_2203404602__private_IsEnabledDeviceUsage @ 0x1C0130468
 * Callers:
 *     ?SendRequest@PROXYPORT@@QEAAJPEAXK0K@Z @ 0x1C02C2228 (-SendRequest@PROXYPORT@@QEAAJPEAXK0K@Z.c)
 * Callees:
 *     Feature_2203404602__private_IsEnabledFallback @ 0x1C01304A0 (Feature_2203404602__private_IsEnabledFallback.c)
 */

__int64 Feature_2203404602__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2203404602__private_featureState & 0x10) != 0 )
    return Feature_2203404602__private_featureState & 1;
  else
    return Feature_2203404602__private_IsEnabledFallback((unsigned int)Feature_2203404602__private_featureState, 3LL);
}

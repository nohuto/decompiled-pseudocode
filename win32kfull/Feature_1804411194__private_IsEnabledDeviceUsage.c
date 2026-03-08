/*
 * XREFs of Feature_1804411194__private_IsEnabledDeviceUsage @ 0x1C012F18C
 * Callers:
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0222698 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     Feature_1804411194__private_IsEnabledFallback @ 0x1C012F1C4 (Feature_1804411194__private_IsEnabledFallback.c)
 */

__int64 Feature_1804411194__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1804411194__private_featureState & 0x10) != 0 )
    return Feature_1804411194__private_featureState & 1;
  else
    return Feature_1804411194__private_IsEnabledFallback((unsigned int)Feature_1804411194__private_featureState, 3LL);
}

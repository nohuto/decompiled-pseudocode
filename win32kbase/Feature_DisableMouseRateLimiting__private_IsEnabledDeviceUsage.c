/*
 * XREFs of Feature_DisableMouseRateLimiting__private_IsEnabledDeviceUsage @ 0x1C00E10A4
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C00F3CE0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     Feature_DisableMouseRateLimiting__private_IsEnabledFallback @ 0x1C00E10DC (Feature_DisableMouseRateLimiting__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableMouseRateLimiting__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DisableMouseRateLimiting__private_featureState & 0x10) != 0 )
    return Feature_DisableMouseRateLimiting__private_featureState & 1;
  else
    return Feature_DisableMouseRateLimiting__private_IsEnabledFallback(
             (unsigned int)Feature_DisableMouseRateLimiting__private_featureState,
             3LL);
}

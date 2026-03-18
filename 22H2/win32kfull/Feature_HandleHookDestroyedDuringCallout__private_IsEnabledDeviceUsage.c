/*
 * XREFs of Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsage @ 0x1C013A5EC
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback @ 0x1C013A624 (Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback.c)
 */

__int64 Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsage()
{
  if ( (Feature_HandleHookDestroyedDuringCallout__private_featureState & 0x10) != 0 )
    return Feature_HandleHookDestroyedDuringCallout__private_featureState & 1;
  else
    return Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback(
             (unsigned int)Feature_HandleHookDestroyedDuringCallout__private_featureState,
             3LL);
}

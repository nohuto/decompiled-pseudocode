/*
 * XREFs of Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage @ 0x1C012C794
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0142A40 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback @ 0x1C012C7CC (Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback.c)
 */

__int64 Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage()
{
  if ( (Feature_ThrottleBackgroundRawMouseInput__private_featureState & 0x10) != 0 )
    return Feature_ThrottleBackgroundRawMouseInput__private_featureState & 1;
  else
    return Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledFallback(
             (unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_featureState,
             3LL);
}

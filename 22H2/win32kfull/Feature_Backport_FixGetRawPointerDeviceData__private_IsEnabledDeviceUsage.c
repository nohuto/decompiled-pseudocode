/*
 * XREFs of Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage @ 0x1C013C510
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C01D30A0 (NtUserGetPointerDeviceProperties.c)
 * Callees:
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback @ 0x1C013C548 (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback.c)
 */

__int64 Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Backport_FixGetRawPointerDeviceData__private_featureState & 0x10) != 0 )
    return Feature_Backport_FixGetRawPointerDeviceData__private_featureState & 1;
  else
    return Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledFallback(
             (unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_featureState,
             3LL);
}

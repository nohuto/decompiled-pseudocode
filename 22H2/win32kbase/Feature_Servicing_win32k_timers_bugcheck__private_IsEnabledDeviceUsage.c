/*
 * XREFs of Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledDeviceUsage @ 0x1C00C71A8
 * Callers:
 *     HMFreeObject @ 0x1C0009390 (HMFreeObject.c)
 * Callees:
 *     Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledFallback @ 0x1C00C71E0 (Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_win32k_timers_bugcheck__private_featureState & 0x10) != 0 )
    return Feature_Servicing_win32k_timers_bugcheck__private_featureState & 1;
  else
    return Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_win32k_timers_bugcheck__private_featureState,
             3LL);
}

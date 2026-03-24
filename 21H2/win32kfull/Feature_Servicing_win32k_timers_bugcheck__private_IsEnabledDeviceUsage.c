/*
 * XREFs of Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledDeviceUsage @ 0x1C0168894
 * Callers:
 *     InternalSetTimer @ 0x1C0080820 (InternalSetTimer.c)
 * Callees:
 *     Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledFallback @ 0x1C01688CC (Feature_Servicing_win32k_timers_bugcheck__private_IsEnabledFallback.c)
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

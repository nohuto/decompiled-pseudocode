/*
 * XREFs of Feature_Servicing_HooksTracingInvalidDeref__private_IsEnabledDeviceUsage @ 0x1C012DC04
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C009C8B4 (zzzSetWindowsHookEx.c)
 * Callees:
 *     Feature_Servicing_HooksTracingInvalidDeref__private_IsEnabledFallback @ 0x1C012DC3C (Feature_Servicing_HooksTracingInvalidDeref__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HooksTracingInvalidDeref__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_HooksTracingInvalidDeref__private_featureState & 0x10) != 0 )
    return Feature_Servicing_HooksTracingInvalidDeref__private_featureState & 1;
  else
    return Feature_Servicing_HooksTracingInvalidDeref__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HooksTracingInvalidDeref__private_featureState,
             3LL);
}

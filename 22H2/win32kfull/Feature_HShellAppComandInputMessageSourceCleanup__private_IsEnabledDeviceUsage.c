/*
 * XREFs of Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage @ 0x1C0139CF4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback @ 0x1C0139D2C (Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback.c)
 */

__int64 Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage()
{
  if ( (Feature_HShellAppComandInputMessageSourceCleanup__private_featureState & 0x10) != 0 )
    return Feature_HShellAppComandInputMessageSourceCleanup__private_featureState & 1;
  else
    return Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledFallback(
             (unsigned int)Feature_HShellAppComandInputMessageSourceCleanup__private_featureState,
             3LL);
}

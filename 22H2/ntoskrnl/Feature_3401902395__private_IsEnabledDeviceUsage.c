/*
 * XREFs of Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7528
 * Callers:
 *     PoDestroyReasonContext @ 0x14034BC54 (PoDestroyReasonContext.c)
 *     PoStoreRequester @ 0x14034BEB8 (PoStoreRequester.c)
 *     PoCaptureReasonContext @ 0x14034C66C (PoCaptureReasonContext.c)
 *     PopCaptureReasonContext @ 0x14034C910 (PopCaptureReasonContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x1406F5728 (PopDiagTracePowerRequestCreate.c)
 *     PopAvlGetPowerRequestKey @ 0x1406F5D74 (PopAvlGetPowerRequestKey.c)
 *     PopCreateUserPowerRequest @ 0x1406F71C8 (PopCreateUserPowerRequest.c)
 * Callees:
 *     Feature_3401902395__private_IsEnabledFallback @ 0x1403F7560 (Feature_3401902395__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3401902395__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3401902395__private_featureState & 0x10) != 0 )
    return Feature_3401902395__private_featureState & 1;
  else
    return Feature_3401902395__private_IsEnabledFallback((unsigned int)Feature_3401902395__private_featureState, 3LL);
}

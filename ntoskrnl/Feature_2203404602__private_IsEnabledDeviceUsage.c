/*
 * XREFs of Feature_2203404602__private_IsEnabledDeviceUsage @ 0x14040B478
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140717E20 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     Feature_2203404602__private_IsEnabledFallback @ 0x14040B4B0 (Feature_2203404602__private_IsEnabledFallback.c)
 */

__int64 Feature_2203404602__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2203404602__private_featureState & 0x10) != 0 )
    return Feature_2203404602__private_featureState & 1;
  else
    return Feature_2203404602__private_IsEnabledFallback((unsigned int)Feature_2203404602__private_featureState, 3LL);
}

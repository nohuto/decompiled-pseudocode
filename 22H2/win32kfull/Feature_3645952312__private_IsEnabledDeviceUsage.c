/*
 * XREFs of Feature_3645952312__private_IsEnabledDeviceUsage @ 0x1C0165CC4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6264 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 * Callees:
 *     Feature_3645952312__private_IsEnabledFallback @ 0x1C0165CFC (Feature_3645952312__private_IsEnabledFallback.c)
 */

__int64 Feature_3645952312__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3645952312__private_featureState & 0x10) != 0 )
    return Feature_3645952312__private_featureState & 1;
  else
    return Feature_3645952312__private_IsEnabledFallback((unsigned int)Feature_3645952312__private_featureState, 3LL);
}
